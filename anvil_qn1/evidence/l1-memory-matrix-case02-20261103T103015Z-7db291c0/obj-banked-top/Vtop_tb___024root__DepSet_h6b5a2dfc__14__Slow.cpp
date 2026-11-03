// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__15(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__15\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2875__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2875__part 
                            = vlSelf->__Vfunc_leading_zero32__2875__value;
                        vlSelf->__Vfunc_leading_zero32__2875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2875__count)));
                            vlSelf->__Vfunc_leading_zero32__2875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2875__count)));
                            vlSelf->__Vfunc_leading_zero32__2875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2875__count)));
                            vlSelf->__Vfunc_leading_zero32__2875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2875__count)));
                            vlSelf->__Vfunc_leading_zero32__2875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2875__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2887__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2887__part 
                            = vlSelf->__Vfunc_leading_zero32__2887__value;
                        vlSelf->__Vfunc_leading_zero32__2887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2887__count)));
                            vlSelf->__Vfunc_leading_zero32__2887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2887__count)));
                            vlSelf->__Vfunc_leading_zero32__2887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2887__count)));
                            vlSelf->__Vfunc_leading_zero32__2887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2887__count)));
                            vlSelf->__Vfunc_leading_zero32__2887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2887__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2899__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2899__part 
                            = vlSelf->__Vfunc_leading_zero32__2899__value;
                        vlSelf->__Vfunc_leading_zero32__2899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2899__count)));
                            vlSelf->__Vfunc_leading_zero32__2899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2899__count)));
                            vlSelf->__Vfunc_leading_zero32__2899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2899__count)));
                            vlSelf->__Vfunc_leading_zero32__2899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2899__count)));
                            vlSelf->__Vfunc_leading_zero32__2899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2899__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2911__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2911__part 
                            = vlSelf->__Vfunc_leading_zero32__2911__value;
                        vlSelf->__Vfunc_leading_zero32__2911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2911__count)));
                            vlSelf->__Vfunc_leading_zero32__2911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2911__count)));
                            vlSelf->__Vfunc_leading_zero32__2911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2911__count)));
                            vlSelf->__Vfunc_leading_zero32__2911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2911__count)));
                            vlSelf->__Vfunc_leading_zero32__2911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2923__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2923__part 
                            = vlSelf->__Vfunc_leading_zero32__2923__value;
                        vlSelf->__Vfunc_leading_zero32__2923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2923__count)));
                            vlSelf->__Vfunc_leading_zero32__2923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2923__count)));
                            vlSelf->__Vfunc_leading_zero32__2923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2923__count)));
                            vlSelf->__Vfunc_leading_zero32__2923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2923__count)));
                            vlSelf->__Vfunc_leading_zero32__2923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2923__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2935__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2935__part 
                            = vlSelf->__Vfunc_leading_zero32__2935__value;
                        vlSelf->__Vfunc_leading_zero32__2935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2935__count)));
                            vlSelf->__Vfunc_leading_zero32__2935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2935__count)));
                            vlSelf->__Vfunc_leading_zero32__2935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2935__count)));
                            vlSelf->__Vfunc_leading_zero32__2935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2935__count)));
                            vlSelf->__Vfunc_leading_zero32__2935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2947__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2947__part 
                            = vlSelf->__Vfunc_leading_zero32__2947__value;
                        vlSelf->__Vfunc_leading_zero32__2947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2947__count)));
                            vlSelf->__Vfunc_leading_zero32__2947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2947__count)));
                            vlSelf->__Vfunc_leading_zero32__2947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2947__count)));
                            vlSelf->__Vfunc_leading_zero32__2947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2947__count)));
                            vlSelf->__Vfunc_leading_zero32__2947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2959__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2959__part 
                            = vlSelf->__Vfunc_leading_zero32__2959__value;
                        vlSelf->__Vfunc_leading_zero32__2959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2959__count)));
                            vlSelf->__Vfunc_leading_zero32__2959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2959__count)));
                            vlSelf->__Vfunc_leading_zero32__2959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2959__count)));
                            vlSelf->__Vfunc_leading_zero32__2959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2959__count)));
                            vlSelf->__Vfunc_leading_zero32__2959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2959__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2971__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2971__part 
                            = vlSelf->__Vfunc_leading_zero32__2971__value;
                        vlSelf->__Vfunc_leading_zero32__2971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2971__count)));
                            vlSelf->__Vfunc_leading_zero32__2971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2971__count)));
                            vlSelf->__Vfunc_leading_zero32__2971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2971__count)));
                            vlSelf->__Vfunc_leading_zero32__2971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2971__count)));
                            vlSelf->__Vfunc_leading_zero32__2971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2983__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2983__part 
                            = vlSelf->__Vfunc_leading_zero32__2983__value;
                        vlSelf->__Vfunc_leading_zero32__2983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2983__count)));
                            vlSelf->__Vfunc_leading_zero32__2983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2983__count)));
                            vlSelf->__Vfunc_leading_zero32__2983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2983__count)));
                            vlSelf->__Vfunc_leading_zero32__2983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2983__count)));
                            vlSelf->__Vfunc_leading_zero32__2983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2995__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2995__part 
                            = vlSelf->__Vfunc_leading_zero32__2995__value;
                        vlSelf->__Vfunc_leading_zero32__2995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2995__count)));
                            vlSelf->__Vfunc_leading_zero32__2995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2995__count)));
                            vlSelf->__Vfunc_leading_zero32__2995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2995__count)));
                            vlSelf->__Vfunc_leading_zero32__2995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2995__count)));
                            vlSelf->__Vfunc_leading_zero32__2995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2995__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3007__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3007__part 
                            = vlSelf->__Vfunc_leading_zero32__3007__value;
                        vlSelf->__Vfunc_leading_zero32__3007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3007__count)));
                            vlSelf->__Vfunc_leading_zero32__3007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3007__count)));
                            vlSelf->__Vfunc_leading_zero32__3007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3007__count)));
                            vlSelf->__Vfunc_leading_zero32__3007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3007__count)));
                            vlSelf->__Vfunc_leading_zero32__3007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3019__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3019__part 
                            = vlSelf->__Vfunc_leading_zero32__3019__value;
                        vlSelf->__Vfunc_leading_zero32__3019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3019__count)));
                            vlSelf->__Vfunc_leading_zero32__3019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3019__count)));
                            vlSelf->__Vfunc_leading_zero32__3019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3019__count)));
                            vlSelf->__Vfunc_leading_zero32__3019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3019__count)));
                            vlSelf->__Vfunc_leading_zero32__3019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3031__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3031__part 
                            = vlSelf->__Vfunc_leading_zero32__3031__value;
                        vlSelf->__Vfunc_leading_zero32__3031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3031__count)));
                            vlSelf->__Vfunc_leading_zero32__3031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3031__count)));
                            vlSelf->__Vfunc_leading_zero32__3031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3031__count)));
                            vlSelf->__Vfunc_leading_zero32__3031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3031__count)));
                            vlSelf->__Vfunc_leading_zero32__3031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3031__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3043__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3043__part 
                            = vlSelf->__Vfunc_leading_zero32__3043__value;
                        vlSelf->__Vfunc_leading_zero32__3043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3043__count)));
                            vlSelf->__Vfunc_leading_zero32__3043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3043__count)));
                            vlSelf->__Vfunc_leading_zero32__3043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3043__count)));
                            vlSelf->__Vfunc_leading_zero32__3043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3043__count)));
                            vlSelf->__Vfunc_leading_zero32__3043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3055__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3055__part 
                            = vlSelf->__Vfunc_leading_zero32__3055__value;
                        vlSelf->__Vfunc_leading_zero32__3055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3055__count)));
                            vlSelf->__Vfunc_leading_zero32__3055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3055__count)));
                            vlSelf->__Vfunc_leading_zero32__3055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3055__count)));
                            vlSelf->__Vfunc_leading_zero32__3055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3055__count)));
                            vlSelf->__Vfunc_leading_zero32__3055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3067__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3067__part 
                            = vlSelf->__Vfunc_leading_zero32__3067__value;
                        vlSelf->__Vfunc_leading_zero32__3067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3067__count)));
                            vlSelf->__Vfunc_leading_zero32__3067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3067__count)));
                            vlSelf->__Vfunc_leading_zero32__3067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3067__count)));
                            vlSelf->__Vfunc_leading_zero32__3067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3067__count)));
                            vlSelf->__Vfunc_leading_zero32__3067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3067__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3079__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3079__part 
                            = vlSelf->__Vfunc_leading_zero32__3079__value;
                        vlSelf->__Vfunc_leading_zero32__3079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3079__count)));
                            vlSelf->__Vfunc_leading_zero32__3079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3079__count)));
                            vlSelf->__Vfunc_leading_zero32__3079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3079__count)));
                            vlSelf->__Vfunc_leading_zero32__3079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3079__count)));
                            vlSelf->__Vfunc_leading_zero32__3079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3091__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3091__part 
                            = vlSelf->__Vfunc_leading_zero32__3091__value;
                        vlSelf->__Vfunc_leading_zero32__3091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3091__count)));
                            vlSelf->__Vfunc_leading_zero32__3091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3091__count)));
                            vlSelf->__Vfunc_leading_zero32__3091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3091__count)));
                            vlSelf->__Vfunc_leading_zero32__3091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3091__count)));
                            vlSelf->__Vfunc_leading_zero32__3091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3103__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3103__part 
                            = vlSelf->__Vfunc_leading_zero32__3103__value;
                        vlSelf->__Vfunc_leading_zero32__3103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3103__count)));
                            vlSelf->__Vfunc_leading_zero32__3103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3103__count)));
                            vlSelf->__Vfunc_leading_zero32__3103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3103__count)));
                            vlSelf->__Vfunc_leading_zero32__3103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3103__count)));
                            vlSelf->__Vfunc_leading_zero32__3103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3103__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3115__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3115__part 
                            = vlSelf->__Vfunc_leading_zero32__3115__value;
                        vlSelf->__Vfunc_leading_zero32__3115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3115__count)));
                            vlSelf->__Vfunc_leading_zero32__3115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3115__count)));
                            vlSelf->__Vfunc_leading_zero32__3115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3115__count)));
                            vlSelf->__Vfunc_leading_zero32__3115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3115__count)));
                            vlSelf->__Vfunc_leading_zero32__3115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3127__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3127__part 
                            = vlSelf->__Vfunc_leading_zero32__3127__value;
                        vlSelf->__Vfunc_leading_zero32__3127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3127__count)));
                            vlSelf->__Vfunc_leading_zero32__3127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3127__count)));
                            vlSelf->__Vfunc_leading_zero32__3127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3127__count)));
                            vlSelf->__Vfunc_leading_zero32__3127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3127__count)));
                            vlSelf->__Vfunc_leading_zero32__3127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3139__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3139__part 
                            = vlSelf->__Vfunc_leading_zero32__3139__value;
                        vlSelf->__Vfunc_leading_zero32__3139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3139__count)));
                            vlSelf->__Vfunc_leading_zero32__3139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3139__count)));
                            vlSelf->__Vfunc_leading_zero32__3139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3139__count)));
                            vlSelf->__Vfunc_leading_zero32__3139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3139__count)));
                            vlSelf->__Vfunc_leading_zero32__3139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3139__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3151__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3151__part 
                            = vlSelf->__Vfunc_leading_zero32__3151__value;
                        vlSelf->__Vfunc_leading_zero32__3151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3151__count)));
                            vlSelf->__Vfunc_leading_zero32__3151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3151__count)));
                            vlSelf->__Vfunc_leading_zero32__3151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3151__count)));
                            vlSelf->__Vfunc_leading_zero32__3151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3151__count)));
                            vlSelf->__Vfunc_leading_zero32__3151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3163__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3163__part 
                            = vlSelf->__Vfunc_leading_zero32__3163__value;
                        vlSelf->__Vfunc_leading_zero32__3163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3163__count)));
                            vlSelf->__Vfunc_leading_zero32__3163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3163__count)));
                            vlSelf->__Vfunc_leading_zero32__3163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3163__count)));
                            vlSelf->__Vfunc_leading_zero32__3163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3163__count)));
                            vlSelf->__Vfunc_leading_zero32__3163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3175__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3175__part 
                            = vlSelf->__Vfunc_leading_zero32__3175__value;
                        vlSelf->__Vfunc_leading_zero32__3175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3175__count)));
                            vlSelf->__Vfunc_leading_zero32__3175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3175__count)));
                            vlSelf->__Vfunc_leading_zero32__3175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3175__count)));
                            vlSelf->__Vfunc_leading_zero32__3175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3175__count)));
                            vlSelf->__Vfunc_leading_zero32__3175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3187__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3187__part 
                            = vlSelf->__Vfunc_leading_zero32__3187__value;
                        vlSelf->__Vfunc_leading_zero32__3187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3187__count)));
                            vlSelf->__Vfunc_leading_zero32__3187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3187__count)));
                            vlSelf->__Vfunc_leading_zero32__3187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3187__count)));
                            vlSelf->__Vfunc_leading_zero32__3187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3187__count)));
                            vlSelf->__Vfunc_leading_zero32__3187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3199__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3199__part 
                            = vlSelf->__Vfunc_leading_zero32__3199__value;
                        vlSelf->__Vfunc_leading_zero32__3199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3199__count)));
                            vlSelf->__Vfunc_leading_zero32__3199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3199__count)));
                            vlSelf->__Vfunc_leading_zero32__3199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3199__count)));
                            vlSelf->__Vfunc_leading_zero32__3199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3199__count)));
                            vlSelf->__Vfunc_leading_zero32__3199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3211__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3211__part 
                            = vlSelf->__Vfunc_leading_zero32__3211__value;
                        vlSelf->__Vfunc_leading_zero32__3211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3211__count)));
                            vlSelf->__Vfunc_leading_zero32__3211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3211__count)));
                            vlSelf->__Vfunc_leading_zero32__3211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3211__count)));
                            vlSelf->__Vfunc_leading_zero32__3211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3211__count)));
                            vlSelf->__Vfunc_leading_zero32__3211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3223__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3223__part 
                            = vlSelf->__Vfunc_leading_zero32__3223__value;
                        vlSelf->__Vfunc_leading_zero32__3223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3223__count)));
                            vlSelf->__Vfunc_leading_zero32__3223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3223__count)));
                            vlSelf->__Vfunc_leading_zero32__3223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3223__count)));
                            vlSelf->__Vfunc_leading_zero32__3223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3223__count)));
                            vlSelf->__Vfunc_leading_zero32__3223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3235__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3235__part 
                            = vlSelf->__Vfunc_leading_zero32__3235__value;
                        vlSelf->__Vfunc_leading_zero32__3235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3235__count)));
                            vlSelf->__Vfunc_leading_zero32__3235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3235__count)));
                            vlSelf->__Vfunc_leading_zero32__3235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3235__count)));
                            vlSelf->__Vfunc_leading_zero32__3235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3235__count)));
                            vlSelf->__Vfunc_leading_zero32__3235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3247__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3247__part 
                            = vlSelf->__Vfunc_leading_zero32__3247__value;
                        vlSelf->__Vfunc_leading_zero32__3247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3247__count)));
                            vlSelf->__Vfunc_leading_zero32__3247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3247__count)));
                            vlSelf->__Vfunc_leading_zero32__3247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3247__count)));
                            vlSelf->__Vfunc_leading_zero32__3247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3247__count)));
                            vlSelf->__Vfunc_leading_zero32__3247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3259__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3259__part 
                            = vlSelf->__Vfunc_leading_zero32__3259__value;
                        vlSelf->__Vfunc_leading_zero32__3259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3259__count)));
                            vlSelf->__Vfunc_leading_zero32__3259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3259__count)));
                            vlSelf->__Vfunc_leading_zero32__3259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3259__count)));
                            vlSelf->__Vfunc_leading_zero32__3259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3259__count)));
                            vlSelf->__Vfunc_leading_zero32__3259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3271__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3271__part 
                            = vlSelf->__Vfunc_leading_zero32__3271__value;
                        vlSelf->__Vfunc_leading_zero32__3271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3271__count)));
                            vlSelf->__Vfunc_leading_zero32__3271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3271__count)));
                            vlSelf->__Vfunc_leading_zero32__3271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3271__count)));
                            vlSelf->__Vfunc_leading_zero32__3271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3271__count)));
                            vlSelf->__Vfunc_leading_zero32__3271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3283__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3283__part 
                            = vlSelf->__Vfunc_leading_zero32__3283__value;
                        vlSelf->__Vfunc_leading_zero32__3283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3283__count)));
                            vlSelf->__Vfunc_leading_zero32__3283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3283__count)));
                            vlSelf->__Vfunc_leading_zero32__3283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3283__count)));
                            vlSelf->__Vfunc_leading_zero32__3283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3283__count)));
                            vlSelf->__Vfunc_leading_zero32__3283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3295__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3295__part 
                            = vlSelf->__Vfunc_leading_zero32__3295__value;
                        vlSelf->__Vfunc_leading_zero32__3295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3295__count)));
                            vlSelf->__Vfunc_leading_zero32__3295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3295__count)));
                            vlSelf->__Vfunc_leading_zero32__3295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3295__count)));
                            vlSelf->__Vfunc_leading_zero32__3295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3295__count)));
                            vlSelf->__Vfunc_leading_zero32__3295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3307__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3307__part 
                            = vlSelf->__Vfunc_leading_zero32__3307__value;
                        vlSelf->__Vfunc_leading_zero32__3307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3307__count)));
                            vlSelf->__Vfunc_leading_zero32__3307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3307__count)));
                            vlSelf->__Vfunc_leading_zero32__3307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3307__count)));
                            vlSelf->__Vfunc_leading_zero32__3307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3307__count)));
                            vlSelf->__Vfunc_leading_zero32__3307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3319__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3319__part 
                            = vlSelf->__Vfunc_leading_zero32__3319__value;
                        vlSelf->__Vfunc_leading_zero32__3319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3319__count)));
                            vlSelf->__Vfunc_leading_zero32__3319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3319__count)));
                            vlSelf->__Vfunc_leading_zero32__3319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3319__count)));
                            vlSelf->__Vfunc_leading_zero32__3319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3319__count)));
                            vlSelf->__Vfunc_leading_zero32__3319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3331__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3331__part 
                            = vlSelf->__Vfunc_leading_zero32__3331__value;
                        vlSelf->__Vfunc_leading_zero32__3331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3331__count)));
                            vlSelf->__Vfunc_leading_zero32__3331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3331__count)));
                            vlSelf->__Vfunc_leading_zero32__3331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3331__count)));
                            vlSelf->__Vfunc_leading_zero32__3331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3331__count)));
                            vlSelf->__Vfunc_leading_zero32__3331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3343__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3343__part 
                            = vlSelf->__Vfunc_leading_zero32__3343__value;
                        vlSelf->__Vfunc_leading_zero32__3343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3343__count)));
                            vlSelf->__Vfunc_leading_zero32__3343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3343__count)));
                            vlSelf->__Vfunc_leading_zero32__3343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3343__count)));
                            vlSelf->__Vfunc_leading_zero32__3343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3343__count)));
                            vlSelf->__Vfunc_leading_zero32__3343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3355__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3355__part 
                            = vlSelf->__Vfunc_leading_zero32__3355__value;
                        vlSelf->__Vfunc_leading_zero32__3355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3355__count)));
                            vlSelf->__Vfunc_leading_zero32__3355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3355__count)));
                            vlSelf->__Vfunc_leading_zero32__3355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3355__count)));
                            vlSelf->__Vfunc_leading_zero32__3355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3355__count)));
                            vlSelf->__Vfunc_leading_zero32__3355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3367__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3367__part 
                            = vlSelf->__Vfunc_leading_zero32__3367__value;
                        vlSelf->__Vfunc_leading_zero32__3367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3367__count)));
                            vlSelf->__Vfunc_leading_zero32__3367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3367__count)));
                            vlSelf->__Vfunc_leading_zero32__3367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3367__count)));
                            vlSelf->__Vfunc_leading_zero32__3367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3367__count)));
                            vlSelf->__Vfunc_leading_zero32__3367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3379__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3379__part 
                            = vlSelf->__Vfunc_leading_zero32__3379__value;
                        vlSelf->__Vfunc_leading_zero32__3379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3379__count)));
                            vlSelf->__Vfunc_leading_zero32__3379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3379__count)));
                            vlSelf->__Vfunc_leading_zero32__3379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3379__count)));
                            vlSelf->__Vfunc_leading_zero32__3379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3379__count)));
                            vlSelf->__Vfunc_leading_zero32__3379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3391__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3391__part 
                            = vlSelf->__Vfunc_leading_zero32__3391__value;
                        vlSelf->__Vfunc_leading_zero32__3391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3391__count)));
                            vlSelf->__Vfunc_leading_zero32__3391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3391__count)));
                            vlSelf->__Vfunc_leading_zero32__3391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3391__count)));
                            vlSelf->__Vfunc_leading_zero32__3391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3391__count)));
                            vlSelf->__Vfunc_leading_zero32__3391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3403__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3403__part 
                            = vlSelf->__Vfunc_leading_zero32__3403__value;
                        vlSelf->__Vfunc_leading_zero32__3403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3403__count)));
                            vlSelf->__Vfunc_leading_zero32__3403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3403__count)));
                            vlSelf->__Vfunc_leading_zero32__3403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3403__count)));
                            vlSelf->__Vfunc_leading_zero32__3403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3403__count)));
                            vlSelf->__Vfunc_leading_zero32__3403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3415__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3415__part 
                            = vlSelf->__Vfunc_leading_zero32__3415__value;
                        vlSelf->__Vfunc_leading_zero32__3415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3415__count)));
                            vlSelf->__Vfunc_leading_zero32__3415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3415__count)));
                            vlSelf->__Vfunc_leading_zero32__3415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3415__count)));
                            vlSelf->__Vfunc_leading_zero32__3415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3415__count)));
                            vlSelf->__Vfunc_leading_zero32__3415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3427__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3427__part 
                            = vlSelf->__Vfunc_leading_zero32__3427__value;
                        vlSelf->__Vfunc_leading_zero32__3427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3427__count)));
                            vlSelf->__Vfunc_leading_zero32__3427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3427__count)));
                            vlSelf->__Vfunc_leading_zero32__3427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3427__count)));
                            vlSelf->__Vfunc_leading_zero32__3427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3427__count)));
                            vlSelf->__Vfunc_leading_zero32__3427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3439__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3439__part 
                            = vlSelf->__Vfunc_leading_zero32__3439__value;
                        vlSelf->__Vfunc_leading_zero32__3439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3439__count)));
                            vlSelf->__Vfunc_leading_zero32__3439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3439__count)));
                            vlSelf->__Vfunc_leading_zero32__3439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3439__count)));
                            vlSelf->__Vfunc_leading_zero32__3439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3439__count)));
                            vlSelf->__Vfunc_leading_zero32__3439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3451__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3451__part 
                            = vlSelf->__Vfunc_leading_zero32__3451__value;
                        vlSelf->__Vfunc_leading_zero32__3451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3451__count)));
                            vlSelf->__Vfunc_leading_zero32__3451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3451__count)));
                            vlSelf->__Vfunc_leading_zero32__3451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3451__count)));
                            vlSelf->__Vfunc_leading_zero32__3451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3451__count)));
                            vlSelf->__Vfunc_leading_zero32__3451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3463__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3463__part 
                            = vlSelf->__Vfunc_leading_zero32__3463__value;
                        vlSelf->__Vfunc_leading_zero32__3463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3463__count)));
                            vlSelf->__Vfunc_leading_zero32__3463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3463__count)));
                            vlSelf->__Vfunc_leading_zero32__3463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3463__count)));
                            vlSelf->__Vfunc_leading_zero32__3463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3463__count)));
                            vlSelf->__Vfunc_leading_zero32__3463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3475__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3475__part 
                            = vlSelf->__Vfunc_leading_zero32__3475__value;
                        vlSelf->__Vfunc_leading_zero32__3475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3475__count)));
                            vlSelf->__Vfunc_leading_zero32__3475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3475__count)));
                            vlSelf->__Vfunc_leading_zero32__3475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3475__count)));
                            vlSelf->__Vfunc_leading_zero32__3475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3475__count)));
                            vlSelf->__Vfunc_leading_zero32__3475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3487__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3487__part 
                            = vlSelf->__Vfunc_leading_zero32__3487__value;
                        vlSelf->__Vfunc_leading_zero32__3487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3487__count)));
                            vlSelf->__Vfunc_leading_zero32__3487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3487__count)));
                            vlSelf->__Vfunc_leading_zero32__3487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3487__count)));
                            vlSelf->__Vfunc_leading_zero32__3487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3487__count)));
                            vlSelf->__Vfunc_leading_zero32__3487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3499__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3499__part 
                            = vlSelf->__Vfunc_leading_zero32__3499__value;
                        vlSelf->__Vfunc_leading_zero32__3499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3499__count)));
                            vlSelf->__Vfunc_leading_zero32__3499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3499__count)));
                            vlSelf->__Vfunc_leading_zero32__3499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3499__count)));
                            vlSelf->__Vfunc_leading_zero32__3499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3499__count)));
                            vlSelf->__Vfunc_leading_zero32__3499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3511__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3511__part 
                            = vlSelf->__Vfunc_leading_zero32__3511__value;
                        vlSelf->__Vfunc_leading_zero32__3511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3511__count)));
                            vlSelf->__Vfunc_leading_zero32__3511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3511__count)));
                            vlSelf->__Vfunc_leading_zero32__3511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3511__count)));
                            vlSelf->__Vfunc_leading_zero32__3511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3511__count)));
                            vlSelf->__Vfunc_leading_zero32__3511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3523__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3523__part 
                            = vlSelf->__Vfunc_leading_zero32__3523__value;
                        vlSelf->__Vfunc_leading_zero32__3523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3523__count)));
                            vlSelf->__Vfunc_leading_zero32__3523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3523__count)));
                            vlSelf->__Vfunc_leading_zero32__3523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3523__count)));
                            vlSelf->__Vfunc_leading_zero32__3523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3523__count)));
                            vlSelf->__Vfunc_leading_zero32__3523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3535__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3535__part 
                            = vlSelf->__Vfunc_leading_zero32__3535__value;
                        vlSelf->__Vfunc_leading_zero32__3535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3535__count)));
                            vlSelf->__Vfunc_leading_zero32__3535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3535__count)));
                            vlSelf->__Vfunc_leading_zero32__3535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3535__count)));
                            vlSelf->__Vfunc_leading_zero32__3535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3535__count)));
                            vlSelf->__Vfunc_leading_zero32__3535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3547__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3547__part 
                            = vlSelf->__Vfunc_leading_zero32__3547__value;
                        vlSelf->__Vfunc_leading_zero32__3547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3547__count)));
                            vlSelf->__Vfunc_leading_zero32__3547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3547__count)));
                            vlSelf->__Vfunc_leading_zero32__3547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3547__count)));
                            vlSelf->__Vfunc_leading_zero32__3547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3547__count)));
                            vlSelf->__Vfunc_leading_zero32__3547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3559__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3559__part 
                            = vlSelf->__Vfunc_leading_zero32__3559__value;
                        vlSelf->__Vfunc_leading_zero32__3559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3559__count)));
                            vlSelf->__Vfunc_leading_zero32__3559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3559__count)));
                            vlSelf->__Vfunc_leading_zero32__3559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3559__count)));
                            vlSelf->__Vfunc_leading_zero32__3559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3559__count)));
                            vlSelf->__Vfunc_leading_zero32__3559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3571__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3571__part 
                            = vlSelf->__Vfunc_leading_zero32__3571__value;
                        vlSelf->__Vfunc_leading_zero32__3571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3571__count)));
                            vlSelf->__Vfunc_leading_zero32__3571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3571__count)));
                            vlSelf->__Vfunc_leading_zero32__3571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3571__count)));
                            vlSelf->__Vfunc_leading_zero32__3571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3571__count)));
                            vlSelf->__Vfunc_leading_zero32__3571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3583__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3583__part 
                            = vlSelf->__Vfunc_leading_zero32__3583__value;
                        vlSelf->__Vfunc_leading_zero32__3583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3583__count)));
                            vlSelf->__Vfunc_leading_zero32__3583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3583__count)));
                            vlSelf->__Vfunc_leading_zero32__3583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3583__count)));
                            vlSelf->__Vfunc_leading_zero32__3583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3583__count)));
                            vlSelf->__Vfunc_leading_zero32__3583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3595__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3595__part 
                            = vlSelf->__Vfunc_leading_zero32__3595__value;
                        vlSelf->__Vfunc_leading_zero32__3595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3595__count)));
                            vlSelf->__Vfunc_leading_zero32__3595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3595__count)));
                            vlSelf->__Vfunc_leading_zero32__3595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3595__count)));
                            vlSelf->__Vfunc_leading_zero32__3595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3595__count)));
                            vlSelf->__Vfunc_leading_zero32__3595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3607__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3607__part 
                            = vlSelf->__Vfunc_leading_zero32__3607__value;
                        vlSelf->__Vfunc_leading_zero32__3607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3607__count)));
                            vlSelf->__Vfunc_leading_zero32__3607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3607__count)));
                            vlSelf->__Vfunc_leading_zero32__3607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3607__count)));
                            vlSelf->__Vfunc_leading_zero32__3607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3607__count)));
                            vlSelf->__Vfunc_leading_zero32__3607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3619__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3619__part 
                            = vlSelf->__Vfunc_leading_zero32__3619__value;
                        vlSelf->__Vfunc_leading_zero32__3619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3619__count)));
                            vlSelf->__Vfunc_leading_zero32__3619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3619__count)));
                            vlSelf->__Vfunc_leading_zero32__3619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3619__count)));
                            vlSelf->__Vfunc_leading_zero32__3619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3619__count)));
                            vlSelf->__Vfunc_leading_zero32__3619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3631__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3631__part 
                            = vlSelf->__Vfunc_leading_zero32__3631__value;
                        vlSelf->__Vfunc_leading_zero32__3631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3631__count)));
                            vlSelf->__Vfunc_leading_zero32__3631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3631__count)));
                            vlSelf->__Vfunc_leading_zero32__3631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3631__count)));
                            vlSelf->__Vfunc_leading_zero32__3631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3631__count)));
                            vlSelf->__Vfunc_leading_zero32__3631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3643__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3643__part 
                            = vlSelf->__Vfunc_leading_zero32__3643__value;
                        vlSelf->__Vfunc_leading_zero32__3643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3643__count)));
                            vlSelf->__Vfunc_leading_zero32__3643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3643__count)));
                            vlSelf->__Vfunc_leading_zero32__3643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3643__count)));
                            vlSelf->__Vfunc_leading_zero32__3643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3643__count)));
                            vlSelf->__Vfunc_leading_zero32__3643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3655__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3655__part 
                            = vlSelf->__Vfunc_leading_zero32__3655__value;
                        vlSelf->__Vfunc_leading_zero32__3655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3655__count)));
                            vlSelf->__Vfunc_leading_zero32__3655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3655__count)));
                            vlSelf->__Vfunc_leading_zero32__3655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3655__count)));
                            vlSelf->__Vfunc_leading_zero32__3655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3655__count)));
                            vlSelf->__Vfunc_leading_zero32__3655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3667__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3667__part 
                            = vlSelf->__Vfunc_leading_zero32__3667__value;
                        vlSelf->__Vfunc_leading_zero32__3667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3667__count)));
                            vlSelf->__Vfunc_leading_zero32__3667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3667__count)));
                            vlSelf->__Vfunc_leading_zero32__3667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3667__count)));
                            vlSelf->__Vfunc_leading_zero32__3667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3667__count)));
                            vlSelf->__Vfunc_leading_zero32__3667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3679__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3679__part 
                            = vlSelf->__Vfunc_leading_zero32__3679__value;
                        vlSelf->__Vfunc_leading_zero32__3679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3679__count)));
                            vlSelf->__Vfunc_leading_zero32__3679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3679__count)));
                            vlSelf->__Vfunc_leading_zero32__3679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3679__count)));
                            vlSelf->__Vfunc_leading_zero32__3679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3679__count)));
                            vlSelf->__Vfunc_leading_zero32__3679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3691__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3691__part 
                            = vlSelf->__Vfunc_leading_zero32__3691__value;
                        vlSelf->__Vfunc_leading_zero32__3691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3691__count)));
                            vlSelf->__Vfunc_leading_zero32__3691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3691__count)));
                            vlSelf->__Vfunc_leading_zero32__3691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3691__count)));
                            vlSelf->__Vfunc_leading_zero32__3691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3691__count)));
                            vlSelf->__Vfunc_leading_zero32__3691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3703__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3703__part 
                            = vlSelf->__Vfunc_leading_zero32__3703__value;
                        vlSelf->__Vfunc_leading_zero32__3703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3703__count)));
                            vlSelf->__Vfunc_leading_zero32__3703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3703__count)));
                            vlSelf->__Vfunc_leading_zero32__3703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3703__count)));
                            vlSelf->__Vfunc_leading_zero32__3703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3703__count)));
                            vlSelf->__Vfunc_leading_zero32__3703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3715__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3715__part 
                            = vlSelf->__Vfunc_leading_zero32__3715__value;
                        vlSelf->__Vfunc_leading_zero32__3715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3715__count)));
                            vlSelf->__Vfunc_leading_zero32__3715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3715__count)));
                            vlSelf->__Vfunc_leading_zero32__3715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3715__count)));
                            vlSelf->__Vfunc_leading_zero32__3715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3715__count)));
                            vlSelf->__Vfunc_leading_zero32__3715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3727__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3727__part 
                            = vlSelf->__Vfunc_leading_zero32__3727__value;
                        vlSelf->__Vfunc_leading_zero32__3727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3727__count)));
                            vlSelf->__Vfunc_leading_zero32__3727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3727__count)));
                            vlSelf->__Vfunc_leading_zero32__3727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3727__count)));
                            vlSelf->__Vfunc_leading_zero32__3727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3727__count)));
                            vlSelf->__Vfunc_leading_zero32__3727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3739__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3739__part 
                            = vlSelf->__Vfunc_leading_zero32__3739__value;
                        vlSelf->__Vfunc_leading_zero32__3739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3739__count)));
                            vlSelf->__Vfunc_leading_zero32__3739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3739__count)));
                            vlSelf->__Vfunc_leading_zero32__3739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3739__count)));
                            vlSelf->__Vfunc_leading_zero32__3739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3739__count)));
                            vlSelf->__Vfunc_leading_zero32__3739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3751__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3751__part 
                            = vlSelf->__Vfunc_leading_zero32__3751__value;
                        vlSelf->__Vfunc_leading_zero32__3751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3751__count)));
                            vlSelf->__Vfunc_leading_zero32__3751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3751__count)));
                            vlSelf->__Vfunc_leading_zero32__3751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3751__count)));
                            vlSelf->__Vfunc_leading_zero32__3751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3751__count)));
                            vlSelf->__Vfunc_leading_zero32__3751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3763__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3763__part 
                            = vlSelf->__Vfunc_leading_zero32__3763__value;
                        vlSelf->__Vfunc_leading_zero32__3763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3763__count)));
                            vlSelf->__Vfunc_leading_zero32__3763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3763__count)));
                            vlSelf->__Vfunc_leading_zero32__3763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3763__count)));
                            vlSelf->__Vfunc_leading_zero32__3763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3763__count)));
                            vlSelf->__Vfunc_leading_zero32__3763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3775__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3775__part 
                            = vlSelf->__Vfunc_leading_zero32__3775__value;
                        vlSelf->__Vfunc_leading_zero32__3775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3775__count)));
                            vlSelf->__Vfunc_leading_zero32__3775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3775__count)));
                            vlSelf->__Vfunc_leading_zero32__3775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3775__count)));
                            vlSelf->__Vfunc_leading_zero32__3775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3775__count)));
                            vlSelf->__Vfunc_leading_zero32__3775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3787__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3787__part 
                            = vlSelf->__Vfunc_leading_zero32__3787__value;
                        vlSelf->__Vfunc_leading_zero32__3787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3787__count)));
                            vlSelf->__Vfunc_leading_zero32__3787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3787__count)));
                            vlSelf->__Vfunc_leading_zero32__3787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3787__count)));
                            vlSelf->__Vfunc_leading_zero32__3787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3787__count)));
                            vlSelf->__Vfunc_leading_zero32__3787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3799__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3799__part 
                            = vlSelf->__Vfunc_leading_zero32__3799__value;
                        vlSelf->__Vfunc_leading_zero32__3799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3799__count)));
                            vlSelf->__Vfunc_leading_zero32__3799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3799__count)));
                            vlSelf->__Vfunc_leading_zero32__3799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3799__count)));
                            vlSelf->__Vfunc_leading_zero32__3799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3799__count)));
                            vlSelf->__Vfunc_leading_zero32__3799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3811__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3811__part 
                            = vlSelf->__Vfunc_leading_zero32__3811__value;
                        vlSelf->__Vfunc_leading_zero32__3811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3811__count)));
                            vlSelf->__Vfunc_leading_zero32__3811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3811__count)));
                            vlSelf->__Vfunc_leading_zero32__3811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3811__count)));
                            vlSelf->__Vfunc_leading_zero32__3811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3811__count)));
                            vlSelf->__Vfunc_leading_zero32__3811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3823__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3823__part 
                            = vlSelf->__Vfunc_leading_zero32__3823__value;
                        vlSelf->__Vfunc_leading_zero32__3823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3823__count)));
                            vlSelf->__Vfunc_leading_zero32__3823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3823__count)));
                            vlSelf->__Vfunc_leading_zero32__3823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3823__count)));
                            vlSelf->__Vfunc_leading_zero32__3823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3823__count)));
                            vlSelf->__Vfunc_leading_zero32__3823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3835__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3835__part 
                            = vlSelf->__Vfunc_leading_zero32__3835__value;
                        vlSelf->__Vfunc_leading_zero32__3835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3835__count)));
                            vlSelf->__Vfunc_leading_zero32__3835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3835__count)));
                            vlSelf->__Vfunc_leading_zero32__3835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3835__count)));
                            vlSelf->__Vfunc_leading_zero32__3835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3835__count)));
                            vlSelf->__Vfunc_leading_zero32__3835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3847__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3847__part 
                            = vlSelf->__Vfunc_leading_zero32__3847__value;
                        vlSelf->__Vfunc_leading_zero32__3847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3847__count)));
                            vlSelf->__Vfunc_leading_zero32__3847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3847__count)));
                            vlSelf->__Vfunc_leading_zero32__3847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3847__count)));
                            vlSelf->__Vfunc_leading_zero32__3847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3847__count)));
                            vlSelf->__Vfunc_leading_zero32__3847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3859__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3859__part 
                            = vlSelf->__Vfunc_leading_zero32__3859__value;
                        vlSelf->__Vfunc_leading_zero32__3859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3859__count)));
                            vlSelf->__Vfunc_leading_zero32__3859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3859__count)));
                            vlSelf->__Vfunc_leading_zero32__3859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3859__count)));
                            vlSelf->__Vfunc_leading_zero32__3859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3859__count)));
                            vlSelf->__Vfunc_leading_zero32__3859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3871__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3871__part 
                            = vlSelf->__Vfunc_leading_zero32__3871__value;
                        vlSelf->__Vfunc_leading_zero32__3871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3871__count)));
                            vlSelf->__Vfunc_leading_zero32__3871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3871__count)));
                            vlSelf->__Vfunc_leading_zero32__3871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3871__count)));
                            vlSelf->__Vfunc_leading_zero32__3871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3871__count)));
                            vlSelf->__Vfunc_leading_zero32__3871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3883__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3883__part 
                            = vlSelf->__Vfunc_leading_zero32__3883__value;
                        vlSelf->__Vfunc_leading_zero32__3883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3883__count)));
                            vlSelf->__Vfunc_leading_zero32__3883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3883__count)));
                            vlSelf->__Vfunc_leading_zero32__3883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3883__count)));
                            vlSelf->__Vfunc_leading_zero32__3883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3883__count)));
                            vlSelf->__Vfunc_leading_zero32__3883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3895__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3895__part 
                            = vlSelf->__Vfunc_leading_zero32__3895__value;
                        vlSelf->__Vfunc_leading_zero32__3895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3895__count)));
                            vlSelf->__Vfunc_leading_zero32__3895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3895__count)));
                            vlSelf->__Vfunc_leading_zero32__3895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3895__count)));
                            vlSelf->__Vfunc_leading_zero32__3895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3895__count)));
                            vlSelf->__Vfunc_leading_zero32__3895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3907__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3907__part 
                            = vlSelf->__Vfunc_leading_zero32__3907__value;
                        vlSelf->__Vfunc_leading_zero32__3907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3907__count)));
                            vlSelf->__Vfunc_leading_zero32__3907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3907__count)));
                            vlSelf->__Vfunc_leading_zero32__3907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3907__count)));
                            vlSelf->__Vfunc_leading_zero32__3907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3907__count)));
                            vlSelf->__Vfunc_leading_zero32__3907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3919__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3919__part 
                            = vlSelf->__Vfunc_leading_zero32__3919__value;
                        vlSelf->__Vfunc_leading_zero32__3919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3919__count)));
                            vlSelf->__Vfunc_leading_zero32__3919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3919__count)));
                            vlSelf->__Vfunc_leading_zero32__3919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3919__count)));
                            vlSelf->__Vfunc_leading_zero32__3919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3919__count)));
                            vlSelf->__Vfunc_leading_zero32__3919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3931__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3931__part 
                            = vlSelf->__Vfunc_leading_zero32__3931__value;
                        vlSelf->__Vfunc_leading_zero32__3931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3931__count)));
                            vlSelf->__Vfunc_leading_zero32__3931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3931__count)));
                            vlSelf->__Vfunc_leading_zero32__3931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3931__count)));
                            vlSelf->__Vfunc_leading_zero32__3931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3931__count)));
                            vlSelf->__Vfunc_leading_zero32__3931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3943__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3943__part 
                            = vlSelf->__Vfunc_leading_zero32__3943__value;
                        vlSelf->__Vfunc_leading_zero32__3943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3943__count)));
                            vlSelf->__Vfunc_leading_zero32__3943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3943__count)));
                            vlSelf->__Vfunc_leading_zero32__3943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3943__count)));
                            vlSelf->__Vfunc_leading_zero32__3943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3943__count)));
                            vlSelf->__Vfunc_leading_zero32__3943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3955__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3955__part 
                            = vlSelf->__Vfunc_leading_zero32__3955__value;
                        vlSelf->__Vfunc_leading_zero32__3955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3955__count)));
                            vlSelf->__Vfunc_leading_zero32__3955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3955__count)));
                            vlSelf->__Vfunc_leading_zero32__3955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3955__count)));
                            vlSelf->__Vfunc_leading_zero32__3955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3955__count)));
                            vlSelf->__Vfunc_leading_zero32__3955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3967__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3967__part 
                            = vlSelf->__Vfunc_leading_zero32__3967__value;
                        vlSelf->__Vfunc_leading_zero32__3967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3967__count)));
                            vlSelf->__Vfunc_leading_zero32__3967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3967__count)));
                            vlSelf->__Vfunc_leading_zero32__3967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3967__count)));
                            vlSelf->__Vfunc_leading_zero32__3967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3967__count)));
                            vlSelf->__Vfunc_leading_zero32__3967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3979__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3979__part 
                            = vlSelf->__Vfunc_leading_zero32__3979__value;
                        vlSelf->__Vfunc_leading_zero32__3979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3979__count)));
                            vlSelf->__Vfunc_leading_zero32__3979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3979__count)));
                            vlSelf->__Vfunc_leading_zero32__3979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3979__count)));
                            vlSelf->__Vfunc_leading_zero32__3979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3979__count)));
                            vlSelf->__Vfunc_leading_zero32__3979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3991__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3991__part 
                            = vlSelf->__Vfunc_leading_zero32__3991__value;
                        vlSelf->__Vfunc_leading_zero32__3991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3991__count)));
                            vlSelf->__Vfunc_leading_zero32__3991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3991__count)));
                            vlSelf->__Vfunc_leading_zero32__3991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3991__count)));
                            vlSelf->__Vfunc_leading_zero32__3991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3991__count)));
                            vlSelf->__Vfunc_leading_zero32__3991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4003__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4003__part 
                            = vlSelf->__Vfunc_leading_zero32__4003__value;
                        vlSelf->__Vfunc_leading_zero32__4003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4003__count)));
                            vlSelf->__Vfunc_leading_zero32__4003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4003__count)));
                            vlSelf->__Vfunc_leading_zero32__4003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4003__count)));
                            vlSelf->__Vfunc_leading_zero32__4003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4003__count)));
                            vlSelf->__Vfunc_leading_zero32__4003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4015__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4015__part 
                            = vlSelf->__Vfunc_leading_zero32__4015__value;
                        vlSelf->__Vfunc_leading_zero32__4015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4015__count)));
                            vlSelf->__Vfunc_leading_zero32__4015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4015__count)));
                            vlSelf->__Vfunc_leading_zero32__4015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4015__count)));
                            vlSelf->__Vfunc_leading_zero32__4015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4015__count)));
                            vlSelf->__Vfunc_leading_zero32__4015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4027__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4027__part 
                            = vlSelf->__Vfunc_leading_zero32__4027__value;
                        vlSelf->__Vfunc_leading_zero32__4027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4027__count)));
                            vlSelf->__Vfunc_leading_zero32__4027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4027__count)));
                            vlSelf->__Vfunc_leading_zero32__4027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4027__count)));
                            vlSelf->__Vfunc_leading_zero32__4027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4027__count)));
                            vlSelf->__Vfunc_leading_zero32__4027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4039__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4039__part 
                            = vlSelf->__Vfunc_leading_zero32__4039__value;
                        vlSelf->__Vfunc_leading_zero32__4039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4039__count)));
                            vlSelf->__Vfunc_leading_zero32__4039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4039__count)));
                            vlSelf->__Vfunc_leading_zero32__4039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4039__count)));
                            vlSelf->__Vfunc_leading_zero32__4039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4039__count)));
                            vlSelf->__Vfunc_leading_zero32__4039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4051__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4051__part 
                            = vlSelf->__Vfunc_leading_zero32__4051__value;
                        vlSelf->__Vfunc_leading_zero32__4051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4051__count)));
                            vlSelf->__Vfunc_leading_zero32__4051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4051__count)));
                            vlSelf->__Vfunc_leading_zero32__4051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4051__count)));
                            vlSelf->__Vfunc_leading_zero32__4051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4051__count)));
                            vlSelf->__Vfunc_leading_zero32__4051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4063__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4063__part 
                            = vlSelf->__Vfunc_leading_zero32__4063__value;
                        vlSelf->__Vfunc_leading_zero32__4063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4063__count)));
                            vlSelf->__Vfunc_leading_zero32__4063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4063__count)));
                            vlSelf->__Vfunc_leading_zero32__4063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4063__count)));
                            vlSelf->__Vfunc_leading_zero32__4063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4063__count)));
                            vlSelf->__Vfunc_leading_zero32__4063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4075__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4075__part 
                            = vlSelf->__Vfunc_leading_zero32__4075__value;
                        vlSelf->__Vfunc_leading_zero32__4075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4075__count)));
                            vlSelf->__Vfunc_leading_zero32__4075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4075__count)));
                            vlSelf->__Vfunc_leading_zero32__4075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4075__count)));
                            vlSelf->__Vfunc_leading_zero32__4075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4075__count)));
                            vlSelf->__Vfunc_leading_zero32__4075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4087__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4087__part 
                            = vlSelf->__Vfunc_leading_zero32__4087__value;
                        vlSelf->__Vfunc_leading_zero32__4087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4087__count)));
                            vlSelf->__Vfunc_leading_zero32__4087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4087__count)));
                            vlSelf->__Vfunc_leading_zero32__4087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4087__count)));
                            vlSelf->__Vfunc_leading_zero32__4087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4087__count)));
                            vlSelf->__Vfunc_leading_zero32__4087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4099__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4099__part 
                            = vlSelf->__Vfunc_leading_zero32__4099__value;
                        vlSelf->__Vfunc_leading_zero32__4099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4099__count)));
                            vlSelf->__Vfunc_leading_zero32__4099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4099__count)));
                            vlSelf->__Vfunc_leading_zero32__4099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4099__count)));
                            vlSelf->__Vfunc_leading_zero32__4099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4099__count)));
                            vlSelf->__Vfunc_leading_zero32__4099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4111__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4111__part 
                            = vlSelf->__Vfunc_leading_zero32__4111__value;
                        vlSelf->__Vfunc_leading_zero32__4111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4111__count)));
                            vlSelf->__Vfunc_leading_zero32__4111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4111__count)));
                            vlSelf->__Vfunc_leading_zero32__4111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4111__count)));
                            vlSelf->__Vfunc_leading_zero32__4111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4111__count)));
                            vlSelf->__Vfunc_leading_zero32__4111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4123__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4123__part 
                            = vlSelf->__Vfunc_leading_zero32__4123__value;
                        vlSelf->__Vfunc_leading_zero32__4123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4123__count)));
                            vlSelf->__Vfunc_leading_zero32__4123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4123__count)));
                            vlSelf->__Vfunc_leading_zero32__4123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4123__count)));
                            vlSelf->__Vfunc_leading_zero32__4123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4123__count)));
                            vlSelf->__Vfunc_leading_zero32__4123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4135__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4135__part 
                            = vlSelf->__Vfunc_leading_zero32__4135__value;
                        vlSelf->__Vfunc_leading_zero32__4135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4135__count)));
                            vlSelf->__Vfunc_leading_zero32__4135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4135__count)));
                            vlSelf->__Vfunc_leading_zero32__4135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4135__count)));
                            vlSelf->__Vfunc_leading_zero32__4135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4135__count)));
                            vlSelf->__Vfunc_leading_zero32__4135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4147__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4147__part 
                            = vlSelf->__Vfunc_leading_zero32__4147__value;
                        vlSelf->__Vfunc_leading_zero32__4147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4147__count)));
                            vlSelf->__Vfunc_leading_zero32__4147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4147__count)));
                            vlSelf->__Vfunc_leading_zero32__4147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4147__count)));
                            vlSelf->__Vfunc_leading_zero32__4147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4147__count)));
                            vlSelf->__Vfunc_leading_zero32__4147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4159__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4159__part 
                            = vlSelf->__Vfunc_leading_zero32__4159__value;
                        vlSelf->__Vfunc_leading_zero32__4159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4159__count)));
                            vlSelf->__Vfunc_leading_zero32__4159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4159__count)));
                            vlSelf->__Vfunc_leading_zero32__4159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4159__count)));
                            vlSelf->__Vfunc_leading_zero32__4159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4159__count)));
                            vlSelf->__Vfunc_leading_zero32__4159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4171__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4171__part 
                            = vlSelf->__Vfunc_leading_zero32__4171__value;
                        vlSelf->__Vfunc_leading_zero32__4171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4171__count)));
                            vlSelf->__Vfunc_leading_zero32__4171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4171__count)));
                            vlSelf->__Vfunc_leading_zero32__4171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4171__count)));
                            vlSelf->__Vfunc_leading_zero32__4171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4171__count)));
                            vlSelf->__Vfunc_leading_zero32__4171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4183__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4183__part 
                            = vlSelf->__Vfunc_leading_zero32__4183__value;
                        vlSelf->__Vfunc_leading_zero32__4183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4183__count)));
                            vlSelf->__Vfunc_leading_zero32__4183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4183__count)));
                            vlSelf->__Vfunc_leading_zero32__4183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4183__count)));
                            vlSelf->__Vfunc_leading_zero32__4183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4183__count)));
                            vlSelf->__Vfunc_leading_zero32__4183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4195__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4195__part 
                            = vlSelf->__Vfunc_leading_zero32__4195__value;
                        vlSelf->__Vfunc_leading_zero32__4195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4195__count)));
                            vlSelf->__Vfunc_leading_zero32__4195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4195__count)));
                            vlSelf->__Vfunc_leading_zero32__4195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4195__count)));
                            vlSelf->__Vfunc_leading_zero32__4195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4195__count)));
                            vlSelf->__Vfunc_leading_zero32__4195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4207__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4207__part 
                            = vlSelf->__Vfunc_leading_zero32__4207__value;
                        vlSelf->__Vfunc_leading_zero32__4207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4207__count)));
                            vlSelf->__Vfunc_leading_zero32__4207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4207__count)));
                            vlSelf->__Vfunc_leading_zero32__4207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4207__count)));
                            vlSelf->__Vfunc_leading_zero32__4207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4207__count)));
                            vlSelf->__Vfunc_leading_zero32__4207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4219__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4219__part 
                            = vlSelf->__Vfunc_leading_zero32__4219__value;
                        vlSelf->__Vfunc_leading_zero32__4219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4219__count)));
                            vlSelf->__Vfunc_leading_zero32__4219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4219__count)));
                            vlSelf->__Vfunc_leading_zero32__4219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4219__count)));
                            vlSelf->__Vfunc_leading_zero32__4219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4219__count)));
                            vlSelf->__Vfunc_leading_zero32__4219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4231__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4231__part 
                            = vlSelf->__Vfunc_leading_zero32__4231__value;
                        vlSelf->__Vfunc_leading_zero32__4231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4231__count)));
                            vlSelf->__Vfunc_leading_zero32__4231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4231__count)));
                            vlSelf->__Vfunc_leading_zero32__4231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4231__count)));
                            vlSelf->__Vfunc_leading_zero32__4231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4231__count)));
                            vlSelf->__Vfunc_leading_zero32__4231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4243__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4243__part 
                            = vlSelf->__Vfunc_leading_zero32__4243__value;
                        vlSelf->__Vfunc_leading_zero32__4243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4243__count)));
                            vlSelf->__Vfunc_leading_zero32__4243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4243__count)));
                            vlSelf->__Vfunc_leading_zero32__4243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4243__count)));
                            vlSelf->__Vfunc_leading_zero32__4243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4243__count)));
                            vlSelf->__Vfunc_leading_zero32__4243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4255__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4255__part 
                            = vlSelf->__Vfunc_leading_zero32__4255__value;
                        vlSelf->__Vfunc_leading_zero32__4255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4255__count)));
                            vlSelf->__Vfunc_leading_zero32__4255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4255__count)));
                            vlSelf->__Vfunc_leading_zero32__4255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4255__count)));
                            vlSelf->__Vfunc_leading_zero32__4255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4255__count)));
                            vlSelf->__Vfunc_leading_zero32__4255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4267__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4267__part 
                            = vlSelf->__Vfunc_leading_zero32__4267__value;
                        vlSelf->__Vfunc_leading_zero32__4267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4267__count)));
                            vlSelf->__Vfunc_leading_zero32__4267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4267__count)));
                            vlSelf->__Vfunc_leading_zero32__4267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4267__count)));
                            vlSelf->__Vfunc_leading_zero32__4267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4267__count)));
                            vlSelf->__Vfunc_leading_zero32__4267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4279__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4279__part 
                            = vlSelf->__Vfunc_leading_zero32__4279__value;
                        vlSelf->__Vfunc_leading_zero32__4279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4279__count)));
                            vlSelf->__Vfunc_leading_zero32__4279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4279__count)));
                            vlSelf->__Vfunc_leading_zero32__4279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4279__count)));
                            vlSelf->__Vfunc_leading_zero32__4279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4279__count)));
                            vlSelf->__Vfunc_leading_zero32__4279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4279__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4291__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4291__part 
                            = vlSelf->__Vfunc_leading_zero32__4291__value;
                        vlSelf->__Vfunc_leading_zero32__4291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4291__count)));
                            vlSelf->__Vfunc_leading_zero32__4291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4291__count)));
                            vlSelf->__Vfunc_leading_zero32__4291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4291__count)));
                            vlSelf->__Vfunc_leading_zero32__4291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4291__count)));
                            vlSelf->__Vfunc_leading_zero32__4291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4303__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4303__part 
                            = vlSelf->__Vfunc_leading_zero32__4303__value;
                        vlSelf->__Vfunc_leading_zero32__4303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4303__count)));
                            vlSelf->__Vfunc_leading_zero32__4303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4303__count)));
                            vlSelf->__Vfunc_leading_zero32__4303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4303__count)));
                            vlSelf->__Vfunc_leading_zero32__4303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4303__count)));
                            vlSelf->__Vfunc_leading_zero32__4303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4315__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4315__part 
                            = vlSelf->__Vfunc_leading_zero32__4315__value;
                        vlSelf->__Vfunc_leading_zero32__4315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4315__count)));
                            vlSelf->__Vfunc_leading_zero32__4315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4315__count)));
                            vlSelf->__Vfunc_leading_zero32__4315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4315__count)));
                            vlSelf->__Vfunc_leading_zero32__4315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4315__count)));
                            vlSelf->__Vfunc_leading_zero32__4315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4315__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4327__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4327__part 
                            = vlSelf->__Vfunc_leading_zero32__4327__value;
                        vlSelf->__Vfunc_leading_zero32__4327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4327__count)));
                            vlSelf->__Vfunc_leading_zero32__4327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4327__count)));
                            vlSelf->__Vfunc_leading_zero32__4327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4327__count)));
                            vlSelf->__Vfunc_leading_zero32__4327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4327__count)));
                            vlSelf->__Vfunc_leading_zero32__4327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4339__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4339__part 
                            = vlSelf->__Vfunc_leading_zero32__4339__value;
                        vlSelf->__Vfunc_leading_zero32__4339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4339__count)));
                            vlSelf->__Vfunc_leading_zero32__4339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4339__count)));
                            vlSelf->__Vfunc_leading_zero32__4339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4339__count)));
                            vlSelf->__Vfunc_leading_zero32__4339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4339__count)));
                            vlSelf->__Vfunc_leading_zero32__4339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4351__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4351__part 
                            = vlSelf->__Vfunc_leading_zero32__4351__value;
                        vlSelf->__Vfunc_leading_zero32__4351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4351__count)));
                            vlSelf->__Vfunc_leading_zero32__4351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4351__count)));
                            vlSelf->__Vfunc_leading_zero32__4351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4351__count)));
                            vlSelf->__Vfunc_leading_zero32__4351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4351__count)));
                            vlSelf->__Vfunc_leading_zero32__4351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4351__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4363__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4363__part 
                            = vlSelf->__Vfunc_leading_zero32__4363__value;
                        vlSelf->__Vfunc_leading_zero32__4363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4363__count)));
                            vlSelf->__Vfunc_leading_zero32__4363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4363__count)));
                            vlSelf->__Vfunc_leading_zero32__4363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4363__count)));
                            vlSelf->__Vfunc_leading_zero32__4363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4363__count)));
                            vlSelf->__Vfunc_leading_zero32__4363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4375__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4375__part 
                            = vlSelf->__Vfunc_leading_zero32__4375__value;
                        vlSelf->__Vfunc_leading_zero32__4375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4375__count)));
                            vlSelf->__Vfunc_leading_zero32__4375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4375__count)));
                            vlSelf->__Vfunc_leading_zero32__4375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4375__count)));
                            vlSelf->__Vfunc_leading_zero32__4375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4375__count)));
                            vlSelf->__Vfunc_leading_zero32__4375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4387__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4387__part 
                            = vlSelf->__Vfunc_leading_zero32__4387__value;
                        vlSelf->__Vfunc_leading_zero32__4387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4387__count)));
                            vlSelf->__Vfunc_leading_zero32__4387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4387__count)));
                            vlSelf->__Vfunc_leading_zero32__4387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4387__count)));
                            vlSelf->__Vfunc_leading_zero32__4387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4387__count)));
                            vlSelf->__Vfunc_leading_zero32__4387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4387__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4399__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4399__part 
                            = vlSelf->__Vfunc_leading_zero32__4399__value;
                        vlSelf->__Vfunc_leading_zero32__4399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4399__count)));
                            vlSelf->__Vfunc_leading_zero32__4399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4399__count)));
                            vlSelf->__Vfunc_leading_zero32__4399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4399__count)));
                            vlSelf->__Vfunc_leading_zero32__4399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4399__count)));
                            vlSelf->__Vfunc_leading_zero32__4399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4411__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4411__part 
                            = vlSelf->__Vfunc_leading_zero32__4411__value;
                        vlSelf->__Vfunc_leading_zero32__4411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4411__count)));
                            vlSelf->__Vfunc_leading_zero32__4411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4411__count)));
                            vlSelf->__Vfunc_leading_zero32__4411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4411__count)));
                            vlSelf->__Vfunc_leading_zero32__4411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4411__count)));
                            vlSelf->__Vfunc_leading_zero32__4411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4423__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4423__part 
                            = vlSelf->__Vfunc_leading_zero32__4423__value;
                        vlSelf->__Vfunc_leading_zero32__4423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4423__count)));
                            vlSelf->__Vfunc_leading_zero32__4423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4423__count)));
                            vlSelf->__Vfunc_leading_zero32__4423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4423__count)));
                            vlSelf->__Vfunc_leading_zero32__4423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4423__count)));
                            vlSelf->__Vfunc_leading_zero32__4423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4423__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4435__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4435__part 
                            = vlSelf->__Vfunc_leading_zero32__4435__value;
                        vlSelf->__Vfunc_leading_zero32__4435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4435__count)));
                            vlSelf->__Vfunc_leading_zero32__4435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4435__count)));
                            vlSelf->__Vfunc_leading_zero32__4435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4435__count)));
                            vlSelf->__Vfunc_leading_zero32__4435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4435__count)));
                            vlSelf->__Vfunc_leading_zero32__4435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4447__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4447__part 
                            = vlSelf->__Vfunc_leading_zero32__4447__value;
                        vlSelf->__Vfunc_leading_zero32__4447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4447__count)));
                            vlSelf->__Vfunc_leading_zero32__4447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4447__count)));
                            vlSelf->__Vfunc_leading_zero32__4447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4447__count)));
                            vlSelf->__Vfunc_leading_zero32__4447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4447__count)));
                            vlSelf->__Vfunc_leading_zero32__4447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4459__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4459__part 
                            = vlSelf->__Vfunc_leading_zero32__4459__value;
                        vlSelf->__Vfunc_leading_zero32__4459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4459__count)));
                            vlSelf->__Vfunc_leading_zero32__4459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4459__count)));
                            vlSelf->__Vfunc_leading_zero32__4459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4459__count)));
                            vlSelf->__Vfunc_leading_zero32__4459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4459__count)));
                            vlSelf->__Vfunc_leading_zero32__4459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4459__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4471__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4471__part 
                            = vlSelf->__Vfunc_leading_zero32__4471__value;
                        vlSelf->__Vfunc_leading_zero32__4471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4471__count)));
                            vlSelf->__Vfunc_leading_zero32__4471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4471__count)));
                            vlSelf->__Vfunc_leading_zero32__4471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4471__count)));
                            vlSelf->__Vfunc_leading_zero32__4471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4471__count)));
                            vlSelf->__Vfunc_leading_zero32__4471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4483__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4483__part 
                            = vlSelf->__Vfunc_leading_zero32__4483__value;
                        vlSelf->__Vfunc_leading_zero32__4483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4483__count)));
                            vlSelf->__Vfunc_leading_zero32__4483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4483__count)));
                            vlSelf->__Vfunc_leading_zero32__4483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4483__count)));
                            vlSelf->__Vfunc_leading_zero32__4483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4483__count)));
                            vlSelf->__Vfunc_leading_zero32__4483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4495__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4495__part 
                            = vlSelf->__Vfunc_leading_zero32__4495__value;
                        vlSelf->__Vfunc_leading_zero32__4495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4495__count)));
                            vlSelf->__Vfunc_leading_zero32__4495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4495__count)));
                            vlSelf->__Vfunc_leading_zero32__4495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4495__count)));
                            vlSelf->__Vfunc_leading_zero32__4495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4495__count)));
                            vlSelf->__Vfunc_leading_zero32__4495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4495__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4507__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4507__part 
                            = vlSelf->__Vfunc_leading_zero32__4507__value;
                        vlSelf->__Vfunc_leading_zero32__4507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4507__count)));
                            vlSelf->__Vfunc_leading_zero32__4507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4507__count)));
                            vlSelf->__Vfunc_leading_zero32__4507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4507__count)));
                            vlSelf->__Vfunc_leading_zero32__4507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4507__count)));
                            vlSelf->__Vfunc_leading_zero32__4507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4519__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4519__part 
                            = vlSelf->__Vfunc_leading_zero32__4519__value;
                        vlSelf->__Vfunc_leading_zero32__4519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4519__count)));
                            vlSelf->__Vfunc_leading_zero32__4519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4519__count)));
                            vlSelf->__Vfunc_leading_zero32__4519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4519__count)));
                            vlSelf->__Vfunc_leading_zero32__4519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4519__count)));
                            vlSelf->__Vfunc_leading_zero32__4519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4531__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4531__part 
                            = vlSelf->__Vfunc_leading_zero32__4531__value;
                        vlSelf->__Vfunc_leading_zero32__4531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4531__count)));
                            vlSelf->__Vfunc_leading_zero32__4531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4531__count)));
                            vlSelf->__Vfunc_leading_zero32__4531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4531__count)));
                            vlSelf->__Vfunc_leading_zero32__4531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4531__count)));
                            vlSelf->__Vfunc_leading_zero32__4531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4531__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4543__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4543__part 
                            = vlSelf->__Vfunc_leading_zero32__4543__value;
                        vlSelf->__Vfunc_leading_zero32__4543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4543__count)));
                            vlSelf->__Vfunc_leading_zero32__4543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4543__count)));
                            vlSelf->__Vfunc_leading_zero32__4543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4543__count)));
                            vlSelf->__Vfunc_leading_zero32__4543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4543__count)));
                            vlSelf->__Vfunc_leading_zero32__4543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4555__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4555__part 
                            = vlSelf->__Vfunc_leading_zero32__4555__value;
                        vlSelf->__Vfunc_leading_zero32__4555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4555__count)));
                            vlSelf->__Vfunc_leading_zero32__4555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4555__count)));
                            vlSelf->__Vfunc_leading_zero32__4555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4555__count)));
                            vlSelf->__Vfunc_leading_zero32__4555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4555__count)));
                            vlSelf->__Vfunc_leading_zero32__4555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4567__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4567__part 
                            = vlSelf->__Vfunc_leading_zero32__4567__value;
                        vlSelf->__Vfunc_leading_zero32__4567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4567__count)));
                            vlSelf->__Vfunc_leading_zero32__4567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4567__count)));
                            vlSelf->__Vfunc_leading_zero32__4567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4567__count)));
                            vlSelf->__Vfunc_leading_zero32__4567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4567__count)));
                            vlSelf->__Vfunc_leading_zero32__4567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4567__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4579__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4579__part 
                            = vlSelf->__Vfunc_leading_zero32__4579__value;
                        vlSelf->__Vfunc_leading_zero32__4579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4579__count)));
                            vlSelf->__Vfunc_leading_zero32__4579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4579__count)));
                            vlSelf->__Vfunc_leading_zero32__4579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4579__count)));
                            vlSelf->__Vfunc_leading_zero32__4579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4579__count)));
                            vlSelf->__Vfunc_leading_zero32__4579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4591__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4591__part 
                            = vlSelf->__Vfunc_leading_zero32__4591__value;
                        vlSelf->__Vfunc_leading_zero32__4591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4591__count)));
                            vlSelf->__Vfunc_leading_zero32__4591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4591__count)));
                            vlSelf->__Vfunc_leading_zero32__4591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4591__count)));
                            vlSelf->__Vfunc_leading_zero32__4591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4591__count)));
                            vlSelf->__Vfunc_leading_zero32__4591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4603__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4603__part 
                            = vlSelf->__Vfunc_leading_zero32__4603__value;
                        vlSelf->__Vfunc_leading_zero32__4603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4603__count)));
                            vlSelf->__Vfunc_leading_zero32__4603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4603__count)));
                            vlSelf->__Vfunc_leading_zero32__4603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4603__count)));
                            vlSelf->__Vfunc_leading_zero32__4603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4603__count)));
                            vlSelf->__Vfunc_leading_zero32__4603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4603__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4615__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4615__part 
                            = vlSelf->__Vfunc_leading_zero32__4615__value;
                        vlSelf->__Vfunc_leading_zero32__4615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4615__count)));
                            vlSelf->__Vfunc_leading_zero32__4615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4615__count)));
                            vlSelf->__Vfunc_leading_zero32__4615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4615__count)));
                            vlSelf->__Vfunc_leading_zero32__4615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4615__count)));
                            vlSelf->__Vfunc_leading_zero32__4615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4627__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4627__part 
                            = vlSelf->__Vfunc_leading_zero32__4627__value;
                        vlSelf->__Vfunc_leading_zero32__4627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4627__count)));
                            vlSelf->__Vfunc_leading_zero32__4627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4627__count)));
                            vlSelf->__Vfunc_leading_zero32__4627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4627__count)));
                            vlSelf->__Vfunc_leading_zero32__4627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4627__count)));
                            vlSelf->__Vfunc_leading_zero32__4627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4639__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4639__part 
                            = vlSelf->__Vfunc_leading_zero32__4639__value;
                        vlSelf->__Vfunc_leading_zero32__4639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4639__count)));
                            vlSelf->__Vfunc_leading_zero32__4639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4639__count)));
                            vlSelf->__Vfunc_leading_zero32__4639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4639__count)));
                            vlSelf->__Vfunc_leading_zero32__4639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4639__count)));
                            vlSelf->__Vfunc_leading_zero32__4639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4639__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4651__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4651__part 
                            = vlSelf->__Vfunc_leading_zero32__4651__value;
                        vlSelf->__Vfunc_leading_zero32__4651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4651__count)));
                            vlSelf->__Vfunc_leading_zero32__4651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4651__count)));
                            vlSelf->__Vfunc_leading_zero32__4651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4651__count)));
                            vlSelf->__Vfunc_leading_zero32__4651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4651__count)));
                            vlSelf->__Vfunc_leading_zero32__4651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4663__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4663__part 
                            = vlSelf->__Vfunc_leading_zero32__4663__value;
                        vlSelf->__Vfunc_leading_zero32__4663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4663__count)));
                            vlSelf->__Vfunc_leading_zero32__4663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4663__count)));
                            vlSelf->__Vfunc_leading_zero32__4663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4663__count)));
                            vlSelf->__Vfunc_leading_zero32__4663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4663__count)));
                            vlSelf->__Vfunc_leading_zero32__4663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4675__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4675__part 
                            = vlSelf->__Vfunc_leading_zero32__4675__value;
                        vlSelf->__Vfunc_leading_zero32__4675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4675__count)));
                            vlSelf->__Vfunc_leading_zero32__4675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4675__count)));
                            vlSelf->__Vfunc_leading_zero32__4675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4675__count)));
                            vlSelf->__Vfunc_leading_zero32__4675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4675__count)));
                            vlSelf->__Vfunc_leading_zero32__4675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4675__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4687__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4687__part 
                            = vlSelf->__Vfunc_leading_zero32__4687__value;
                        vlSelf->__Vfunc_leading_zero32__4687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4687__count)));
                            vlSelf->__Vfunc_leading_zero32__4687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4687__count)));
                            vlSelf->__Vfunc_leading_zero32__4687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4687__count)));
                            vlSelf->__Vfunc_leading_zero32__4687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4687__count)));
                            vlSelf->__Vfunc_leading_zero32__4687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4699__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4699__part 
                            = vlSelf->__Vfunc_leading_zero32__4699__value;
                        vlSelf->__Vfunc_leading_zero32__4699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4699__count)));
                            vlSelf->__Vfunc_leading_zero32__4699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4699__count)));
                            vlSelf->__Vfunc_leading_zero32__4699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4699__count)));
                            vlSelf->__Vfunc_leading_zero32__4699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4699__count)));
                            vlSelf->__Vfunc_leading_zero32__4699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4711__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4711__part 
                            = vlSelf->__Vfunc_leading_zero32__4711__value;
                        vlSelf->__Vfunc_leading_zero32__4711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4711__count)));
                            vlSelf->__Vfunc_leading_zero32__4711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4711__count)));
                            vlSelf->__Vfunc_leading_zero32__4711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4711__count)));
                            vlSelf->__Vfunc_leading_zero32__4711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4711__count)));
                            vlSelf->__Vfunc_leading_zero32__4711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4723__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4723__part 
                            = vlSelf->__Vfunc_leading_zero32__4723__value;
                        vlSelf->__Vfunc_leading_zero32__4723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4723__count)));
                            vlSelf->__Vfunc_leading_zero32__4723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4723__count)));
                            vlSelf->__Vfunc_leading_zero32__4723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4723__count)));
                            vlSelf->__Vfunc_leading_zero32__4723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4723__count)));
                            vlSelf->__Vfunc_leading_zero32__4723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4735__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4735__part 
                            = vlSelf->__Vfunc_leading_zero32__4735__value;
                        vlSelf->__Vfunc_leading_zero32__4735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4735__count)));
                            vlSelf->__Vfunc_leading_zero32__4735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4735__count)));
                            vlSelf->__Vfunc_leading_zero32__4735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4735__count)));
                            vlSelf->__Vfunc_leading_zero32__4735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4735__count)));
                            vlSelf->__Vfunc_leading_zero32__4735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4747__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4747__part 
                            = vlSelf->__Vfunc_leading_zero32__4747__value;
                        vlSelf->__Vfunc_leading_zero32__4747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4747__count)));
                            vlSelf->__Vfunc_leading_zero32__4747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4747__count)));
                            vlSelf->__Vfunc_leading_zero32__4747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4747__count)));
                            vlSelf->__Vfunc_leading_zero32__4747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4747__count)));
                            vlSelf->__Vfunc_leading_zero32__4747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1693__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1693__part 
                            = vlSelf->__Vfunc_leading_zero32__1693__value;
                        vlSelf->__Vfunc_leading_zero32__1693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1693__count)));
                            vlSelf->__Vfunc_leading_zero32__1693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1693__count)));
                            vlSelf->__Vfunc_leading_zero32__1693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1693__count)));
                            vlSelf->__Vfunc_leading_zero32__1693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1693__count)));
                            vlSelf->__Vfunc_leading_zero32__1693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1693__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1705__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1705__part 
                            = vlSelf->__Vfunc_leading_zero32__1705__value;
                        vlSelf->__Vfunc_leading_zero32__1705__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1705__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1705__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1705__count)));
                            vlSelf->__Vfunc_leading_zero32__1705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1705__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1705__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1705__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1705__count)));
                            vlSelf->__Vfunc_leading_zero32__1705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1705__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1705__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1705__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1705__count)));
                            vlSelf->__Vfunc_leading_zero32__1705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1705__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1705__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1705__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1705__count)));
                            vlSelf->__Vfunc_leading_zero32__1705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1705__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1705__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1705__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1705__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1705__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1705__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1705__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1705__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1717__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1717__part 
                            = vlSelf->__Vfunc_leading_zero32__1717__value;
                        vlSelf->__Vfunc_leading_zero32__1717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1717__count)));
                            vlSelf->__Vfunc_leading_zero32__1717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1717__count)));
                            vlSelf->__Vfunc_leading_zero32__1717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1717__count)));
                            vlSelf->__Vfunc_leading_zero32__1717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1717__count)));
                            vlSelf->__Vfunc_leading_zero32__1717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1729__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1729__part 
                            = vlSelf->__Vfunc_leading_zero32__1729__value;
                        vlSelf->__Vfunc_leading_zero32__1729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1729__count)));
                            vlSelf->__Vfunc_leading_zero32__1729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1729__count)));
                            vlSelf->__Vfunc_leading_zero32__1729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1729__count)));
                            vlSelf->__Vfunc_leading_zero32__1729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1729__count)));
                            vlSelf->__Vfunc_leading_zero32__1729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1741__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1741__part 
                            = vlSelf->__Vfunc_leading_zero32__1741__value;
                        vlSelf->__Vfunc_leading_zero32__1741__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1741__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1741__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1741__count)));
                            vlSelf->__Vfunc_leading_zero32__1741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1741__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1741__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1741__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1741__count)));
                            vlSelf->__Vfunc_leading_zero32__1741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1741__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1741__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1741__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1741__count)));
                            vlSelf->__Vfunc_leading_zero32__1741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1741__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1741__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1741__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1741__count)));
                            vlSelf->__Vfunc_leading_zero32__1741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1741__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1741__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1741__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1741__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1741__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1741__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1741__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1741__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1753__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1753__part 
                            = vlSelf->__Vfunc_leading_zero32__1753__value;
                        vlSelf->__Vfunc_leading_zero32__1753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1753__count)));
                            vlSelf->__Vfunc_leading_zero32__1753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1753__count)));
                            vlSelf->__Vfunc_leading_zero32__1753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1753__count)));
                            vlSelf->__Vfunc_leading_zero32__1753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1753__count)));
                            vlSelf->__Vfunc_leading_zero32__1753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1753__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1765__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1765__part 
                            = vlSelf->__Vfunc_leading_zero32__1765__value;
                        vlSelf->__Vfunc_leading_zero32__1765__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1765__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1765__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1765__count)));
                            vlSelf->__Vfunc_leading_zero32__1765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1765__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1765__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1765__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1765__count)));
                            vlSelf->__Vfunc_leading_zero32__1765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1765__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1765__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1765__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1765__count)));
                            vlSelf->__Vfunc_leading_zero32__1765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1765__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1765__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1765__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1765__count)));
                            vlSelf->__Vfunc_leading_zero32__1765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1765__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1765__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1765__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1765__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1765__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1765__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1765__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1765__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1777__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1777__part 
                            = vlSelf->__Vfunc_leading_zero32__1777__value;
                        vlSelf->__Vfunc_leading_zero32__1777__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1777__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1777__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1777__count)));
                            vlSelf->__Vfunc_leading_zero32__1777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1777__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1777__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1777__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1777__count)));
                            vlSelf->__Vfunc_leading_zero32__1777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1777__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1777__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1777__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1777__count)));
                            vlSelf->__Vfunc_leading_zero32__1777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1777__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1777__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1777__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1777__count)));
                            vlSelf->__Vfunc_leading_zero32__1777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1777__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1777__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1777__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1777__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1777__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1777__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1777__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1777__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1789__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1789__part 
                            = vlSelf->__Vfunc_leading_zero32__1789__value;
                        vlSelf->__Vfunc_leading_zero32__1789__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1789__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1789__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1789__count)));
                            vlSelf->__Vfunc_leading_zero32__1789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1789__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1789__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1789__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1789__count)));
                            vlSelf->__Vfunc_leading_zero32__1789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1789__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1789__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1789__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1789__count)));
                            vlSelf->__Vfunc_leading_zero32__1789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1789__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1789__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1789__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1789__count)));
                            vlSelf->__Vfunc_leading_zero32__1789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1789__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1789__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1789__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1789__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1789__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1789__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1789__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1789__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1801__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1801__part 
                            = vlSelf->__Vfunc_leading_zero32__1801__value;
                        vlSelf->__Vfunc_leading_zero32__1801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1801__count)));
                            vlSelf->__Vfunc_leading_zero32__1801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1801__count)));
                            vlSelf->__Vfunc_leading_zero32__1801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1801__count)));
                            vlSelf->__Vfunc_leading_zero32__1801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1801__count)));
                            vlSelf->__Vfunc_leading_zero32__1801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1813__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1813__part 
                            = vlSelf->__Vfunc_leading_zero32__1813__value;
                        vlSelf->__Vfunc_leading_zero32__1813__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1813__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1813__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1813__count)));
                            vlSelf->__Vfunc_leading_zero32__1813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1813__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1813__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1813__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1813__count)));
                            vlSelf->__Vfunc_leading_zero32__1813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1813__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1813__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1813__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1813__count)));
                            vlSelf->__Vfunc_leading_zero32__1813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1813__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1813__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1813__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1813__count)));
                            vlSelf->__Vfunc_leading_zero32__1813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1813__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1813__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1813__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1813__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1813__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1813__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1813__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1813__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1825__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1825__part 
                            = vlSelf->__Vfunc_leading_zero32__1825__value;
                        vlSelf->__Vfunc_leading_zero32__1825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1825__count)));
                            vlSelf->__Vfunc_leading_zero32__1825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1825__count)));
                            vlSelf->__Vfunc_leading_zero32__1825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1825__count)));
                            vlSelf->__Vfunc_leading_zero32__1825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1825__count)));
                            vlSelf->__Vfunc_leading_zero32__1825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1837__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1837__part 
                            = vlSelf->__Vfunc_leading_zero32__1837__value;
                        vlSelf->__Vfunc_leading_zero32__1837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1837__count)));
                            vlSelf->__Vfunc_leading_zero32__1837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1837__count)));
                            vlSelf->__Vfunc_leading_zero32__1837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1837__count)));
                            vlSelf->__Vfunc_leading_zero32__1837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1837__count)));
                            vlSelf->__Vfunc_leading_zero32__1837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1849__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1849__part 
                            = vlSelf->__Vfunc_leading_zero32__1849__value;
                        vlSelf->__Vfunc_leading_zero32__1849__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1849__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1849__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1849__count)));
                            vlSelf->__Vfunc_leading_zero32__1849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1849__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1849__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1849__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1849__count)));
                            vlSelf->__Vfunc_leading_zero32__1849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1849__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1849__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1849__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1849__count)));
                            vlSelf->__Vfunc_leading_zero32__1849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1849__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1849__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1849__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1849__count)));
                            vlSelf->__Vfunc_leading_zero32__1849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1849__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1849__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1849__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1849__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1849__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1849__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1849__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1849__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1861__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1861__part 
                            = vlSelf->__Vfunc_leading_zero32__1861__value;
                        vlSelf->__Vfunc_leading_zero32__1861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1861__count)));
                            vlSelf->__Vfunc_leading_zero32__1861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1861__count)));
                            vlSelf->__Vfunc_leading_zero32__1861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1861__count)));
                            vlSelf->__Vfunc_leading_zero32__1861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1861__count)));
                            vlSelf->__Vfunc_leading_zero32__1861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1873__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1873__part 
                            = vlSelf->__Vfunc_leading_zero32__1873__value;
                        vlSelf->__Vfunc_leading_zero32__1873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1873__count)));
                            vlSelf->__Vfunc_leading_zero32__1873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1873__count)));
                            vlSelf->__Vfunc_leading_zero32__1873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1873__count)));
                            vlSelf->__Vfunc_leading_zero32__1873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1873__count)));
                            vlSelf->__Vfunc_leading_zero32__1873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1885__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1885__part 
                            = vlSelf->__Vfunc_leading_zero32__1885__value;
                        vlSelf->__Vfunc_leading_zero32__1885__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1885__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1885__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1885__count)));
                            vlSelf->__Vfunc_leading_zero32__1885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1885__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1885__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1885__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1885__count)));
                            vlSelf->__Vfunc_leading_zero32__1885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1885__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1885__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1885__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1885__count)));
                            vlSelf->__Vfunc_leading_zero32__1885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1885__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1885__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1885__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1885__count)));
                            vlSelf->__Vfunc_leading_zero32__1885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1885__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1885__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1885__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1885__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1885__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1885__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1885__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1885__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1897__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1897__part 
                            = vlSelf->__Vfunc_leading_zero32__1897__value;
                        vlSelf->__Vfunc_leading_zero32__1897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1897__count)));
                            vlSelf->__Vfunc_leading_zero32__1897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1897__count)));
                            vlSelf->__Vfunc_leading_zero32__1897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1897__count)));
                            vlSelf->__Vfunc_leading_zero32__1897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1897__count)));
                            vlSelf->__Vfunc_leading_zero32__1897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1909__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1909__part 
                            = vlSelf->__Vfunc_leading_zero32__1909__value;
                        vlSelf->__Vfunc_leading_zero32__1909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1909__count)));
                            vlSelf->__Vfunc_leading_zero32__1909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1909__count)));
                            vlSelf->__Vfunc_leading_zero32__1909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1909__count)));
                            vlSelf->__Vfunc_leading_zero32__1909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1909__count)));
                            vlSelf->__Vfunc_leading_zero32__1909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1921__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1921__part 
                            = vlSelf->__Vfunc_leading_zero32__1921__value;
                        vlSelf->__Vfunc_leading_zero32__1921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1921__count)));
                            vlSelf->__Vfunc_leading_zero32__1921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1921__count)));
                            vlSelf->__Vfunc_leading_zero32__1921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1921__count)));
                            vlSelf->__Vfunc_leading_zero32__1921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1921__count)));
                            vlSelf->__Vfunc_leading_zero32__1921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1921__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1933__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1933__part 
                            = vlSelf->__Vfunc_leading_zero32__1933__value;
                        vlSelf->__Vfunc_leading_zero32__1933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1933__count)));
                            vlSelf->__Vfunc_leading_zero32__1933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1933__count)));
                            vlSelf->__Vfunc_leading_zero32__1933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1933__count)));
                            vlSelf->__Vfunc_leading_zero32__1933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1933__count)));
                            vlSelf->__Vfunc_leading_zero32__1933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1945__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1945__part 
                            = vlSelf->__Vfunc_leading_zero32__1945__value;
                        vlSelf->__Vfunc_leading_zero32__1945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1945__count)));
                            vlSelf->__Vfunc_leading_zero32__1945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1945__count)));
                            vlSelf->__Vfunc_leading_zero32__1945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1945__count)));
                            vlSelf->__Vfunc_leading_zero32__1945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1945__count)));
                            vlSelf->__Vfunc_leading_zero32__1945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1957__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1957__part 
                            = vlSelf->__Vfunc_leading_zero32__1957__value;
                        vlSelf->__Vfunc_leading_zero32__1957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1957__count)));
                            vlSelf->__Vfunc_leading_zero32__1957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1957__count)));
                            vlSelf->__Vfunc_leading_zero32__1957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1957__count)));
                            vlSelf->__Vfunc_leading_zero32__1957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1957__count)));
                            vlSelf->__Vfunc_leading_zero32__1957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1957__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1969__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1969__part 
                            = vlSelf->__Vfunc_leading_zero32__1969__value;
                        vlSelf->__Vfunc_leading_zero32__1969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1969__count)));
                            vlSelf->__Vfunc_leading_zero32__1969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1969__count)));
                            vlSelf->__Vfunc_leading_zero32__1969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1969__count)));
                            vlSelf->__Vfunc_leading_zero32__1969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1969__count)));
                            vlSelf->__Vfunc_leading_zero32__1969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1981__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1981__part 
                            = vlSelf->__Vfunc_leading_zero32__1981__value;
                        vlSelf->__Vfunc_leading_zero32__1981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1981__count)));
                            vlSelf->__Vfunc_leading_zero32__1981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1981__count)));
                            vlSelf->__Vfunc_leading_zero32__1981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1981__count)));
                            vlSelf->__Vfunc_leading_zero32__1981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1981__count)));
                            vlSelf->__Vfunc_leading_zero32__1981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1993__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1993__part 
                            = vlSelf->__Vfunc_leading_zero32__1993__value;
                        vlSelf->__Vfunc_leading_zero32__1993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1993__count)));
                            vlSelf->__Vfunc_leading_zero32__1993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1993__count)));
                            vlSelf->__Vfunc_leading_zero32__1993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1993__count)));
                            vlSelf->__Vfunc_leading_zero32__1993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1993__count)));
                            vlSelf->__Vfunc_leading_zero32__1993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1993__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2005__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2005__part 
                            = vlSelf->__Vfunc_leading_zero32__2005__value;
                        vlSelf->__Vfunc_leading_zero32__2005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2005__count)));
                            vlSelf->__Vfunc_leading_zero32__2005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2005__count)));
                            vlSelf->__Vfunc_leading_zero32__2005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2005__count)));
                            vlSelf->__Vfunc_leading_zero32__2005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2005__count)));
                            vlSelf->__Vfunc_leading_zero32__2005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2005__Vfuncout)) 
                             - (IData)(8U))));
}
