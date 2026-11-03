// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__38(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1938__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1938__part 
                            = vlSelf->__Vfunc_leading_zero32__1938__value;
                        vlSelf->__Vfunc_leading_zero32__1938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1938__count)));
                            vlSelf->__Vfunc_leading_zero32__1938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1938__count)));
                            vlSelf->__Vfunc_leading_zero32__1938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1938__count)));
                            vlSelf->__Vfunc_leading_zero32__1938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1938__count)));
                            vlSelf->__Vfunc_leading_zero32__1938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1950__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1950__part 
                            = vlSelf->__Vfunc_leading_zero32__1950__value;
                        vlSelf->__Vfunc_leading_zero32__1950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1950__count)));
                            vlSelf->__Vfunc_leading_zero32__1950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1950__count)));
                            vlSelf->__Vfunc_leading_zero32__1950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1950__count)));
                            vlSelf->__Vfunc_leading_zero32__1950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1950__count)));
                            vlSelf->__Vfunc_leading_zero32__1950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1962__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1962__part 
                            = vlSelf->__Vfunc_leading_zero32__1962__value;
                        vlSelf->__Vfunc_leading_zero32__1962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1962__count)));
                            vlSelf->__Vfunc_leading_zero32__1962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1962__count)));
                            vlSelf->__Vfunc_leading_zero32__1962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1962__count)));
                            vlSelf->__Vfunc_leading_zero32__1962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1962__count)));
                            vlSelf->__Vfunc_leading_zero32__1962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1974__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1974__part 
                            = vlSelf->__Vfunc_leading_zero32__1974__value;
                        vlSelf->__Vfunc_leading_zero32__1974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1974__count)));
                            vlSelf->__Vfunc_leading_zero32__1974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1974__count)));
                            vlSelf->__Vfunc_leading_zero32__1974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1974__count)));
                            vlSelf->__Vfunc_leading_zero32__1974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1974__count)));
                            vlSelf->__Vfunc_leading_zero32__1974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1986__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1986__part 
                            = vlSelf->__Vfunc_leading_zero32__1986__value;
                        vlSelf->__Vfunc_leading_zero32__1986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1986__count)));
                            vlSelf->__Vfunc_leading_zero32__1986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1986__count)));
                            vlSelf->__Vfunc_leading_zero32__1986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1986__count)));
                            vlSelf->__Vfunc_leading_zero32__1986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1986__count)));
                            vlSelf->__Vfunc_leading_zero32__1986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1998__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1998__part 
                            = vlSelf->__Vfunc_leading_zero32__1998__value;
                        vlSelf->__Vfunc_leading_zero32__1998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1998__count)));
                            vlSelf->__Vfunc_leading_zero32__1998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1998__count)));
                            vlSelf->__Vfunc_leading_zero32__1998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1998__count)));
                            vlSelf->__Vfunc_leading_zero32__1998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1998__count)));
                            vlSelf->__Vfunc_leading_zero32__1998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2010__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2010__part 
                            = vlSelf->__Vfunc_leading_zero32__2010__value;
                        vlSelf->__Vfunc_leading_zero32__2010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2010__count)));
                            vlSelf->__Vfunc_leading_zero32__2010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2010__count)));
                            vlSelf->__Vfunc_leading_zero32__2010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2010__count)));
                            vlSelf->__Vfunc_leading_zero32__2010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2010__count)));
                            vlSelf->__Vfunc_leading_zero32__2010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2022__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2022__part 
                            = vlSelf->__Vfunc_leading_zero32__2022__value;
                        vlSelf->__Vfunc_leading_zero32__2022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2022__count)));
                            vlSelf->__Vfunc_leading_zero32__2022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2022__count)));
                            vlSelf->__Vfunc_leading_zero32__2022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2022__count)));
                            vlSelf->__Vfunc_leading_zero32__2022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2022__count)));
                            vlSelf->__Vfunc_leading_zero32__2022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2034__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2034__part 
                            = vlSelf->__Vfunc_leading_zero32__2034__value;
                        vlSelf->__Vfunc_leading_zero32__2034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2034__count)));
                            vlSelf->__Vfunc_leading_zero32__2034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2034__count)));
                            vlSelf->__Vfunc_leading_zero32__2034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2034__count)));
                            vlSelf->__Vfunc_leading_zero32__2034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2034__count)));
                            vlSelf->__Vfunc_leading_zero32__2034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2046__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2046__part 
                            = vlSelf->__Vfunc_leading_zero32__2046__value;
                        vlSelf->__Vfunc_leading_zero32__2046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2046__count)));
                            vlSelf->__Vfunc_leading_zero32__2046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2046__count)));
                            vlSelf->__Vfunc_leading_zero32__2046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2046__count)));
                            vlSelf->__Vfunc_leading_zero32__2046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2046__count)));
                            vlSelf->__Vfunc_leading_zero32__2046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2058__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2058__part 
                            = vlSelf->__Vfunc_leading_zero32__2058__value;
                        vlSelf->__Vfunc_leading_zero32__2058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2058__count)));
                            vlSelf->__Vfunc_leading_zero32__2058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2058__count)));
                            vlSelf->__Vfunc_leading_zero32__2058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2058__count)));
                            vlSelf->__Vfunc_leading_zero32__2058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2058__count)));
                            vlSelf->__Vfunc_leading_zero32__2058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2070__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2070__part 
                            = vlSelf->__Vfunc_leading_zero32__2070__value;
                        vlSelf->__Vfunc_leading_zero32__2070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2070__count)));
                            vlSelf->__Vfunc_leading_zero32__2070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2070__count)));
                            vlSelf->__Vfunc_leading_zero32__2070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2070__count)));
                            vlSelf->__Vfunc_leading_zero32__2070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2070__count)));
                            vlSelf->__Vfunc_leading_zero32__2070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2082__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2082__part 
                            = vlSelf->__Vfunc_leading_zero32__2082__value;
                        vlSelf->__Vfunc_leading_zero32__2082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2082__count)));
                            vlSelf->__Vfunc_leading_zero32__2082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2082__count)));
                            vlSelf->__Vfunc_leading_zero32__2082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2082__count)));
                            vlSelf->__Vfunc_leading_zero32__2082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2082__count)));
                            vlSelf->__Vfunc_leading_zero32__2082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2094__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2094__part 
                            = vlSelf->__Vfunc_leading_zero32__2094__value;
                        vlSelf->__Vfunc_leading_zero32__2094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2094__count)));
                            vlSelf->__Vfunc_leading_zero32__2094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2094__count)));
                            vlSelf->__Vfunc_leading_zero32__2094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2094__count)));
                            vlSelf->__Vfunc_leading_zero32__2094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2094__count)));
                            vlSelf->__Vfunc_leading_zero32__2094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2106__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2106__part 
                            = vlSelf->__Vfunc_leading_zero32__2106__value;
                        vlSelf->__Vfunc_leading_zero32__2106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2106__count)));
                            vlSelf->__Vfunc_leading_zero32__2106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2106__count)));
                            vlSelf->__Vfunc_leading_zero32__2106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2106__count)));
                            vlSelf->__Vfunc_leading_zero32__2106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2106__count)));
                            vlSelf->__Vfunc_leading_zero32__2106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2118__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2118__part 
                            = vlSelf->__Vfunc_leading_zero32__2118__value;
                        vlSelf->__Vfunc_leading_zero32__2118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2118__count)));
                            vlSelf->__Vfunc_leading_zero32__2118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2118__count)));
                            vlSelf->__Vfunc_leading_zero32__2118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2118__count)));
                            vlSelf->__Vfunc_leading_zero32__2118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2118__count)));
                            vlSelf->__Vfunc_leading_zero32__2118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2130__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2130__part 
                            = vlSelf->__Vfunc_leading_zero32__2130__value;
                        vlSelf->__Vfunc_leading_zero32__2130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2130__count)));
                            vlSelf->__Vfunc_leading_zero32__2130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2130__count)));
                            vlSelf->__Vfunc_leading_zero32__2130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2130__count)));
                            vlSelf->__Vfunc_leading_zero32__2130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2130__count)));
                            vlSelf->__Vfunc_leading_zero32__2130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2142__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2142__part 
                            = vlSelf->__Vfunc_leading_zero32__2142__value;
                        vlSelf->__Vfunc_leading_zero32__2142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2142__count)));
                            vlSelf->__Vfunc_leading_zero32__2142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2142__count)));
                            vlSelf->__Vfunc_leading_zero32__2142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2142__count)));
                            vlSelf->__Vfunc_leading_zero32__2142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2142__count)));
                            vlSelf->__Vfunc_leading_zero32__2142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2154__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2154__part 
                            = vlSelf->__Vfunc_leading_zero32__2154__value;
                        vlSelf->__Vfunc_leading_zero32__2154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2154__count)));
                            vlSelf->__Vfunc_leading_zero32__2154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2154__count)));
                            vlSelf->__Vfunc_leading_zero32__2154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2154__count)));
                            vlSelf->__Vfunc_leading_zero32__2154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2154__count)));
                            vlSelf->__Vfunc_leading_zero32__2154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2166__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2166__part 
                            = vlSelf->__Vfunc_leading_zero32__2166__value;
                        vlSelf->__Vfunc_leading_zero32__2166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2166__count)));
                            vlSelf->__Vfunc_leading_zero32__2166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2166__count)));
                            vlSelf->__Vfunc_leading_zero32__2166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2166__count)));
                            vlSelf->__Vfunc_leading_zero32__2166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2166__count)));
                            vlSelf->__Vfunc_leading_zero32__2166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2178__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2178__part 
                            = vlSelf->__Vfunc_leading_zero32__2178__value;
                        vlSelf->__Vfunc_leading_zero32__2178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2178__count)));
                            vlSelf->__Vfunc_leading_zero32__2178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2178__count)));
                            vlSelf->__Vfunc_leading_zero32__2178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2178__count)));
                            vlSelf->__Vfunc_leading_zero32__2178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2178__count)));
                            vlSelf->__Vfunc_leading_zero32__2178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2190__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2190__part 
                            = vlSelf->__Vfunc_leading_zero32__2190__value;
                        vlSelf->__Vfunc_leading_zero32__2190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2190__count)));
                            vlSelf->__Vfunc_leading_zero32__2190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2190__count)));
                            vlSelf->__Vfunc_leading_zero32__2190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2190__count)));
                            vlSelf->__Vfunc_leading_zero32__2190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2190__count)));
                            vlSelf->__Vfunc_leading_zero32__2190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2202__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2202__part 
                            = vlSelf->__Vfunc_leading_zero32__2202__value;
                        vlSelf->__Vfunc_leading_zero32__2202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2202__count)));
                            vlSelf->__Vfunc_leading_zero32__2202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2202__count)));
                            vlSelf->__Vfunc_leading_zero32__2202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2202__count)));
                            vlSelf->__Vfunc_leading_zero32__2202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2202__count)));
                            vlSelf->__Vfunc_leading_zero32__2202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2214__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2214__part 
                            = vlSelf->__Vfunc_leading_zero32__2214__value;
                        vlSelf->__Vfunc_leading_zero32__2214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2214__count)));
                            vlSelf->__Vfunc_leading_zero32__2214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2214__count)));
                            vlSelf->__Vfunc_leading_zero32__2214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2214__count)));
                            vlSelf->__Vfunc_leading_zero32__2214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2214__count)));
                            vlSelf->__Vfunc_leading_zero32__2214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2226__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2226__part 
                            = vlSelf->__Vfunc_leading_zero32__2226__value;
                        vlSelf->__Vfunc_leading_zero32__2226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2226__count)));
                            vlSelf->__Vfunc_leading_zero32__2226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2226__count)));
                            vlSelf->__Vfunc_leading_zero32__2226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2226__count)));
                            vlSelf->__Vfunc_leading_zero32__2226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2226__count)));
                            vlSelf->__Vfunc_leading_zero32__2226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2238__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2238__part 
                            = vlSelf->__Vfunc_leading_zero32__2238__value;
                        vlSelf->__Vfunc_leading_zero32__2238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2238__count)));
                            vlSelf->__Vfunc_leading_zero32__2238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2238__count)));
                            vlSelf->__Vfunc_leading_zero32__2238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2238__count)));
                            vlSelf->__Vfunc_leading_zero32__2238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2238__count)));
                            vlSelf->__Vfunc_leading_zero32__2238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2250__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2250__part 
                            = vlSelf->__Vfunc_leading_zero32__2250__value;
                        vlSelf->__Vfunc_leading_zero32__2250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2250__count)));
                            vlSelf->__Vfunc_leading_zero32__2250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2250__count)));
                            vlSelf->__Vfunc_leading_zero32__2250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2250__count)));
                            vlSelf->__Vfunc_leading_zero32__2250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2250__count)));
                            vlSelf->__Vfunc_leading_zero32__2250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2262__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2262__part 
                            = vlSelf->__Vfunc_leading_zero32__2262__value;
                        vlSelf->__Vfunc_leading_zero32__2262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2262__count)));
                            vlSelf->__Vfunc_leading_zero32__2262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2262__count)));
                            vlSelf->__Vfunc_leading_zero32__2262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2262__count)));
                            vlSelf->__Vfunc_leading_zero32__2262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2262__count)));
                            vlSelf->__Vfunc_leading_zero32__2262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2274__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2274__part 
                            = vlSelf->__Vfunc_leading_zero32__2274__value;
                        vlSelf->__Vfunc_leading_zero32__2274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2274__count)));
                            vlSelf->__Vfunc_leading_zero32__2274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2274__count)));
                            vlSelf->__Vfunc_leading_zero32__2274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2274__count)));
                            vlSelf->__Vfunc_leading_zero32__2274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2274__count)));
                            vlSelf->__Vfunc_leading_zero32__2274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2274__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2286__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2286__part 
                            = vlSelf->__Vfunc_leading_zero32__2286__value;
                        vlSelf->__Vfunc_leading_zero32__2286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2286__count)));
                            vlSelf->__Vfunc_leading_zero32__2286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2286__count)));
                            vlSelf->__Vfunc_leading_zero32__2286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2286__count)));
                            vlSelf->__Vfunc_leading_zero32__2286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2286__count)));
                            vlSelf->__Vfunc_leading_zero32__2286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2298__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2298__part 
                            = vlSelf->__Vfunc_leading_zero32__2298__value;
                        vlSelf->__Vfunc_leading_zero32__2298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2298__count)));
                            vlSelf->__Vfunc_leading_zero32__2298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2298__count)));
                            vlSelf->__Vfunc_leading_zero32__2298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2298__count)));
                            vlSelf->__Vfunc_leading_zero32__2298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2298__count)));
                            vlSelf->__Vfunc_leading_zero32__2298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2310__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2310__part 
                            = vlSelf->__Vfunc_leading_zero32__2310__value;
                        vlSelf->__Vfunc_leading_zero32__2310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2310__count)));
                            vlSelf->__Vfunc_leading_zero32__2310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2310__count)));
                            vlSelf->__Vfunc_leading_zero32__2310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2310__count)));
                            vlSelf->__Vfunc_leading_zero32__2310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2310__count)));
                            vlSelf->__Vfunc_leading_zero32__2310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2322__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2322__part 
                            = vlSelf->__Vfunc_leading_zero32__2322__value;
                        vlSelf->__Vfunc_leading_zero32__2322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2322__count)));
                            vlSelf->__Vfunc_leading_zero32__2322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2322__count)));
                            vlSelf->__Vfunc_leading_zero32__2322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2322__count)));
                            vlSelf->__Vfunc_leading_zero32__2322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2322__count)));
                            vlSelf->__Vfunc_leading_zero32__2322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2334__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2334__part 
                            = vlSelf->__Vfunc_leading_zero32__2334__value;
                        vlSelf->__Vfunc_leading_zero32__2334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2334__count)));
                            vlSelf->__Vfunc_leading_zero32__2334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2334__count)));
                            vlSelf->__Vfunc_leading_zero32__2334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2334__count)));
                            vlSelf->__Vfunc_leading_zero32__2334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2334__count)));
                            vlSelf->__Vfunc_leading_zero32__2334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2346__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2346__part 
                            = vlSelf->__Vfunc_leading_zero32__2346__value;
                        vlSelf->__Vfunc_leading_zero32__2346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2346__count)));
                            vlSelf->__Vfunc_leading_zero32__2346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2346__count)));
                            vlSelf->__Vfunc_leading_zero32__2346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2346__count)));
                            vlSelf->__Vfunc_leading_zero32__2346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2346__count)));
                            vlSelf->__Vfunc_leading_zero32__2346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2346__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2358__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2358__part 
                            = vlSelf->__Vfunc_leading_zero32__2358__value;
                        vlSelf->__Vfunc_leading_zero32__2358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2358__count)));
                            vlSelf->__Vfunc_leading_zero32__2358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2358__count)));
                            vlSelf->__Vfunc_leading_zero32__2358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2358__count)));
                            vlSelf->__Vfunc_leading_zero32__2358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2358__count)));
                            vlSelf->__Vfunc_leading_zero32__2358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2358__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2370__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2370__part 
                            = vlSelf->__Vfunc_leading_zero32__2370__value;
                        vlSelf->__Vfunc_leading_zero32__2370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2370__count)));
                            vlSelf->__Vfunc_leading_zero32__2370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2370__count)));
                            vlSelf->__Vfunc_leading_zero32__2370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2370__count)));
                            vlSelf->__Vfunc_leading_zero32__2370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2370__count)));
                            vlSelf->__Vfunc_leading_zero32__2370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2370__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2382__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2382__part 
                            = vlSelf->__Vfunc_leading_zero32__2382__value;
                        vlSelf->__Vfunc_leading_zero32__2382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2382__count)));
                            vlSelf->__Vfunc_leading_zero32__2382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2382__count)));
                            vlSelf->__Vfunc_leading_zero32__2382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2382__count)));
                            vlSelf->__Vfunc_leading_zero32__2382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2382__count)));
                            vlSelf->__Vfunc_leading_zero32__2382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2382__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2394__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2394__part 
                            = vlSelf->__Vfunc_leading_zero32__2394__value;
                        vlSelf->__Vfunc_leading_zero32__2394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2394__count)));
                            vlSelf->__Vfunc_leading_zero32__2394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2394__count)));
                            vlSelf->__Vfunc_leading_zero32__2394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2394__count)));
                            vlSelf->__Vfunc_leading_zero32__2394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2394__count)));
                            vlSelf->__Vfunc_leading_zero32__2394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2394__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2406__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2406__part 
                            = vlSelf->__Vfunc_leading_zero32__2406__value;
                        vlSelf->__Vfunc_leading_zero32__2406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2406__count)));
                            vlSelf->__Vfunc_leading_zero32__2406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2406__count)));
                            vlSelf->__Vfunc_leading_zero32__2406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2406__count)));
                            vlSelf->__Vfunc_leading_zero32__2406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2406__count)));
                            vlSelf->__Vfunc_leading_zero32__2406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2406__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2418__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2418__part 
                            = vlSelf->__Vfunc_leading_zero32__2418__value;
                        vlSelf->__Vfunc_leading_zero32__2418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2418__count)));
                            vlSelf->__Vfunc_leading_zero32__2418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2418__count)));
                            vlSelf->__Vfunc_leading_zero32__2418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2418__count)));
                            vlSelf->__Vfunc_leading_zero32__2418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2418__count)));
                            vlSelf->__Vfunc_leading_zero32__2418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2418__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2430__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2430__part 
                            = vlSelf->__Vfunc_leading_zero32__2430__value;
                        vlSelf->__Vfunc_leading_zero32__2430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2430__count)));
                            vlSelf->__Vfunc_leading_zero32__2430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2430__count)));
                            vlSelf->__Vfunc_leading_zero32__2430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2430__count)));
                            vlSelf->__Vfunc_leading_zero32__2430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2430__count)));
                            vlSelf->__Vfunc_leading_zero32__2430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2430__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2442__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2442__part 
                            = vlSelf->__Vfunc_leading_zero32__2442__value;
                        vlSelf->__Vfunc_leading_zero32__2442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2442__count)));
                            vlSelf->__Vfunc_leading_zero32__2442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2442__count)));
                            vlSelf->__Vfunc_leading_zero32__2442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2442__count)));
                            vlSelf->__Vfunc_leading_zero32__2442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2442__count)));
                            vlSelf->__Vfunc_leading_zero32__2442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2442__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2454__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2454__part 
                            = vlSelf->__Vfunc_leading_zero32__2454__value;
                        vlSelf->__Vfunc_leading_zero32__2454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2454__count)));
                            vlSelf->__Vfunc_leading_zero32__2454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2454__count)));
                            vlSelf->__Vfunc_leading_zero32__2454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2454__count)));
                            vlSelf->__Vfunc_leading_zero32__2454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2454__count)));
                            vlSelf->__Vfunc_leading_zero32__2454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2454__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2466__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2466__part 
                            = vlSelf->__Vfunc_leading_zero32__2466__value;
                        vlSelf->__Vfunc_leading_zero32__2466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2466__count)));
                            vlSelf->__Vfunc_leading_zero32__2466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2466__count)));
                            vlSelf->__Vfunc_leading_zero32__2466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2466__count)));
                            vlSelf->__Vfunc_leading_zero32__2466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2466__count)));
                            vlSelf->__Vfunc_leading_zero32__2466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2466__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2478__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2478__part 
                            = vlSelf->__Vfunc_leading_zero32__2478__value;
                        vlSelf->__Vfunc_leading_zero32__2478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2478__count)));
                            vlSelf->__Vfunc_leading_zero32__2478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2478__count)));
                            vlSelf->__Vfunc_leading_zero32__2478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2478__count)));
                            vlSelf->__Vfunc_leading_zero32__2478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2478__count)));
                            vlSelf->__Vfunc_leading_zero32__2478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2478__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2490__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2490__part 
                            = vlSelf->__Vfunc_leading_zero32__2490__value;
                        vlSelf->__Vfunc_leading_zero32__2490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2490__count)));
                            vlSelf->__Vfunc_leading_zero32__2490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2490__count)));
                            vlSelf->__Vfunc_leading_zero32__2490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2490__count)));
                            vlSelf->__Vfunc_leading_zero32__2490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2490__count)));
                            vlSelf->__Vfunc_leading_zero32__2490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2490__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2502__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2502__part 
                            = vlSelf->__Vfunc_leading_zero32__2502__value;
                        vlSelf->__Vfunc_leading_zero32__2502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2502__count)));
                            vlSelf->__Vfunc_leading_zero32__2502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2502__count)));
                            vlSelf->__Vfunc_leading_zero32__2502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2502__count)));
                            vlSelf->__Vfunc_leading_zero32__2502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2502__count)));
                            vlSelf->__Vfunc_leading_zero32__2502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2502__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2514__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2514__part 
                            = vlSelf->__Vfunc_leading_zero32__2514__value;
                        vlSelf->__Vfunc_leading_zero32__2514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2514__count)));
                            vlSelf->__Vfunc_leading_zero32__2514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2514__count)));
                            vlSelf->__Vfunc_leading_zero32__2514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2514__count)));
                            vlSelf->__Vfunc_leading_zero32__2514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2514__count)));
                            vlSelf->__Vfunc_leading_zero32__2514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2514__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2526__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2526__part 
                            = vlSelf->__Vfunc_leading_zero32__2526__value;
                        vlSelf->__Vfunc_leading_zero32__2526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2526__count)));
                            vlSelf->__Vfunc_leading_zero32__2526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2526__count)));
                            vlSelf->__Vfunc_leading_zero32__2526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2526__count)));
                            vlSelf->__Vfunc_leading_zero32__2526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2526__count)));
                            vlSelf->__Vfunc_leading_zero32__2526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2526__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2538__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2538__part 
                            = vlSelf->__Vfunc_leading_zero32__2538__value;
                        vlSelf->__Vfunc_leading_zero32__2538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2538__count)));
                            vlSelf->__Vfunc_leading_zero32__2538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2538__count)));
                            vlSelf->__Vfunc_leading_zero32__2538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2538__count)));
                            vlSelf->__Vfunc_leading_zero32__2538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2538__count)));
                            vlSelf->__Vfunc_leading_zero32__2538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2538__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2550__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2550__part 
                            = vlSelf->__Vfunc_leading_zero32__2550__value;
                        vlSelf->__Vfunc_leading_zero32__2550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2550__count)));
                            vlSelf->__Vfunc_leading_zero32__2550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2550__count)));
                            vlSelf->__Vfunc_leading_zero32__2550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2550__count)));
                            vlSelf->__Vfunc_leading_zero32__2550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2550__count)));
                            vlSelf->__Vfunc_leading_zero32__2550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2550__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2562__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2562__part 
                            = vlSelf->__Vfunc_leading_zero32__2562__value;
                        vlSelf->__Vfunc_leading_zero32__2562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2562__count)));
                            vlSelf->__Vfunc_leading_zero32__2562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2562__count)));
                            vlSelf->__Vfunc_leading_zero32__2562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2562__count)));
                            vlSelf->__Vfunc_leading_zero32__2562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2562__count)));
                            vlSelf->__Vfunc_leading_zero32__2562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2562__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2574__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2574__part 
                            = vlSelf->__Vfunc_leading_zero32__2574__value;
                        vlSelf->__Vfunc_leading_zero32__2574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2574__count)));
                            vlSelf->__Vfunc_leading_zero32__2574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2574__count)));
                            vlSelf->__Vfunc_leading_zero32__2574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2574__count)));
                            vlSelf->__Vfunc_leading_zero32__2574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2574__count)));
                            vlSelf->__Vfunc_leading_zero32__2574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2574__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2586__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2586__part 
                            = vlSelf->__Vfunc_leading_zero32__2586__value;
                        vlSelf->__Vfunc_leading_zero32__2586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2586__count)));
                            vlSelf->__Vfunc_leading_zero32__2586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2586__count)));
                            vlSelf->__Vfunc_leading_zero32__2586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2586__count)));
                            vlSelf->__Vfunc_leading_zero32__2586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2586__count)));
                            vlSelf->__Vfunc_leading_zero32__2586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2586__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2598__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2598__part 
                            = vlSelf->__Vfunc_leading_zero32__2598__value;
                        vlSelf->__Vfunc_leading_zero32__2598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2598__count)));
                            vlSelf->__Vfunc_leading_zero32__2598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2598__count)));
                            vlSelf->__Vfunc_leading_zero32__2598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2598__count)));
                            vlSelf->__Vfunc_leading_zero32__2598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2598__count)));
                            vlSelf->__Vfunc_leading_zero32__2598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2598__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2610__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2610__part 
                            = vlSelf->__Vfunc_leading_zero32__2610__value;
                        vlSelf->__Vfunc_leading_zero32__2610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2610__count)));
                            vlSelf->__Vfunc_leading_zero32__2610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2610__count)));
                            vlSelf->__Vfunc_leading_zero32__2610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2610__count)));
                            vlSelf->__Vfunc_leading_zero32__2610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2610__count)));
                            vlSelf->__Vfunc_leading_zero32__2610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2610__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2622__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2622__part 
                            = vlSelf->__Vfunc_leading_zero32__2622__value;
                        vlSelf->__Vfunc_leading_zero32__2622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2622__count)));
                            vlSelf->__Vfunc_leading_zero32__2622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2622__count)));
                            vlSelf->__Vfunc_leading_zero32__2622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2622__count)));
                            vlSelf->__Vfunc_leading_zero32__2622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2622__count)));
                            vlSelf->__Vfunc_leading_zero32__2622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2622__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2634__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2634__part 
                            = vlSelf->__Vfunc_leading_zero32__2634__value;
                        vlSelf->__Vfunc_leading_zero32__2634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2634__count)));
                            vlSelf->__Vfunc_leading_zero32__2634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2634__count)));
                            vlSelf->__Vfunc_leading_zero32__2634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2634__count)));
                            vlSelf->__Vfunc_leading_zero32__2634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2634__count)));
                            vlSelf->__Vfunc_leading_zero32__2634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2634__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2646__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2646__part 
                            = vlSelf->__Vfunc_leading_zero32__2646__value;
                        vlSelf->__Vfunc_leading_zero32__2646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2646__count)));
                            vlSelf->__Vfunc_leading_zero32__2646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2646__count)));
                            vlSelf->__Vfunc_leading_zero32__2646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2646__count)));
                            vlSelf->__Vfunc_leading_zero32__2646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2646__count)));
                            vlSelf->__Vfunc_leading_zero32__2646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2646__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2658__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2658__part 
                            = vlSelf->__Vfunc_leading_zero32__2658__value;
                        vlSelf->__Vfunc_leading_zero32__2658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2658__count)));
                            vlSelf->__Vfunc_leading_zero32__2658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2658__count)));
                            vlSelf->__Vfunc_leading_zero32__2658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2658__count)));
                            vlSelf->__Vfunc_leading_zero32__2658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2658__count)));
                            vlSelf->__Vfunc_leading_zero32__2658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2658__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2670__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2670__part 
                            = vlSelf->__Vfunc_leading_zero32__2670__value;
                        vlSelf->__Vfunc_leading_zero32__2670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2670__count)));
                            vlSelf->__Vfunc_leading_zero32__2670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2670__count)));
                            vlSelf->__Vfunc_leading_zero32__2670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2670__count)));
                            vlSelf->__Vfunc_leading_zero32__2670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2670__count)));
                            vlSelf->__Vfunc_leading_zero32__2670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2670__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2682__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2682__part 
                            = vlSelf->__Vfunc_leading_zero32__2682__value;
                        vlSelf->__Vfunc_leading_zero32__2682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2682__count)));
                            vlSelf->__Vfunc_leading_zero32__2682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2682__count)));
                            vlSelf->__Vfunc_leading_zero32__2682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2682__count)));
                            vlSelf->__Vfunc_leading_zero32__2682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2682__count)));
                            vlSelf->__Vfunc_leading_zero32__2682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2682__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2694__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2694__part 
                            = vlSelf->__Vfunc_leading_zero32__2694__value;
                        vlSelf->__Vfunc_leading_zero32__2694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2694__count)));
                            vlSelf->__Vfunc_leading_zero32__2694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2694__count)));
                            vlSelf->__Vfunc_leading_zero32__2694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2694__count)));
                            vlSelf->__Vfunc_leading_zero32__2694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2694__count)));
                            vlSelf->__Vfunc_leading_zero32__2694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2694__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2706__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2706__part 
                            = vlSelf->__Vfunc_leading_zero32__2706__value;
                        vlSelf->__Vfunc_leading_zero32__2706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2706__count)));
                            vlSelf->__Vfunc_leading_zero32__2706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2706__count)));
                            vlSelf->__Vfunc_leading_zero32__2706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2706__count)));
                            vlSelf->__Vfunc_leading_zero32__2706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2706__count)));
                            vlSelf->__Vfunc_leading_zero32__2706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2706__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2718__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2718__part 
                            = vlSelf->__Vfunc_leading_zero32__2718__value;
                        vlSelf->__Vfunc_leading_zero32__2718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2718__count)));
                            vlSelf->__Vfunc_leading_zero32__2718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2718__count)));
                            vlSelf->__Vfunc_leading_zero32__2718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2718__count)));
                            vlSelf->__Vfunc_leading_zero32__2718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2718__count)));
                            vlSelf->__Vfunc_leading_zero32__2718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2718__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2730__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2730__part 
                            = vlSelf->__Vfunc_leading_zero32__2730__value;
                        vlSelf->__Vfunc_leading_zero32__2730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2730__count)));
                            vlSelf->__Vfunc_leading_zero32__2730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2730__count)));
                            vlSelf->__Vfunc_leading_zero32__2730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2730__count)));
                            vlSelf->__Vfunc_leading_zero32__2730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2730__count)));
                            vlSelf->__Vfunc_leading_zero32__2730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2730__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2742__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2742__part 
                            = vlSelf->__Vfunc_leading_zero32__2742__value;
                        vlSelf->__Vfunc_leading_zero32__2742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2742__count)));
                            vlSelf->__Vfunc_leading_zero32__2742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2742__count)));
                            vlSelf->__Vfunc_leading_zero32__2742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2742__count)));
                            vlSelf->__Vfunc_leading_zero32__2742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2742__count)));
                            vlSelf->__Vfunc_leading_zero32__2742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2742__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2754__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2754__part 
                            = vlSelf->__Vfunc_leading_zero32__2754__value;
                        vlSelf->__Vfunc_leading_zero32__2754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2754__count)));
                            vlSelf->__Vfunc_leading_zero32__2754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2754__count)));
                            vlSelf->__Vfunc_leading_zero32__2754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2754__count)));
                            vlSelf->__Vfunc_leading_zero32__2754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2754__count)));
                            vlSelf->__Vfunc_leading_zero32__2754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2754__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2766__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2766__part 
                            = vlSelf->__Vfunc_leading_zero32__2766__value;
                        vlSelf->__Vfunc_leading_zero32__2766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2766__count)));
                            vlSelf->__Vfunc_leading_zero32__2766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2766__count)));
                            vlSelf->__Vfunc_leading_zero32__2766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2766__count)));
                            vlSelf->__Vfunc_leading_zero32__2766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2766__count)));
                            vlSelf->__Vfunc_leading_zero32__2766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2766__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2778__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2778__part 
                            = vlSelf->__Vfunc_leading_zero32__2778__value;
                        vlSelf->__Vfunc_leading_zero32__2778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2778__count)));
                            vlSelf->__Vfunc_leading_zero32__2778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2778__count)));
                            vlSelf->__Vfunc_leading_zero32__2778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2778__count)));
                            vlSelf->__Vfunc_leading_zero32__2778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2778__count)));
                            vlSelf->__Vfunc_leading_zero32__2778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2778__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2790__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2790__part 
                            = vlSelf->__Vfunc_leading_zero32__2790__value;
                        vlSelf->__Vfunc_leading_zero32__2790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2790__count)));
                            vlSelf->__Vfunc_leading_zero32__2790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2790__count)));
                            vlSelf->__Vfunc_leading_zero32__2790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2790__count)));
                            vlSelf->__Vfunc_leading_zero32__2790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2790__count)));
                            vlSelf->__Vfunc_leading_zero32__2790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2790__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2802__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2802__part 
                            = vlSelf->__Vfunc_leading_zero32__2802__value;
                        vlSelf->__Vfunc_leading_zero32__2802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2802__count)));
                            vlSelf->__Vfunc_leading_zero32__2802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2802__count)));
                            vlSelf->__Vfunc_leading_zero32__2802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2802__count)));
                            vlSelf->__Vfunc_leading_zero32__2802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2802__count)));
                            vlSelf->__Vfunc_leading_zero32__2802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2802__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2814__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2814__part 
                            = vlSelf->__Vfunc_leading_zero32__2814__value;
                        vlSelf->__Vfunc_leading_zero32__2814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2814__count)));
                            vlSelf->__Vfunc_leading_zero32__2814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2814__count)));
                            vlSelf->__Vfunc_leading_zero32__2814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2814__count)));
                            vlSelf->__Vfunc_leading_zero32__2814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2814__count)));
                            vlSelf->__Vfunc_leading_zero32__2814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2814__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2826__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2826__part 
                            = vlSelf->__Vfunc_leading_zero32__2826__value;
                        vlSelf->__Vfunc_leading_zero32__2826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2826__count)));
                            vlSelf->__Vfunc_leading_zero32__2826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2826__count)));
                            vlSelf->__Vfunc_leading_zero32__2826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2826__count)));
                            vlSelf->__Vfunc_leading_zero32__2826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2826__count)));
                            vlSelf->__Vfunc_leading_zero32__2826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2826__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2838__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2838__part 
                            = vlSelf->__Vfunc_leading_zero32__2838__value;
                        vlSelf->__Vfunc_leading_zero32__2838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2838__count)));
                            vlSelf->__Vfunc_leading_zero32__2838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2838__count)));
                            vlSelf->__Vfunc_leading_zero32__2838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2838__count)));
                            vlSelf->__Vfunc_leading_zero32__2838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2838__count)));
                            vlSelf->__Vfunc_leading_zero32__2838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2838__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2850__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2850__part 
                            = vlSelf->__Vfunc_leading_zero32__2850__value;
                        vlSelf->__Vfunc_leading_zero32__2850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2850__count)));
                            vlSelf->__Vfunc_leading_zero32__2850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2850__count)));
                            vlSelf->__Vfunc_leading_zero32__2850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2850__count)));
                            vlSelf->__Vfunc_leading_zero32__2850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2850__count)));
                            vlSelf->__Vfunc_leading_zero32__2850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2850__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2862__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2862__part 
                            = vlSelf->__Vfunc_leading_zero32__2862__value;
                        vlSelf->__Vfunc_leading_zero32__2862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2862__count)));
                            vlSelf->__Vfunc_leading_zero32__2862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2862__count)));
                            vlSelf->__Vfunc_leading_zero32__2862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2862__count)));
                            vlSelf->__Vfunc_leading_zero32__2862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2862__count)));
                            vlSelf->__Vfunc_leading_zero32__2862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2862__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2874__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2874__part 
                            = vlSelf->__Vfunc_leading_zero32__2874__value;
                        vlSelf->__Vfunc_leading_zero32__2874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2874__count)));
                            vlSelf->__Vfunc_leading_zero32__2874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2874__count)));
                            vlSelf->__Vfunc_leading_zero32__2874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2874__count)));
                            vlSelf->__Vfunc_leading_zero32__2874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2874__count)));
                            vlSelf->__Vfunc_leading_zero32__2874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2874__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2886__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2886__part 
                            = vlSelf->__Vfunc_leading_zero32__2886__value;
                        vlSelf->__Vfunc_leading_zero32__2886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2886__count)));
                            vlSelf->__Vfunc_leading_zero32__2886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2886__count)));
                            vlSelf->__Vfunc_leading_zero32__2886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2886__count)));
                            vlSelf->__Vfunc_leading_zero32__2886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2886__count)));
                            vlSelf->__Vfunc_leading_zero32__2886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2886__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2898__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2898__part 
                            = vlSelf->__Vfunc_leading_zero32__2898__value;
                        vlSelf->__Vfunc_leading_zero32__2898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2898__count)));
                            vlSelf->__Vfunc_leading_zero32__2898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2898__count)));
                            vlSelf->__Vfunc_leading_zero32__2898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2898__count)));
                            vlSelf->__Vfunc_leading_zero32__2898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2898__count)));
                            vlSelf->__Vfunc_leading_zero32__2898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2898__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2910__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2910__part 
                            = vlSelf->__Vfunc_leading_zero32__2910__value;
                        vlSelf->__Vfunc_leading_zero32__2910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2910__count)));
                            vlSelf->__Vfunc_leading_zero32__2910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2910__count)));
                            vlSelf->__Vfunc_leading_zero32__2910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2910__count)));
                            vlSelf->__Vfunc_leading_zero32__2910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2910__count)));
                            vlSelf->__Vfunc_leading_zero32__2910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2910__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2922__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2922__part 
                            = vlSelf->__Vfunc_leading_zero32__2922__value;
                        vlSelf->__Vfunc_leading_zero32__2922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2922__count)));
                            vlSelf->__Vfunc_leading_zero32__2922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2922__count)));
                            vlSelf->__Vfunc_leading_zero32__2922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2922__count)));
                            vlSelf->__Vfunc_leading_zero32__2922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2922__count)));
                            vlSelf->__Vfunc_leading_zero32__2922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2922__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2934__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2934__part 
                            = vlSelf->__Vfunc_leading_zero32__2934__value;
                        vlSelf->__Vfunc_leading_zero32__2934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2934__count)));
                            vlSelf->__Vfunc_leading_zero32__2934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2934__count)));
                            vlSelf->__Vfunc_leading_zero32__2934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2934__count)));
                            vlSelf->__Vfunc_leading_zero32__2934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2934__count)));
                            vlSelf->__Vfunc_leading_zero32__2934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2934__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2946__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2946__part 
                            = vlSelf->__Vfunc_leading_zero32__2946__value;
                        vlSelf->__Vfunc_leading_zero32__2946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2946__count)));
                            vlSelf->__Vfunc_leading_zero32__2946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2946__count)));
                            vlSelf->__Vfunc_leading_zero32__2946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2946__count)));
                            vlSelf->__Vfunc_leading_zero32__2946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2946__count)));
                            vlSelf->__Vfunc_leading_zero32__2946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2946__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2958__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2958__part 
                            = vlSelf->__Vfunc_leading_zero32__2958__value;
                        vlSelf->__Vfunc_leading_zero32__2958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2958__count)));
                            vlSelf->__Vfunc_leading_zero32__2958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2958__count)));
                            vlSelf->__Vfunc_leading_zero32__2958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2958__count)));
                            vlSelf->__Vfunc_leading_zero32__2958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2958__count)));
                            vlSelf->__Vfunc_leading_zero32__2958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2958__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2970__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2970__part 
                            = vlSelf->__Vfunc_leading_zero32__2970__value;
                        vlSelf->__Vfunc_leading_zero32__2970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2970__count)));
                            vlSelf->__Vfunc_leading_zero32__2970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2970__count)));
                            vlSelf->__Vfunc_leading_zero32__2970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2970__count)));
                            vlSelf->__Vfunc_leading_zero32__2970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2970__count)));
                            vlSelf->__Vfunc_leading_zero32__2970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2970__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2982__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2982__part 
                            = vlSelf->__Vfunc_leading_zero32__2982__value;
                        vlSelf->__Vfunc_leading_zero32__2982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2982__count)));
                            vlSelf->__Vfunc_leading_zero32__2982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2982__count)));
                            vlSelf->__Vfunc_leading_zero32__2982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2982__count)));
                            vlSelf->__Vfunc_leading_zero32__2982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2982__count)));
                            vlSelf->__Vfunc_leading_zero32__2982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2982__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2994__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2994__part 
                            = vlSelf->__Vfunc_leading_zero32__2994__value;
                        vlSelf->__Vfunc_leading_zero32__2994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2994__count)));
                            vlSelf->__Vfunc_leading_zero32__2994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2994__count)));
                            vlSelf->__Vfunc_leading_zero32__2994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2994__count)));
                            vlSelf->__Vfunc_leading_zero32__2994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2994__count)));
                            vlSelf->__Vfunc_leading_zero32__2994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2994__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3006__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3006__part 
                            = vlSelf->__Vfunc_leading_zero32__3006__value;
                        vlSelf->__Vfunc_leading_zero32__3006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3006__count)));
                            vlSelf->__Vfunc_leading_zero32__3006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3006__count)));
                            vlSelf->__Vfunc_leading_zero32__3006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3006__count)));
                            vlSelf->__Vfunc_leading_zero32__3006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3006__count)));
                            vlSelf->__Vfunc_leading_zero32__3006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3006__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3018__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3018__part 
                            = vlSelf->__Vfunc_leading_zero32__3018__value;
                        vlSelf->__Vfunc_leading_zero32__3018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3018__count)));
                            vlSelf->__Vfunc_leading_zero32__3018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3018__count)));
                            vlSelf->__Vfunc_leading_zero32__3018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3018__count)));
                            vlSelf->__Vfunc_leading_zero32__3018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3018__count)));
                            vlSelf->__Vfunc_leading_zero32__3018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3018__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3030__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3030__part 
                            = vlSelf->__Vfunc_leading_zero32__3030__value;
                        vlSelf->__Vfunc_leading_zero32__3030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3030__count)));
                            vlSelf->__Vfunc_leading_zero32__3030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3030__count)));
                            vlSelf->__Vfunc_leading_zero32__3030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3030__count)));
                            vlSelf->__Vfunc_leading_zero32__3030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3030__count)));
                            vlSelf->__Vfunc_leading_zero32__3030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3030__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3042__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3042__part 
                            = vlSelf->__Vfunc_leading_zero32__3042__value;
                        vlSelf->__Vfunc_leading_zero32__3042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3042__count)));
                            vlSelf->__Vfunc_leading_zero32__3042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3042__count)));
                            vlSelf->__Vfunc_leading_zero32__3042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3042__count)));
                            vlSelf->__Vfunc_leading_zero32__3042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3042__count)));
                            vlSelf->__Vfunc_leading_zero32__3042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3042__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3054__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3054__part 
                            = vlSelf->__Vfunc_leading_zero32__3054__value;
                        vlSelf->__Vfunc_leading_zero32__3054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3054__count)));
                            vlSelf->__Vfunc_leading_zero32__3054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3054__count)));
                            vlSelf->__Vfunc_leading_zero32__3054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3054__count)));
                            vlSelf->__Vfunc_leading_zero32__3054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3054__count)));
                            vlSelf->__Vfunc_leading_zero32__3054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3054__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3066__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3066__part 
                            = vlSelf->__Vfunc_leading_zero32__3066__value;
                        vlSelf->__Vfunc_leading_zero32__3066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3066__count)));
                            vlSelf->__Vfunc_leading_zero32__3066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3066__count)));
                            vlSelf->__Vfunc_leading_zero32__3066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3066__count)));
                            vlSelf->__Vfunc_leading_zero32__3066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3066__count)));
                            vlSelf->__Vfunc_leading_zero32__3066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3066__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3078__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3078__part 
                            = vlSelf->__Vfunc_leading_zero32__3078__value;
                        vlSelf->__Vfunc_leading_zero32__3078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3078__count)));
                            vlSelf->__Vfunc_leading_zero32__3078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3078__count)));
                            vlSelf->__Vfunc_leading_zero32__3078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3078__count)));
                            vlSelf->__Vfunc_leading_zero32__3078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3078__count)));
                            vlSelf->__Vfunc_leading_zero32__3078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3078__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3090__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3090__part 
                            = vlSelf->__Vfunc_leading_zero32__3090__value;
                        vlSelf->__Vfunc_leading_zero32__3090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3090__count)));
                            vlSelf->__Vfunc_leading_zero32__3090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3090__count)));
                            vlSelf->__Vfunc_leading_zero32__3090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3090__count)));
                            vlSelf->__Vfunc_leading_zero32__3090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3090__count)));
                            vlSelf->__Vfunc_leading_zero32__3090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3090__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3102__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3102__part 
                            = vlSelf->__Vfunc_leading_zero32__3102__value;
                        vlSelf->__Vfunc_leading_zero32__3102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3102__count)));
                            vlSelf->__Vfunc_leading_zero32__3102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3102__count)));
                            vlSelf->__Vfunc_leading_zero32__3102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3102__count)));
                            vlSelf->__Vfunc_leading_zero32__3102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3102__count)));
                            vlSelf->__Vfunc_leading_zero32__3102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3114__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3114__part 
                            = vlSelf->__Vfunc_leading_zero32__3114__value;
                        vlSelf->__Vfunc_leading_zero32__3114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3114__count)));
                            vlSelf->__Vfunc_leading_zero32__3114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3114__count)));
                            vlSelf->__Vfunc_leading_zero32__3114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3114__count)));
                            vlSelf->__Vfunc_leading_zero32__3114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3114__count)));
                            vlSelf->__Vfunc_leading_zero32__3114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3126__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3126__part 
                            = vlSelf->__Vfunc_leading_zero32__3126__value;
                        vlSelf->__Vfunc_leading_zero32__3126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3126__count)));
                            vlSelf->__Vfunc_leading_zero32__3126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3126__count)));
                            vlSelf->__Vfunc_leading_zero32__3126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3126__count)));
                            vlSelf->__Vfunc_leading_zero32__3126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3126__count)));
                            vlSelf->__Vfunc_leading_zero32__3126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3138__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3138__part 
                            = vlSelf->__Vfunc_leading_zero32__3138__value;
                        vlSelf->__Vfunc_leading_zero32__3138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3138__count)));
                            vlSelf->__Vfunc_leading_zero32__3138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3138__count)));
                            vlSelf->__Vfunc_leading_zero32__3138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3138__count)));
                            vlSelf->__Vfunc_leading_zero32__3138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3138__count)));
                            vlSelf->__Vfunc_leading_zero32__3138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3150__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3150__part 
                            = vlSelf->__Vfunc_leading_zero32__3150__value;
                        vlSelf->__Vfunc_leading_zero32__3150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3150__count)));
                            vlSelf->__Vfunc_leading_zero32__3150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3150__count)));
                            vlSelf->__Vfunc_leading_zero32__3150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3150__count)));
                            vlSelf->__Vfunc_leading_zero32__3150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3150__count)));
                            vlSelf->__Vfunc_leading_zero32__3150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3162__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3162__part 
                            = vlSelf->__Vfunc_leading_zero32__3162__value;
                        vlSelf->__Vfunc_leading_zero32__3162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3162__count)));
                            vlSelf->__Vfunc_leading_zero32__3162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3162__count)));
                            vlSelf->__Vfunc_leading_zero32__3162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3162__count)));
                            vlSelf->__Vfunc_leading_zero32__3162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3162__count)));
                            vlSelf->__Vfunc_leading_zero32__3162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3174__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3174__part 
                            = vlSelf->__Vfunc_leading_zero32__3174__value;
                        vlSelf->__Vfunc_leading_zero32__3174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3174__count)));
                            vlSelf->__Vfunc_leading_zero32__3174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3174__count)));
                            vlSelf->__Vfunc_leading_zero32__3174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3174__count)));
                            vlSelf->__Vfunc_leading_zero32__3174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3174__count)));
                            vlSelf->__Vfunc_leading_zero32__3174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3174__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3186__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3186__part 
                            = vlSelf->__Vfunc_leading_zero32__3186__value;
                        vlSelf->__Vfunc_leading_zero32__3186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3186__count)));
                            vlSelf->__Vfunc_leading_zero32__3186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3186__count)));
                            vlSelf->__Vfunc_leading_zero32__3186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3186__count)));
                            vlSelf->__Vfunc_leading_zero32__3186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3186__count)));
                            vlSelf->__Vfunc_leading_zero32__3186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3198__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3198__part 
                            = vlSelf->__Vfunc_leading_zero32__3198__value;
                        vlSelf->__Vfunc_leading_zero32__3198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3198__count)));
                            vlSelf->__Vfunc_leading_zero32__3198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3198__count)));
                            vlSelf->__Vfunc_leading_zero32__3198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3198__count)));
                            vlSelf->__Vfunc_leading_zero32__3198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3198__count)));
                            vlSelf->__Vfunc_leading_zero32__3198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3210__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3210__part 
                            = vlSelf->__Vfunc_leading_zero32__3210__value;
                        vlSelf->__Vfunc_leading_zero32__3210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3210__count)));
                            vlSelf->__Vfunc_leading_zero32__3210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3210__count)));
                            vlSelf->__Vfunc_leading_zero32__3210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3210__count)));
                            vlSelf->__Vfunc_leading_zero32__3210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3210__count)));
                            vlSelf->__Vfunc_leading_zero32__3210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3222__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3222__part 
                            = vlSelf->__Vfunc_leading_zero32__3222__value;
                        vlSelf->__Vfunc_leading_zero32__3222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3222__count)));
                            vlSelf->__Vfunc_leading_zero32__3222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3222__count)));
                            vlSelf->__Vfunc_leading_zero32__3222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3222__count)));
                            vlSelf->__Vfunc_leading_zero32__3222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3222__count)));
                            vlSelf->__Vfunc_leading_zero32__3222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3234__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3234__part 
                            = vlSelf->__Vfunc_leading_zero32__3234__value;
                        vlSelf->__Vfunc_leading_zero32__3234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3234__count)));
                            vlSelf->__Vfunc_leading_zero32__3234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3234__count)));
                            vlSelf->__Vfunc_leading_zero32__3234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3234__count)));
                            vlSelf->__Vfunc_leading_zero32__3234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3234__count)));
                            vlSelf->__Vfunc_leading_zero32__3234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3246__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3246__part 
                            = vlSelf->__Vfunc_leading_zero32__3246__value;
                        vlSelf->__Vfunc_leading_zero32__3246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3246__count)));
                            vlSelf->__Vfunc_leading_zero32__3246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3246__count)));
                            vlSelf->__Vfunc_leading_zero32__3246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3246__count)));
                            vlSelf->__Vfunc_leading_zero32__3246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3246__count)));
                            vlSelf->__Vfunc_leading_zero32__3246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3258__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3258__part 
                            = vlSelf->__Vfunc_leading_zero32__3258__value;
                        vlSelf->__Vfunc_leading_zero32__3258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3258__count)));
                            vlSelf->__Vfunc_leading_zero32__3258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3258__count)));
                            vlSelf->__Vfunc_leading_zero32__3258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3258__count)));
                            vlSelf->__Vfunc_leading_zero32__3258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3258__count)));
                            vlSelf->__Vfunc_leading_zero32__3258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3270__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3270__part 
                            = vlSelf->__Vfunc_leading_zero32__3270__value;
                        vlSelf->__Vfunc_leading_zero32__3270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3270__count)));
                            vlSelf->__Vfunc_leading_zero32__3270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3270__count)));
                            vlSelf->__Vfunc_leading_zero32__3270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3270__count)));
                            vlSelf->__Vfunc_leading_zero32__3270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3270__count)));
                            vlSelf->__Vfunc_leading_zero32__3270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3282__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3282__part 
                            = vlSelf->__Vfunc_leading_zero32__3282__value;
                        vlSelf->__Vfunc_leading_zero32__3282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3282__count)));
                            vlSelf->__Vfunc_leading_zero32__3282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3282__count)));
                            vlSelf->__Vfunc_leading_zero32__3282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3282__count)));
                            vlSelf->__Vfunc_leading_zero32__3282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3282__count)));
                            vlSelf->__Vfunc_leading_zero32__3282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3294__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3294__part 
                            = vlSelf->__Vfunc_leading_zero32__3294__value;
                        vlSelf->__Vfunc_leading_zero32__3294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3294__count)));
                            vlSelf->__Vfunc_leading_zero32__3294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3294__count)));
                            vlSelf->__Vfunc_leading_zero32__3294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3294__count)));
                            vlSelf->__Vfunc_leading_zero32__3294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3294__count)));
                            vlSelf->__Vfunc_leading_zero32__3294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3306__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3306__part 
                            = vlSelf->__Vfunc_leading_zero32__3306__value;
                        vlSelf->__Vfunc_leading_zero32__3306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3306__count)));
                            vlSelf->__Vfunc_leading_zero32__3306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3306__count)));
                            vlSelf->__Vfunc_leading_zero32__3306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3306__count)));
                            vlSelf->__Vfunc_leading_zero32__3306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3306__count)));
                            vlSelf->__Vfunc_leading_zero32__3306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3318__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3318__part 
                            = vlSelf->__Vfunc_leading_zero32__3318__value;
                        vlSelf->__Vfunc_leading_zero32__3318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3318__count)));
                            vlSelf->__Vfunc_leading_zero32__3318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3318__count)));
                            vlSelf->__Vfunc_leading_zero32__3318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3318__count)));
                            vlSelf->__Vfunc_leading_zero32__3318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3318__count)));
                            vlSelf->__Vfunc_leading_zero32__3318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3330__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3330__part 
                            = vlSelf->__Vfunc_leading_zero32__3330__value;
                        vlSelf->__Vfunc_leading_zero32__3330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3330__count)));
                            vlSelf->__Vfunc_leading_zero32__3330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3330__count)));
                            vlSelf->__Vfunc_leading_zero32__3330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3330__count)));
                            vlSelf->__Vfunc_leading_zero32__3330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3330__count)));
                            vlSelf->__Vfunc_leading_zero32__3330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3342__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3342__part 
                            = vlSelf->__Vfunc_leading_zero32__3342__value;
                        vlSelf->__Vfunc_leading_zero32__3342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3342__count)));
                            vlSelf->__Vfunc_leading_zero32__3342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3342__count)));
                            vlSelf->__Vfunc_leading_zero32__3342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3342__count)));
                            vlSelf->__Vfunc_leading_zero32__3342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3342__count)));
                            vlSelf->__Vfunc_leading_zero32__3342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3354__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3354__part 
                            = vlSelf->__Vfunc_leading_zero32__3354__value;
                        vlSelf->__Vfunc_leading_zero32__3354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3354__count)));
                            vlSelf->__Vfunc_leading_zero32__3354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3354__count)));
                            vlSelf->__Vfunc_leading_zero32__3354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3354__count)));
                            vlSelf->__Vfunc_leading_zero32__3354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3354__count)));
                            vlSelf->__Vfunc_leading_zero32__3354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3366__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3366__part 
                            = vlSelf->__Vfunc_leading_zero32__3366__value;
                        vlSelf->__Vfunc_leading_zero32__3366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3366__count)));
                            vlSelf->__Vfunc_leading_zero32__3366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3366__count)));
                            vlSelf->__Vfunc_leading_zero32__3366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3366__count)));
                            vlSelf->__Vfunc_leading_zero32__3366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3366__count)));
                            vlSelf->__Vfunc_leading_zero32__3366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3378__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3378__part 
                            = vlSelf->__Vfunc_leading_zero32__3378__value;
                        vlSelf->__Vfunc_leading_zero32__3378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3378__count)));
                            vlSelf->__Vfunc_leading_zero32__3378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3378__count)));
                            vlSelf->__Vfunc_leading_zero32__3378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3378__count)));
                            vlSelf->__Vfunc_leading_zero32__3378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3378__count)));
                            vlSelf->__Vfunc_leading_zero32__3378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3390__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3390__part 
                            = vlSelf->__Vfunc_leading_zero32__3390__value;
                        vlSelf->__Vfunc_leading_zero32__3390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3390__count)));
                            vlSelf->__Vfunc_leading_zero32__3390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3390__count)));
                            vlSelf->__Vfunc_leading_zero32__3390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3390__count)));
                            vlSelf->__Vfunc_leading_zero32__3390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3390__count)));
                            vlSelf->__Vfunc_leading_zero32__3390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3402__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3402__part 
                            = vlSelf->__Vfunc_leading_zero32__3402__value;
                        vlSelf->__Vfunc_leading_zero32__3402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3402__count)));
                            vlSelf->__Vfunc_leading_zero32__3402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3402__count)));
                            vlSelf->__Vfunc_leading_zero32__3402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3402__count)));
                            vlSelf->__Vfunc_leading_zero32__3402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3402__count)));
                            vlSelf->__Vfunc_leading_zero32__3402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3414__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3414__part 
                            = vlSelf->__Vfunc_leading_zero32__3414__value;
                        vlSelf->__Vfunc_leading_zero32__3414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3414__count)));
                            vlSelf->__Vfunc_leading_zero32__3414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3414__count)));
                            vlSelf->__Vfunc_leading_zero32__3414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3414__count)));
                            vlSelf->__Vfunc_leading_zero32__3414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3414__count)));
                            vlSelf->__Vfunc_leading_zero32__3414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3426__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3426__part 
                            = vlSelf->__Vfunc_leading_zero32__3426__value;
                        vlSelf->__Vfunc_leading_zero32__3426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3426__count)));
                            vlSelf->__Vfunc_leading_zero32__3426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3426__count)));
                            vlSelf->__Vfunc_leading_zero32__3426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3426__count)));
                            vlSelf->__Vfunc_leading_zero32__3426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3426__count)));
                            vlSelf->__Vfunc_leading_zero32__3426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3438__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3438__part 
                            = vlSelf->__Vfunc_leading_zero32__3438__value;
                        vlSelf->__Vfunc_leading_zero32__3438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3438__count)));
                            vlSelf->__Vfunc_leading_zero32__3438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3438__count)));
                            vlSelf->__Vfunc_leading_zero32__3438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3438__count)));
                            vlSelf->__Vfunc_leading_zero32__3438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3438__count)));
                            vlSelf->__Vfunc_leading_zero32__3438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3450__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3450__part 
                            = vlSelf->__Vfunc_leading_zero32__3450__value;
                        vlSelf->__Vfunc_leading_zero32__3450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3450__count)));
                            vlSelf->__Vfunc_leading_zero32__3450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3450__count)));
                            vlSelf->__Vfunc_leading_zero32__3450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3450__count)));
                            vlSelf->__Vfunc_leading_zero32__3450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3450__count)));
                            vlSelf->__Vfunc_leading_zero32__3450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3462__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3462__part 
                            = vlSelf->__Vfunc_leading_zero32__3462__value;
                        vlSelf->__Vfunc_leading_zero32__3462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3462__count)));
                            vlSelf->__Vfunc_leading_zero32__3462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3462__count)));
                            vlSelf->__Vfunc_leading_zero32__3462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3462__count)));
                            vlSelf->__Vfunc_leading_zero32__3462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3462__count)));
                            vlSelf->__Vfunc_leading_zero32__3462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3474__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3474__part 
                            = vlSelf->__Vfunc_leading_zero32__3474__value;
                        vlSelf->__Vfunc_leading_zero32__3474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3474__count)));
                            vlSelf->__Vfunc_leading_zero32__3474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3474__count)));
                            vlSelf->__Vfunc_leading_zero32__3474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3474__count)));
                            vlSelf->__Vfunc_leading_zero32__3474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3474__count)));
                            vlSelf->__Vfunc_leading_zero32__3474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3486__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3486__part 
                            = vlSelf->__Vfunc_leading_zero32__3486__value;
                        vlSelf->__Vfunc_leading_zero32__3486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3486__count)));
                            vlSelf->__Vfunc_leading_zero32__3486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3486__count)));
                            vlSelf->__Vfunc_leading_zero32__3486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3486__count)));
                            vlSelf->__Vfunc_leading_zero32__3486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3486__count)));
                            vlSelf->__Vfunc_leading_zero32__3486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3498__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3498__part 
                            = vlSelf->__Vfunc_leading_zero32__3498__value;
                        vlSelf->__Vfunc_leading_zero32__3498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3498__count)));
                            vlSelf->__Vfunc_leading_zero32__3498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3498__count)));
                            vlSelf->__Vfunc_leading_zero32__3498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3498__count)));
                            vlSelf->__Vfunc_leading_zero32__3498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3498__count)));
                            vlSelf->__Vfunc_leading_zero32__3498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3510__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3510__part 
                            = vlSelf->__Vfunc_leading_zero32__3510__value;
                        vlSelf->__Vfunc_leading_zero32__3510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3510__count)));
                            vlSelf->__Vfunc_leading_zero32__3510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3510__count)));
                            vlSelf->__Vfunc_leading_zero32__3510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3510__count)));
                            vlSelf->__Vfunc_leading_zero32__3510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3510__count)));
                            vlSelf->__Vfunc_leading_zero32__3510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3522__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3522__part 
                            = vlSelf->__Vfunc_leading_zero32__3522__value;
                        vlSelf->__Vfunc_leading_zero32__3522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3522__count)));
                            vlSelf->__Vfunc_leading_zero32__3522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3522__count)));
                            vlSelf->__Vfunc_leading_zero32__3522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3522__count)));
                            vlSelf->__Vfunc_leading_zero32__3522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3522__count)));
                            vlSelf->__Vfunc_leading_zero32__3522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3534__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3534__part 
                            = vlSelf->__Vfunc_leading_zero32__3534__value;
                        vlSelf->__Vfunc_leading_zero32__3534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3534__count)));
                            vlSelf->__Vfunc_leading_zero32__3534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3534__count)));
                            vlSelf->__Vfunc_leading_zero32__3534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3534__count)));
                            vlSelf->__Vfunc_leading_zero32__3534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3534__count)));
                            vlSelf->__Vfunc_leading_zero32__3534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3546__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3546__part 
                            = vlSelf->__Vfunc_leading_zero32__3546__value;
                        vlSelf->__Vfunc_leading_zero32__3546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3546__count)));
                            vlSelf->__Vfunc_leading_zero32__3546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3546__count)));
                            vlSelf->__Vfunc_leading_zero32__3546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3546__count)));
                            vlSelf->__Vfunc_leading_zero32__3546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3546__count)));
                            vlSelf->__Vfunc_leading_zero32__3546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3558__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3558__part 
                            = vlSelf->__Vfunc_leading_zero32__3558__value;
                        vlSelf->__Vfunc_leading_zero32__3558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3558__count)));
                            vlSelf->__Vfunc_leading_zero32__3558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3558__count)));
                            vlSelf->__Vfunc_leading_zero32__3558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3558__count)));
                            vlSelf->__Vfunc_leading_zero32__3558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3558__count)));
                            vlSelf->__Vfunc_leading_zero32__3558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3570__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3570__part 
                            = vlSelf->__Vfunc_leading_zero32__3570__value;
                        vlSelf->__Vfunc_leading_zero32__3570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3582__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3582__part 
                            = vlSelf->__Vfunc_leading_zero32__3582__value;
                        vlSelf->__Vfunc_leading_zero32__3582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3594__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3594__part 
                            = vlSelf->__Vfunc_leading_zero32__3594__value;
                        vlSelf->__Vfunc_leading_zero32__3594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3606__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3606__part 
                            = vlSelf->__Vfunc_leading_zero32__3606__value;
                        vlSelf->__Vfunc_leading_zero32__3606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3618__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3618__part 
                            = vlSelf->__Vfunc_leading_zero32__3618__value;
                        vlSelf->__Vfunc_leading_zero32__3618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3630__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3630__part 
                            = vlSelf->__Vfunc_leading_zero32__3630__value;
                        vlSelf->__Vfunc_leading_zero32__3630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3642__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3642__part 
                            = vlSelf->__Vfunc_leading_zero32__3642__value;
                        vlSelf->__Vfunc_leading_zero32__3642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3654__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3654__part 
                            = vlSelf->__Vfunc_leading_zero32__3654__value;
                        vlSelf->__Vfunc_leading_zero32__3654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3666__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3666__part 
                            = vlSelf->__Vfunc_leading_zero32__3666__value;
                        vlSelf->__Vfunc_leading_zero32__3666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3678__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3678__part 
                            = vlSelf->__Vfunc_leading_zero32__3678__value;
                        vlSelf->__Vfunc_leading_zero32__3678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3690__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3690__part 
                            = vlSelf->__Vfunc_leading_zero32__3690__value;
                        vlSelf->__Vfunc_leading_zero32__3690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3702__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3702__part 
                            = vlSelf->__Vfunc_leading_zero32__3702__value;
                        vlSelf->__Vfunc_leading_zero32__3702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3714__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3714__part 
                            = vlSelf->__Vfunc_leading_zero32__3714__value;
                        vlSelf->__Vfunc_leading_zero32__3714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3726__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3726__part 
                            = vlSelf->__Vfunc_leading_zero32__3726__value;
                        vlSelf->__Vfunc_leading_zero32__3726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3738__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3738__part 
                            = vlSelf->__Vfunc_leading_zero32__3738__value;
                        vlSelf->__Vfunc_leading_zero32__3738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3750__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3750__part 
                            = vlSelf->__Vfunc_leading_zero32__3750__value;
                        vlSelf->__Vfunc_leading_zero32__3750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3762__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3762__part 
                            = vlSelf->__Vfunc_leading_zero32__3762__value;
                        vlSelf->__Vfunc_leading_zero32__3762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3774__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3774__part 
                            = vlSelf->__Vfunc_leading_zero32__3774__value;
                        vlSelf->__Vfunc_leading_zero32__3774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3786__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3786__part 
                            = vlSelf->__Vfunc_leading_zero32__3786__value;
                        vlSelf->__Vfunc_leading_zero32__3786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3798__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3798__part 
                            = vlSelf->__Vfunc_leading_zero32__3798__value;
                        vlSelf->__Vfunc_leading_zero32__3798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3810__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3810__part 
                            = vlSelf->__Vfunc_leading_zero32__3810__value;
                        vlSelf->__Vfunc_leading_zero32__3810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3810__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3822__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3822__part 
                            = vlSelf->__Vfunc_leading_zero32__3822__value;
                        vlSelf->__Vfunc_leading_zero32__3822__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3822__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3822__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3822__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3822__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3822__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3834__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3834__part 
                            = vlSelf->__Vfunc_leading_zero32__3834__value;
                        vlSelf->__Vfunc_leading_zero32__3834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3834__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3846__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3846__part 
                            = vlSelf->__Vfunc_leading_zero32__3846__value;
                        vlSelf->__Vfunc_leading_zero32__3846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3846__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3858__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3858__part 
                            = vlSelf->__Vfunc_leading_zero32__3858__value;
                        vlSelf->__Vfunc_leading_zero32__3858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3858__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3870__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3870__part 
                            = vlSelf->__Vfunc_leading_zero32__3870__value;
                        vlSelf->__Vfunc_leading_zero32__3870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3870__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3882__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3882__part 
                            = vlSelf->__Vfunc_leading_zero32__3882__value;
                        vlSelf->__Vfunc_leading_zero32__3882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3882__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3894__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3894__part 
                            = vlSelf->__Vfunc_leading_zero32__3894__value;
                        vlSelf->__Vfunc_leading_zero32__3894__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3894__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3894__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3894__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3894__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3894__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3906__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3906__part 
                            = vlSelf->__Vfunc_leading_zero32__3906__value;
                        vlSelf->__Vfunc_leading_zero32__3906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3918__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3918__part 
                            = vlSelf->__Vfunc_leading_zero32__3918__value;
                        vlSelf->__Vfunc_leading_zero32__3918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3930__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3930__part 
                            = vlSelf->__Vfunc_leading_zero32__3930__value;
                        vlSelf->__Vfunc_leading_zero32__3930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3930__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3942__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3942__part 
                            = vlSelf->__Vfunc_leading_zero32__3942__value;
                        vlSelf->__Vfunc_leading_zero32__3942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3954__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3954__part 
                            = vlSelf->__Vfunc_leading_zero32__3954__value;
                        vlSelf->__Vfunc_leading_zero32__3954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3966__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3966__part 
                            = vlSelf->__Vfunc_leading_zero32__3966__value;
                        vlSelf->__Vfunc_leading_zero32__3966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3966__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3978__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3978__part 
                            = vlSelf->__Vfunc_leading_zero32__3978__value;
                        vlSelf->__Vfunc_leading_zero32__3978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3990__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3990__part 
                            = vlSelf->__Vfunc_leading_zero32__3990__value;
                        vlSelf->__Vfunc_leading_zero32__3990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3990__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4002__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4002__part 
                            = vlSelf->__Vfunc_leading_zero32__4002__value;
                        vlSelf->__Vfunc_leading_zero32__4002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4002__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4014__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4014__part 
                            = vlSelf->__Vfunc_leading_zero32__4014__value;
                        vlSelf->__Vfunc_leading_zero32__4014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4026__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4026__part 
                            = vlSelf->__Vfunc_leading_zero32__4026__value;
                        vlSelf->__Vfunc_leading_zero32__4026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4026__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4038__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4038__part 
                            = vlSelf->__Vfunc_leading_zero32__4038__value;
                        vlSelf->__Vfunc_leading_zero32__4038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4038__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4050__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4050__part 
                            = vlSelf->__Vfunc_leading_zero32__4050__value;
                        vlSelf->__Vfunc_leading_zero32__4050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4062__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4062__part 
                            = vlSelf->__Vfunc_leading_zero32__4062__value;
                        vlSelf->__Vfunc_leading_zero32__4062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4062__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4074__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4074__part 
                            = vlSelf->__Vfunc_leading_zero32__4074__value;
                        vlSelf->__Vfunc_leading_zero32__4074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4074__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4086__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4086__part 
                            = vlSelf->__Vfunc_leading_zero32__4086__value;
                        vlSelf->__Vfunc_leading_zero32__4086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4098__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4098__part 
                            = vlSelf->__Vfunc_leading_zero32__4098__value;
                        vlSelf->__Vfunc_leading_zero32__4098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4098__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4110__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4110__part 
                            = vlSelf->__Vfunc_leading_zero32__4110__value;
                        vlSelf->__Vfunc_leading_zero32__4110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4110__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4122__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4122__part 
                            = vlSelf->__Vfunc_leading_zero32__4122__value;
                        vlSelf->__Vfunc_leading_zero32__4122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4134__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4134__part 
                            = vlSelf->__Vfunc_leading_zero32__4134__value;
                        vlSelf->__Vfunc_leading_zero32__4134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4134__Vfuncout)) 
                             - (IData)(8U))));
}
