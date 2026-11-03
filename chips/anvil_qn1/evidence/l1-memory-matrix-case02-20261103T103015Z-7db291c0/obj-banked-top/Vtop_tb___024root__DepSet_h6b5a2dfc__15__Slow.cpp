// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__16(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__16\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2017__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2017__part 
                            = vlSelf->__Vfunc_leading_zero32__2017__value;
                        vlSelf->__Vfunc_leading_zero32__2017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2017__count)));
                            vlSelf->__Vfunc_leading_zero32__2017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2017__count)));
                            vlSelf->__Vfunc_leading_zero32__2017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2017__count)));
                            vlSelf->__Vfunc_leading_zero32__2017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2017__count)));
                            vlSelf->__Vfunc_leading_zero32__2017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2029__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2029__part 
                            = vlSelf->__Vfunc_leading_zero32__2029__value;
                        vlSelf->__Vfunc_leading_zero32__2029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2029__count)));
                            vlSelf->__Vfunc_leading_zero32__2029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2029__count)));
                            vlSelf->__Vfunc_leading_zero32__2029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2029__count)));
                            vlSelf->__Vfunc_leading_zero32__2029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2029__count)));
                            vlSelf->__Vfunc_leading_zero32__2029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2029__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2041__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2041__part 
                            = vlSelf->__Vfunc_leading_zero32__2041__value;
                        vlSelf->__Vfunc_leading_zero32__2041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2041__count)));
                            vlSelf->__Vfunc_leading_zero32__2041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2041__count)));
                            vlSelf->__Vfunc_leading_zero32__2041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2041__count)));
                            vlSelf->__Vfunc_leading_zero32__2041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2041__count)));
                            vlSelf->__Vfunc_leading_zero32__2041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2053__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2053__part 
                            = vlSelf->__Vfunc_leading_zero32__2053__value;
                        vlSelf->__Vfunc_leading_zero32__2053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2053__count)));
                            vlSelf->__Vfunc_leading_zero32__2053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2053__count)));
                            vlSelf->__Vfunc_leading_zero32__2053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2053__count)));
                            vlSelf->__Vfunc_leading_zero32__2053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2053__count)));
                            vlSelf->__Vfunc_leading_zero32__2053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2065__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2065__part 
                            = vlSelf->__Vfunc_leading_zero32__2065__value;
                        vlSelf->__Vfunc_leading_zero32__2065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2065__count)));
                            vlSelf->__Vfunc_leading_zero32__2065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2065__count)));
                            vlSelf->__Vfunc_leading_zero32__2065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2065__count)));
                            vlSelf->__Vfunc_leading_zero32__2065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2065__count)));
                            vlSelf->__Vfunc_leading_zero32__2065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2065__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2077__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2077__part 
                            = vlSelf->__Vfunc_leading_zero32__2077__value;
                        vlSelf->__Vfunc_leading_zero32__2077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2077__count)));
                            vlSelf->__Vfunc_leading_zero32__2077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2077__count)));
                            vlSelf->__Vfunc_leading_zero32__2077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2077__count)));
                            vlSelf->__Vfunc_leading_zero32__2077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2077__count)));
                            vlSelf->__Vfunc_leading_zero32__2077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2089__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2089__part 
                            = vlSelf->__Vfunc_leading_zero32__2089__value;
                        vlSelf->__Vfunc_leading_zero32__2089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2089__count)));
                            vlSelf->__Vfunc_leading_zero32__2089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2089__count)));
                            vlSelf->__Vfunc_leading_zero32__2089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2089__count)));
                            vlSelf->__Vfunc_leading_zero32__2089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2089__count)));
                            vlSelf->__Vfunc_leading_zero32__2089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2101__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2101__part 
                            = vlSelf->__Vfunc_leading_zero32__2101__value;
                        vlSelf->__Vfunc_leading_zero32__2101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2101__count)));
                            vlSelf->__Vfunc_leading_zero32__2101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2101__count)));
                            vlSelf->__Vfunc_leading_zero32__2101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2101__count)));
                            vlSelf->__Vfunc_leading_zero32__2101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2101__count)));
                            vlSelf->__Vfunc_leading_zero32__2101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2113__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2113__part 
                            = vlSelf->__Vfunc_leading_zero32__2113__value;
                        vlSelf->__Vfunc_leading_zero32__2113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2113__count)));
                            vlSelf->__Vfunc_leading_zero32__2113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2113__count)));
                            vlSelf->__Vfunc_leading_zero32__2113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2113__count)));
                            vlSelf->__Vfunc_leading_zero32__2113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2113__count)));
                            vlSelf->__Vfunc_leading_zero32__2113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2125__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2125__part 
                            = vlSelf->__Vfunc_leading_zero32__2125__value;
                        vlSelf->__Vfunc_leading_zero32__2125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2125__count)));
                            vlSelf->__Vfunc_leading_zero32__2125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2125__count)));
                            vlSelf->__Vfunc_leading_zero32__2125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2125__count)));
                            vlSelf->__Vfunc_leading_zero32__2125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2125__count)));
                            vlSelf->__Vfunc_leading_zero32__2125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2137__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2137__part 
                            = vlSelf->__Vfunc_leading_zero32__2137__value;
                        vlSelf->__Vfunc_leading_zero32__2137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2137__count)));
                            vlSelf->__Vfunc_leading_zero32__2137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2137__count)));
                            vlSelf->__Vfunc_leading_zero32__2137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2137__count)));
                            vlSelf->__Vfunc_leading_zero32__2137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2137__count)));
                            vlSelf->__Vfunc_leading_zero32__2137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2149__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2149__part 
                            = vlSelf->__Vfunc_leading_zero32__2149__value;
                        vlSelf->__Vfunc_leading_zero32__2149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2149__count)));
                            vlSelf->__Vfunc_leading_zero32__2149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2149__count)));
                            vlSelf->__Vfunc_leading_zero32__2149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2149__count)));
                            vlSelf->__Vfunc_leading_zero32__2149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2149__count)));
                            vlSelf->__Vfunc_leading_zero32__2149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2161__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2161__part 
                            = vlSelf->__Vfunc_leading_zero32__2161__value;
                        vlSelf->__Vfunc_leading_zero32__2161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2161__count)));
                            vlSelf->__Vfunc_leading_zero32__2161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2161__count)));
                            vlSelf->__Vfunc_leading_zero32__2161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2161__count)));
                            vlSelf->__Vfunc_leading_zero32__2161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2161__count)));
                            vlSelf->__Vfunc_leading_zero32__2161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2173__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2173__part 
                            = vlSelf->__Vfunc_leading_zero32__2173__value;
                        vlSelf->__Vfunc_leading_zero32__2173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2173__count)));
                            vlSelf->__Vfunc_leading_zero32__2173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2173__count)));
                            vlSelf->__Vfunc_leading_zero32__2173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2173__count)));
                            vlSelf->__Vfunc_leading_zero32__2173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2173__count)));
                            vlSelf->__Vfunc_leading_zero32__2173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2173__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2185__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2185__part 
                            = vlSelf->__Vfunc_leading_zero32__2185__value;
                        vlSelf->__Vfunc_leading_zero32__2185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2185__count)));
                            vlSelf->__Vfunc_leading_zero32__2185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2185__count)));
                            vlSelf->__Vfunc_leading_zero32__2185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2185__count)));
                            vlSelf->__Vfunc_leading_zero32__2185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2185__count)));
                            vlSelf->__Vfunc_leading_zero32__2185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2197__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2197__part 
                            = vlSelf->__Vfunc_leading_zero32__2197__value;
                        vlSelf->__Vfunc_leading_zero32__2197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2197__count)));
                            vlSelf->__Vfunc_leading_zero32__2197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2197__count)));
                            vlSelf->__Vfunc_leading_zero32__2197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2197__count)));
                            vlSelf->__Vfunc_leading_zero32__2197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2197__count)));
                            vlSelf->__Vfunc_leading_zero32__2197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2209__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2209__part 
                            = vlSelf->__Vfunc_leading_zero32__2209__value;
                        vlSelf->__Vfunc_leading_zero32__2209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2209__count)));
                            vlSelf->__Vfunc_leading_zero32__2209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2209__count)));
                            vlSelf->__Vfunc_leading_zero32__2209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2209__count)));
                            vlSelf->__Vfunc_leading_zero32__2209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2209__count)));
                            vlSelf->__Vfunc_leading_zero32__2209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2209__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2221__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2221__part 
                            = vlSelf->__Vfunc_leading_zero32__2221__value;
                        vlSelf->__Vfunc_leading_zero32__2221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2221__count)));
                            vlSelf->__Vfunc_leading_zero32__2221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2221__count)));
                            vlSelf->__Vfunc_leading_zero32__2221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2221__count)));
                            vlSelf->__Vfunc_leading_zero32__2221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2221__count)));
                            vlSelf->__Vfunc_leading_zero32__2221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2233__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2233__part 
                            = vlSelf->__Vfunc_leading_zero32__2233__value;
                        vlSelf->__Vfunc_leading_zero32__2233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2233__count)));
                            vlSelf->__Vfunc_leading_zero32__2233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2233__count)));
                            vlSelf->__Vfunc_leading_zero32__2233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2233__count)));
                            vlSelf->__Vfunc_leading_zero32__2233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2233__count)));
                            vlSelf->__Vfunc_leading_zero32__2233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2245__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2245__part 
                            = vlSelf->__Vfunc_leading_zero32__2245__value;
                        vlSelf->__Vfunc_leading_zero32__2245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2245__count)));
                            vlSelf->__Vfunc_leading_zero32__2245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2245__count)));
                            vlSelf->__Vfunc_leading_zero32__2245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2245__count)));
                            vlSelf->__Vfunc_leading_zero32__2245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2245__count)));
                            vlSelf->__Vfunc_leading_zero32__2245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2245__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2257__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2257__part 
                            = vlSelf->__Vfunc_leading_zero32__2257__value;
                        vlSelf->__Vfunc_leading_zero32__2257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2257__count)));
                            vlSelf->__Vfunc_leading_zero32__2257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2257__count)));
                            vlSelf->__Vfunc_leading_zero32__2257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2257__count)));
                            vlSelf->__Vfunc_leading_zero32__2257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2257__count)));
                            vlSelf->__Vfunc_leading_zero32__2257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2269__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2269__part 
                            = vlSelf->__Vfunc_leading_zero32__2269__value;
                        vlSelf->__Vfunc_leading_zero32__2269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2269__count)));
                            vlSelf->__Vfunc_leading_zero32__2269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2269__count)));
                            vlSelf->__Vfunc_leading_zero32__2269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2269__count)));
                            vlSelf->__Vfunc_leading_zero32__2269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2269__count)));
                            vlSelf->__Vfunc_leading_zero32__2269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2281__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2281__part 
                            = vlSelf->__Vfunc_leading_zero32__2281__value;
                        vlSelf->__Vfunc_leading_zero32__2281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2281__count)));
                            vlSelf->__Vfunc_leading_zero32__2281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2281__count)));
                            vlSelf->__Vfunc_leading_zero32__2281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2281__count)));
                            vlSelf->__Vfunc_leading_zero32__2281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2281__count)));
                            vlSelf->__Vfunc_leading_zero32__2281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2293__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2293__part 
                            = vlSelf->__Vfunc_leading_zero32__2293__value;
                        vlSelf->__Vfunc_leading_zero32__2293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2293__count)));
                            vlSelf->__Vfunc_leading_zero32__2293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2293__count)));
                            vlSelf->__Vfunc_leading_zero32__2293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2293__count)));
                            vlSelf->__Vfunc_leading_zero32__2293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2293__count)));
                            vlSelf->__Vfunc_leading_zero32__2293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2305__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2305__part 
                            = vlSelf->__Vfunc_leading_zero32__2305__value;
                        vlSelf->__Vfunc_leading_zero32__2305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2305__count)));
                            vlSelf->__Vfunc_leading_zero32__2305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2305__count)));
                            vlSelf->__Vfunc_leading_zero32__2305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2305__count)));
                            vlSelf->__Vfunc_leading_zero32__2305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2305__count)));
                            vlSelf->__Vfunc_leading_zero32__2305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2317__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2317__part 
                            = vlSelf->__Vfunc_leading_zero32__2317__value;
                        vlSelf->__Vfunc_leading_zero32__2317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2317__count)));
                            vlSelf->__Vfunc_leading_zero32__2317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2317__count)));
                            vlSelf->__Vfunc_leading_zero32__2317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2317__count)));
                            vlSelf->__Vfunc_leading_zero32__2317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2317__count)));
                            vlSelf->__Vfunc_leading_zero32__2317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2329__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2329__part 
                            = vlSelf->__Vfunc_leading_zero32__2329__value;
                        vlSelf->__Vfunc_leading_zero32__2329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2329__count)));
                            vlSelf->__Vfunc_leading_zero32__2329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2329__count)));
                            vlSelf->__Vfunc_leading_zero32__2329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2329__count)));
                            vlSelf->__Vfunc_leading_zero32__2329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2329__count)));
                            vlSelf->__Vfunc_leading_zero32__2329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2341__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2341__part 
                            = vlSelf->__Vfunc_leading_zero32__2341__value;
                        vlSelf->__Vfunc_leading_zero32__2341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2341__count)));
                            vlSelf->__Vfunc_leading_zero32__2341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2341__count)));
                            vlSelf->__Vfunc_leading_zero32__2341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2341__count)));
                            vlSelf->__Vfunc_leading_zero32__2341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2341__count)));
                            vlSelf->__Vfunc_leading_zero32__2341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2353__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2353__part 
                            = vlSelf->__Vfunc_leading_zero32__2353__value;
                        vlSelf->__Vfunc_leading_zero32__2353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2353__count)));
                            vlSelf->__Vfunc_leading_zero32__2353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2353__count)));
                            vlSelf->__Vfunc_leading_zero32__2353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2353__count)));
                            vlSelf->__Vfunc_leading_zero32__2353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2353__count)));
                            vlSelf->__Vfunc_leading_zero32__2353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2353__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2365__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2365__part 
                            = vlSelf->__Vfunc_leading_zero32__2365__value;
                        vlSelf->__Vfunc_leading_zero32__2365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2365__count)));
                            vlSelf->__Vfunc_leading_zero32__2365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2365__count)));
                            vlSelf->__Vfunc_leading_zero32__2365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2365__count)));
                            vlSelf->__Vfunc_leading_zero32__2365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2365__count)));
                            vlSelf->__Vfunc_leading_zero32__2365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2377__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2377__part 
                            = vlSelf->__Vfunc_leading_zero32__2377__value;
                        vlSelf->__Vfunc_leading_zero32__2377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2377__count)));
                            vlSelf->__Vfunc_leading_zero32__2377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2377__count)));
                            vlSelf->__Vfunc_leading_zero32__2377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2377__count)));
                            vlSelf->__Vfunc_leading_zero32__2377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2377__count)));
                            vlSelf->__Vfunc_leading_zero32__2377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2389__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2389__part 
                            = vlSelf->__Vfunc_leading_zero32__2389__value;
                        vlSelf->__Vfunc_leading_zero32__2389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2389__count)));
                            vlSelf->__Vfunc_leading_zero32__2389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2389__count)));
                            vlSelf->__Vfunc_leading_zero32__2389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2389__count)));
                            vlSelf->__Vfunc_leading_zero32__2389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2389__count)));
                            vlSelf->__Vfunc_leading_zero32__2389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2389__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2401__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2401__part 
                            = vlSelf->__Vfunc_leading_zero32__2401__value;
                        vlSelf->__Vfunc_leading_zero32__2401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2401__count)));
                            vlSelf->__Vfunc_leading_zero32__2401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2401__count)));
                            vlSelf->__Vfunc_leading_zero32__2401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2401__count)));
                            vlSelf->__Vfunc_leading_zero32__2401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2401__count)));
                            vlSelf->__Vfunc_leading_zero32__2401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2413__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2413__part 
                            = vlSelf->__Vfunc_leading_zero32__2413__value;
                        vlSelf->__Vfunc_leading_zero32__2413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2413__count)));
                            vlSelf->__Vfunc_leading_zero32__2413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2413__count)));
                            vlSelf->__Vfunc_leading_zero32__2413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2413__count)));
                            vlSelf->__Vfunc_leading_zero32__2413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2413__count)));
                            vlSelf->__Vfunc_leading_zero32__2413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2425__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2425__part 
                            = vlSelf->__Vfunc_leading_zero32__2425__value;
                        vlSelf->__Vfunc_leading_zero32__2425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2425__count)));
                            vlSelf->__Vfunc_leading_zero32__2425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2425__count)));
                            vlSelf->__Vfunc_leading_zero32__2425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2425__count)));
                            vlSelf->__Vfunc_leading_zero32__2425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2425__count)));
                            vlSelf->__Vfunc_leading_zero32__2425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2425__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2437__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2437__part 
                            = vlSelf->__Vfunc_leading_zero32__2437__value;
                        vlSelf->__Vfunc_leading_zero32__2437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2437__count)));
                            vlSelf->__Vfunc_leading_zero32__2437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2437__count)));
                            vlSelf->__Vfunc_leading_zero32__2437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2437__count)));
                            vlSelf->__Vfunc_leading_zero32__2437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2437__count)));
                            vlSelf->__Vfunc_leading_zero32__2437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2449__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2449__part 
                            = vlSelf->__Vfunc_leading_zero32__2449__value;
                        vlSelf->__Vfunc_leading_zero32__2449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2449__count)));
                            vlSelf->__Vfunc_leading_zero32__2449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2449__count)));
                            vlSelf->__Vfunc_leading_zero32__2449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2449__count)));
                            vlSelf->__Vfunc_leading_zero32__2449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2449__count)));
                            vlSelf->__Vfunc_leading_zero32__2449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2461__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2461__part 
                            = vlSelf->__Vfunc_leading_zero32__2461__value;
                        vlSelf->__Vfunc_leading_zero32__2461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2461__count)));
                            vlSelf->__Vfunc_leading_zero32__2461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2461__count)));
                            vlSelf->__Vfunc_leading_zero32__2461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2461__count)));
                            vlSelf->__Vfunc_leading_zero32__2461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2461__count)));
                            vlSelf->__Vfunc_leading_zero32__2461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2461__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2473__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2473__part 
                            = vlSelf->__Vfunc_leading_zero32__2473__value;
                        vlSelf->__Vfunc_leading_zero32__2473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2473__count)));
                            vlSelf->__Vfunc_leading_zero32__2473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2473__count)));
                            vlSelf->__Vfunc_leading_zero32__2473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2473__count)));
                            vlSelf->__Vfunc_leading_zero32__2473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2473__count)));
                            vlSelf->__Vfunc_leading_zero32__2473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2485__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2485__part 
                            = vlSelf->__Vfunc_leading_zero32__2485__value;
                        vlSelf->__Vfunc_leading_zero32__2485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2485__count)));
                            vlSelf->__Vfunc_leading_zero32__2485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2485__count)));
                            vlSelf->__Vfunc_leading_zero32__2485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2485__count)));
                            vlSelf->__Vfunc_leading_zero32__2485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2485__count)));
                            vlSelf->__Vfunc_leading_zero32__2485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2497__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2497__part 
                            = vlSelf->__Vfunc_leading_zero32__2497__value;
                        vlSelf->__Vfunc_leading_zero32__2497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2497__count)));
                            vlSelf->__Vfunc_leading_zero32__2497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2497__count)));
                            vlSelf->__Vfunc_leading_zero32__2497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2497__count)));
                            vlSelf->__Vfunc_leading_zero32__2497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2497__count)));
                            vlSelf->__Vfunc_leading_zero32__2497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2497__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2509__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2509__part 
                            = vlSelf->__Vfunc_leading_zero32__2509__value;
                        vlSelf->__Vfunc_leading_zero32__2509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2509__count)));
                            vlSelf->__Vfunc_leading_zero32__2509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2509__count)));
                            vlSelf->__Vfunc_leading_zero32__2509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2509__count)));
                            vlSelf->__Vfunc_leading_zero32__2509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2509__count)));
                            vlSelf->__Vfunc_leading_zero32__2509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2521__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2521__part 
                            = vlSelf->__Vfunc_leading_zero32__2521__value;
                        vlSelf->__Vfunc_leading_zero32__2521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2521__count)));
                            vlSelf->__Vfunc_leading_zero32__2521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2521__count)));
                            vlSelf->__Vfunc_leading_zero32__2521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2521__count)));
                            vlSelf->__Vfunc_leading_zero32__2521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2521__count)));
                            vlSelf->__Vfunc_leading_zero32__2521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2533__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2533__part 
                            = vlSelf->__Vfunc_leading_zero32__2533__value;
                        vlSelf->__Vfunc_leading_zero32__2533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2533__count)));
                            vlSelf->__Vfunc_leading_zero32__2533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2533__count)));
                            vlSelf->__Vfunc_leading_zero32__2533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2533__count)));
                            vlSelf->__Vfunc_leading_zero32__2533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2533__count)));
                            vlSelf->__Vfunc_leading_zero32__2533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2533__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2545__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2545__part 
                            = vlSelf->__Vfunc_leading_zero32__2545__value;
                        vlSelf->__Vfunc_leading_zero32__2545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2545__count)));
                            vlSelf->__Vfunc_leading_zero32__2545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2545__count)));
                            vlSelf->__Vfunc_leading_zero32__2545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2545__count)));
                            vlSelf->__Vfunc_leading_zero32__2545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2545__count)));
                            vlSelf->__Vfunc_leading_zero32__2545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2557__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2557__part 
                            = vlSelf->__Vfunc_leading_zero32__2557__value;
                        vlSelf->__Vfunc_leading_zero32__2557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2557__count)));
                            vlSelf->__Vfunc_leading_zero32__2557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2557__count)));
                            vlSelf->__Vfunc_leading_zero32__2557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2557__count)));
                            vlSelf->__Vfunc_leading_zero32__2557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2557__count)));
                            vlSelf->__Vfunc_leading_zero32__2557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2569__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2569__part 
                            = vlSelf->__Vfunc_leading_zero32__2569__value;
                        vlSelf->__Vfunc_leading_zero32__2569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2569__count)));
                            vlSelf->__Vfunc_leading_zero32__2569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2569__count)));
                            vlSelf->__Vfunc_leading_zero32__2569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2569__count)));
                            vlSelf->__Vfunc_leading_zero32__2569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2569__count)));
                            vlSelf->__Vfunc_leading_zero32__2569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2569__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2581__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2581__part 
                            = vlSelf->__Vfunc_leading_zero32__2581__value;
                        vlSelf->__Vfunc_leading_zero32__2581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2581__count)));
                            vlSelf->__Vfunc_leading_zero32__2581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2581__count)));
                            vlSelf->__Vfunc_leading_zero32__2581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2581__count)));
                            vlSelf->__Vfunc_leading_zero32__2581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2581__count)));
                            vlSelf->__Vfunc_leading_zero32__2581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2581__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2593__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2593__part 
                            = vlSelf->__Vfunc_leading_zero32__2593__value;
                        vlSelf->__Vfunc_leading_zero32__2593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2593__count)));
                            vlSelf->__Vfunc_leading_zero32__2593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2593__count)));
                            vlSelf->__Vfunc_leading_zero32__2593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2593__count)));
                            vlSelf->__Vfunc_leading_zero32__2593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2593__count)));
                            vlSelf->__Vfunc_leading_zero32__2593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2593__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2605__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2605__part 
                            = vlSelf->__Vfunc_leading_zero32__2605__value;
                        vlSelf->__Vfunc_leading_zero32__2605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2605__count)));
                            vlSelf->__Vfunc_leading_zero32__2605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2605__count)));
                            vlSelf->__Vfunc_leading_zero32__2605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2605__count)));
                            vlSelf->__Vfunc_leading_zero32__2605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2605__count)));
                            vlSelf->__Vfunc_leading_zero32__2605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2605__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2617__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2617__part 
                            = vlSelf->__Vfunc_leading_zero32__2617__value;
                        vlSelf->__Vfunc_leading_zero32__2617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2617__count)));
                            vlSelf->__Vfunc_leading_zero32__2617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2617__count)));
                            vlSelf->__Vfunc_leading_zero32__2617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2617__count)));
                            vlSelf->__Vfunc_leading_zero32__2617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2617__count)));
                            vlSelf->__Vfunc_leading_zero32__2617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2617__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2629__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2629__part 
                            = vlSelf->__Vfunc_leading_zero32__2629__value;
                        vlSelf->__Vfunc_leading_zero32__2629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2629__count)));
                            vlSelf->__Vfunc_leading_zero32__2629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2629__count)));
                            vlSelf->__Vfunc_leading_zero32__2629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2629__count)));
                            vlSelf->__Vfunc_leading_zero32__2629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2629__count)));
                            vlSelf->__Vfunc_leading_zero32__2629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2629__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2641__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2641__part 
                            = vlSelf->__Vfunc_leading_zero32__2641__value;
                        vlSelf->__Vfunc_leading_zero32__2641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2641__count)));
                            vlSelf->__Vfunc_leading_zero32__2641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2641__count)));
                            vlSelf->__Vfunc_leading_zero32__2641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2641__count)));
                            vlSelf->__Vfunc_leading_zero32__2641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2641__count)));
                            vlSelf->__Vfunc_leading_zero32__2641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2641__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2653__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2653__part 
                            = vlSelf->__Vfunc_leading_zero32__2653__value;
                        vlSelf->__Vfunc_leading_zero32__2653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2653__count)));
                            vlSelf->__Vfunc_leading_zero32__2653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2653__count)));
                            vlSelf->__Vfunc_leading_zero32__2653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2653__count)));
                            vlSelf->__Vfunc_leading_zero32__2653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2653__count)));
                            vlSelf->__Vfunc_leading_zero32__2653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2653__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2665__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2665__part 
                            = vlSelf->__Vfunc_leading_zero32__2665__value;
                        vlSelf->__Vfunc_leading_zero32__2665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2665__count)));
                            vlSelf->__Vfunc_leading_zero32__2665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2665__count)));
                            vlSelf->__Vfunc_leading_zero32__2665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2665__count)));
                            vlSelf->__Vfunc_leading_zero32__2665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2665__count)));
                            vlSelf->__Vfunc_leading_zero32__2665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2665__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2677__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2677__part 
                            = vlSelf->__Vfunc_leading_zero32__2677__value;
                        vlSelf->__Vfunc_leading_zero32__2677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2677__count)));
                            vlSelf->__Vfunc_leading_zero32__2677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2677__count)));
                            vlSelf->__Vfunc_leading_zero32__2677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2677__count)));
                            vlSelf->__Vfunc_leading_zero32__2677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2677__count)));
                            vlSelf->__Vfunc_leading_zero32__2677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2677__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2689__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2689__part 
                            = vlSelf->__Vfunc_leading_zero32__2689__value;
                        vlSelf->__Vfunc_leading_zero32__2689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2689__count)));
                            vlSelf->__Vfunc_leading_zero32__2689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2689__count)));
                            vlSelf->__Vfunc_leading_zero32__2689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2689__count)));
                            vlSelf->__Vfunc_leading_zero32__2689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2689__count)));
                            vlSelf->__Vfunc_leading_zero32__2689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2689__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2701__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2701__part 
                            = vlSelf->__Vfunc_leading_zero32__2701__value;
                        vlSelf->__Vfunc_leading_zero32__2701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2701__count)));
                            vlSelf->__Vfunc_leading_zero32__2701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2701__count)));
                            vlSelf->__Vfunc_leading_zero32__2701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2701__count)));
                            vlSelf->__Vfunc_leading_zero32__2701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2701__count)));
                            vlSelf->__Vfunc_leading_zero32__2701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2701__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2713__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2713__part 
                            = vlSelf->__Vfunc_leading_zero32__2713__value;
                        vlSelf->__Vfunc_leading_zero32__2713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2713__count)));
                            vlSelf->__Vfunc_leading_zero32__2713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2713__count)));
                            vlSelf->__Vfunc_leading_zero32__2713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2713__count)));
                            vlSelf->__Vfunc_leading_zero32__2713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2713__count)));
                            vlSelf->__Vfunc_leading_zero32__2713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2713__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2725__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2725__part 
                            = vlSelf->__Vfunc_leading_zero32__2725__value;
                        vlSelf->__Vfunc_leading_zero32__2725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2725__count)));
                            vlSelf->__Vfunc_leading_zero32__2725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2725__count)));
                            vlSelf->__Vfunc_leading_zero32__2725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2725__count)));
                            vlSelf->__Vfunc_leading_zero32__2725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2725__count)));
                            vlSelf->__Vfunc_leading_zero32__2725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2725__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2737__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2737__part 
                            = vlSelf->__Vfunc_leading_zero32__2737__value;
                        vlSelf->__Vfunc_leading_zero32__2737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2737__count)));
                            vlSelf->__Vfunc_leading_zero32__2737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2737__count)));
                            vlSelf->__Vfunc_leading_zero32__2737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2737__count)));
                            vlSelf->__Vfunc_leading_zero32__2737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2737__count)));
                            vlSelf->__Vfunc_leading_zero32__2737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2737__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2749__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2749__part 
                            = vlSelf->__Vfunc_leading_zero32__2749__value;
                        vlSelf->__Vfunc_leading_zero32__2749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2749__count)));
                            vlSelf->__Vfunc_leading_zero32__2749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2749__count)));
                            vlSelf->__Vfunc_leading_zero32__2749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2749__count)));
                            vlSelf->__Vfunc_leading_zero32__2749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2749__count)));
                            vlSelf->__Vfunc_leading_zero32__2749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2749__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2761__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2761__part 
                            = vlSelf->__Vfunc_leading_zero32__2761__value;
                        vlSelf->__Vfunc_leading_zero32__2761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2761__count)));
                            vlSelf->__Vfunc_leading_zero32__2761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2761__count)));
                            vlSelf->__Vfunc_leading_zero32__2761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2761__count)));
                            vlSelf->__Vfunc_leading_zero32__2761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2761__count)));
                            vlSelf->__Vfunc_leading_zero32__2761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2761__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2773__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2773__part 
                            = vlSelf->__Vfunc_leading_zero32__2773__value;
                        vlSelf->__Vfunc_leading_zero32__2773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2773__count)));
                            vlSelf->__Vfunc_leading_zero32__2773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2773__count)));
                            vlSelf->__Vfunc_leading_zero32__2773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2773__count)));
                            vlSelf->__Vfunc_leading_zero32__2773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2773__count)));
                            vlSelf->__Vfunc_leading_zero32__2773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2773__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2785__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2785__part 
                            = vlSelf->__Vfunc_leading_zero32__2785__value;
                        vlSelf->__Vfunc_leading_zero32__2785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2785__count)));
                            vlSelf->__Vfunc_leading_zero32__2785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2785__count)));
                            vlSelf->__Vfunc_leading_zero32__2785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2785__count)));
                            vlSelf->__Vfunc_leading_zero32__2785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2785__count)));
                            vlSelf->__Vfunc_leading_zero32__2785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2785__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2797__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2797__part 
                            = vlSelf->__Vfunc_leading_zero32__2797__value;
                        vlSelf->__Vfunc_leading_zero32__2797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2797__count)));
                            vlSelf->__Vfunc_leading_zero32__2797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2797__count)));
                            vlSelf->__Vfunc_leading_zero32__2797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2797__count)));
                            vlSelf->__Vfunc_leading_zero32__2797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2797__count)));
                            vlSelf->__Vfunc_leading_zero32__2797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2797__Vfuncout)) 
                             - (IData)(8U))));
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
}
