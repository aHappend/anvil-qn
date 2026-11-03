// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__38(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2127__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2127__part 
                            = vlSelf->__Vfunc_leading_zero32__2127__value;
                        vlSelf->__Vfunc_leading_zero32__2127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2139__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2139__part 
                            = vlSelf->__Vfunc_leading_zero32__2139__value;
                        vlSelf->__Vfunc_leading_zero32__2139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2139__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2151__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2151__part 
                            = vlSelf->__Vfunc_leading_zero32__2151__value;
                        vlSelf->__Vfunc_leading_zero32__2151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2163__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2163__part 
                            = vlSelf->__Vfunc_leading_zero32__2163__value;
                        vlSelf->__Vfunc_leading_zero32__2163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2175__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2175__part 
                            = vlSelf->__Vfunc_leading_zero32__2175__value;
                        vlSelf->__Vfunc_leading_zero32__2175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2187__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2187__part 
                            = vlSelf->__Vfunc_leading_zero32__2187__value;
                        vlSelf->__Vfunc_leading_zero32__2187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2199__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2199__part 
                            = vlSelf->__Vfunc_leading_zero32__2199__value;
                        vlSelf->__Vfunc_leading_zero32__2199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2211__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2211__part 
                            = vlSelf->__Vfunc_leading_zero32__2211__value;
                        vlSelf->__Vfunc_leading_zero32__2211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2223__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2223__part 
                            = vlSelf->__Vfunc_leading_zero32__2223__value;
                        vlSelf->__Vfunc_leading_zero32__2223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2235__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2235__part 
                            = vlSelf->__Vfunc_leading_zero32__2235__value;
                        vlSelf->__Vfunc_leading_zero32__2235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2247__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2247__part 
                            = vlSelf->__Vfunc_leading_zero32__2247__value;
                        vlSelf->__Vfunc_leading_zero32__2247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2259__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2259__part 
                            = vlSelf->__Vfunc_leading_zero32__2259__value;
                        vlSelf->__Vfunc_leading_zero32__2259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2271__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2271__part 
                            = vlSelf->__Vfunc_leading_zero32__2271__value;
                        vlSelf->__Vfunc_leading_zero32__2271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2283__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2283__part 
                            = vlSelf->__Vfunc_leading_zero32__2283__value;
                        vlSelf->__Vfunc_leading_zero32__2283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2295__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2295__part 
                            = vlSelf->__Vfunc_leading_zero32__2295__value;
                        vlSelf->__Vfunc_leading_zero32__2295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2307__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2307__part 
                            = vlSelf->__Vfunc_leading_zero32__2307__value;
                        vlSelf->__Vfunc_leading_zero32__2307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2319__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2319__part 
                            = vlSelf->__Vfunc_leading_zero32__2319__value;
                        vlSelf->__Vfunc_leading_zero32__2319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2331__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2331__part 
                            = vlSelf->__Vfunc_leading_zero32__2331__value;
                        vlSelf->__Vfunc_leading_zero32__2331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2343__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2343__part 
                            = vlSelf->__Vfunc_leading_zero32__2343__value;
                        vlSelf->__Vfunc_leading_zero32__2343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2355__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2355__part 
                            = vlSelf->__Vfunc_leading_zero32__2355__value;
                        vlSelf->__Vfunc_leading_zero32__2355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2367__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2367__part 
                            = vlSelf->__Vfunc_leading_zero32__2367__value;
                        vlSelf->__Vfunc_leading_zero32__2367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2379__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2379__part 
                            = vlSelf->__Vfunc_leading_zero32__2379__value;
                        vlSelf->__Vfunc_leading_zero32__2379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2391__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2391__part 
                            = vlSelf->__Vfunc_leading_zero32__2391__value;
                        vlSelf->__Vfunc_leading_zero32__2391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2403__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2403__part 
                            = vlSelf->__Vfunc_leading_zero32__2403__value;
                        vlSelf->__Vfunc_leading_zero32__2403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2415__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2415__part 
                            = vlSelf->__Vfunc_leading_zero32__2415__value;
                        vlSelf->__Vfunc_leading_zero32__2415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2427__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2427__part 
                            = vlSelf->__Vfunc_leading_zero32__2427__value;
                        vlSelf->__Vfunc_leading_zero32__2427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2439__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2439__part 
                            = vlSelf->__Vfunc_leading_zero32__2439__value;
                        vlSelf->__Vfunc_leading_zero32__2439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2451__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2451__part 
                            = vlSelf->__Vfunc_leading_zero32__2451__value;
                        vlSelf->__Vfunc_leading_zero32__2451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2463__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2463__part 
                            = vlSelf->__Vfunc_leading_zero32__2463__value;
                        vlSelf->__Vfunc_leading_zero32__2463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2475__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2475__part 
                            = vlSelf->__Vfunc_leading_zero32__2475__value;
                        vlSelf->__Vfunc_leading_zero32__2475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2487__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2487__part 
                            = vlSelf->__Vfunc_leading_zero32__2487__value;
                        vlSelf->__Vfunc_leading_zero32__2487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2499__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2499__part 
                            = vlSelf->__Vfunc_leading_zero32__2499__value;
                        vlSelf->__Vfunc_leading_zero32__2499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2511__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2511__part 
                            = vlSelf->__Vfunc_leading_zero32__2511__value;
                        vlSelf->__Vfunc_leading_zero32__2511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2523__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2523__part 
                            = vlSelf->__Vfunc_leading_zero32__2523__value;
                        vlSelf->__Vfunc_leading_zero32__2523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2535__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2535__part 
                            = vlSelf->__Vfunc_leading_zero32__2535__value;
                        vlSelf->__Vfunc_leading_zero32__2535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2547__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2547__part 
                            = vlSelf->__Vfunc_leading_zero32__2547__value;
                        vlSelf->__Vfunc_leading_zero32__2547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2559__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2559__part 
                            = vlSelf->__Vfunc_leading_zero32__2559__value;
                        vlSelf->__Vfunc_leading_zero32__2559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2571__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2571__part 
                            = vlSelf->__Vfunc_leading_zero32__2571__value;
                        vlSelf->__Vfunc_leading_zero32__2571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2583__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2583__part 
                            = vlSelf->__Vfunc_leading_zero32__2583__value;
                        vlSelf->__Vfunc_leading_zero32__2583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2595__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2595__part 
                            = vlSelf->__Vfunc_leading_zero32__2595__value;
                        vlSelf->__Vfunc_leading_zero32__2595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2607__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2607__part 
                            = vlSelf->__Vfunc_leading_zero32__2607__value;
                        vlSelf->__Vfunc_leading_zero32__2607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2619__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2619__part 
                            = vlSelf->__Vfunc_leading_zero32__2619__value;
                        vlSelf->__Vfunc_leading_zero32__2619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2631__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2631__part 
                            = vlSelf->__Vfunc_leading_zero32__2631__value;
                        vlSelf->__Vfunc_leading_zero32__2631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2643__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2643__part 
                            = vlSelf->__Vfunc_leading_zero32__2643__value;
                        vlSelf->__Vfunc_leading_zero32__2643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2655__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2655__part 
                            = vlSelf->__Vfunc_leading_zero32__2655__value;
                        vlSelf->__Vfunc_leading_zero32__2655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2667__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2667__part 
                            = vlSelf->__Vfunc_leading_zero32__2667__value;
                        vlSelf->__Vfunc_leading_zero32__2667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2679__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2679__part 
                            = vlSelf->__Vfunc_leading_zero32__2679__value;
                        vlSelf->__Vfunc_leading_zero32__2679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2691__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2691__part 
                            = vlSelf->__Vfunc_leading_zero32__2691__value;
                        vlSelf->__Vfunc_leading_zero32__2691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2703__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2703__part 
                            = vlSelf->__Vfunc_leading_zero32__2703__value;
                        vlSelf->__Vfunc_leading_zero32__2703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2715__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2715__part 
                            = vlSelf->__Vfunc_leading_zero32__2715__value;
                        vlSelf->__Vfunc_leading_zero32__2715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2727__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2727__part 
                            = vlSelf->__Vfunc_leading_zero32__2727__value;
                        vlSelf->__Vfunc_leading_zero32__2727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2739__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2739__part 
                            = vlSelf->__Vfunc_leading_zero32__2739__value;
                        vlSelf->__Vfunc_leading_zero32__2739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2751__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2751__part 
                            = vlSelf->__Vfunc_leading_zero32__2751__value;
                        vlSelf->__Vfunc_leading_zero32__2751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2763__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2763__part 
                            = vlSelf->__Vfunc_leading_zero32__2763__value;
                        vlSelf->__Vfunc_leading_zero32__2763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2775__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2775__part 
                            = vlSelf->__Vfunc_leading_zero32__2775__value;
                        vlSelf->__Vfunc_leading_zero32__2775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2787__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2787__part 
                            = vlSelf->__Vfunc_leading_zero32__2787__value;
                        vlSelf->__Vfunc_leading_zero32__2787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2799__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2799__part 
                            = vlSelf->__Vfunc_leading_zero32__2799__value;
                        vlSelf->__Vfunc_leading_zero32__2799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2811__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2811__part 
                            = vlSelf->__Vfunc_leading_zero32__2811__value;
                        vlSelf->__Vfunc_leading_zero32__2811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2823__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2823__part 
                            = vlSelf->__Vfunc_leading_zero32__2823__value;
                        vlSelf->__Vfunc_leading_zero32__2823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2835__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2835__part 
                            = vlSelf->__Vfunc_leading_zero32__2835__value;
                        vlSelf->__Vfunc_leading_zero32__2835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2847__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2847__part 
                            = vlSelf->__Vfunc_leading_zero32__2847__value;
                        vlSelf->__Vfunc_leading_zero32__2847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2859__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2859__part 
                            = vlSelf->__Vfunc_leading_zero32__2859__value;
                        vlSelf->__Vfunc_leading_zero32__2859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2871__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2871__part 
                            = vlSelf->__Vfunc_leading_zero32__2871__value;
                        vlSelf->__Vfunc_leading_zero32__2871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2883__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2883__part 
                            = vlSelf->__Vfunc_leading_zero32__2883__value;
                        vlSelf->__Vfunc_leading_zero32__2883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2895__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2895__part 
                            = vlSelf->__Vfunc_leading_zero32__2895__value;
                        vlSelf->__Vfunc_leading_zero32__2895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2907__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2907__part 
                            = vlSelf->__Vfunc_leading_zero32__2907__value;
                        vlSelf->__Vfunc_leading_zero32__2907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2919__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2919__part 
                            = vlSelf->__Vfunc_leading_zero32__2919__value;
                        vlSelf->__Vfunc_leading_zero32__2919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2931__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2931__part 
                            = vlSelf->__Vfunc_leading_zero32__2931__value;
                        vlSelf->__Vfunc_leading_zero32__2931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2943__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2943__part 
                            = vlSelf->__Vfunc_leading_zero32__2943__value;
                        vlSelf->__Vfunc_leading_zero32__2943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2955__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2955__part 
                            = vlSelf->__Vfunc_leading_zero32__2955__value;
                        vlSelf->__Vfunc_leading_zero32__2955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2967__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2967__part 
                            = vlSelf->__Vfunc_leading_zero32__2967__value;
                        vlSelf->__Vfunc_leading_zero32__2967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2979__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2979__part 
                            = vlSelf->__Vfunc_leading_zero32__2979__value;
                        vlSelf->__Vfunc_leading_zero32__2979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2991__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2991__part 
                            = vlSelf->__Vfunc_leading_zero32__2991__value;
                        vlSelf->__Vfunc_leading_zero32__2991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3003__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3003__part 
                            = vlSelf->__Vfunc_leading_zero32__3003__value;
                        vlSelf->__Vfunc_leading_zero32__3003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3015__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3015__part 
                            = vlSelf->__Vfunc_leading_zero32__3015__value;
                        vlSelf->__Vfunc_leading_zero32__3015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3027__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3027__part 
                            = vlSelf->__Vfunc_leading_zero32__3027__value;
                        vlSelf->__Vfunc_leading_zero32__3027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3039__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3039__part 
                            = vlSelf->__Vfunc_leading_zero32__3039__value;
                        vlSelf->__Vfunc_leading_zero32__3039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3051__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3051__part 
                            = vlSelf->__Vfunc_leading_zero32__3051__value;
                        vlSelf->__Vfunc_leading_zero32__3051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3063__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3063__part 
                            = vlSelf->__Vfunc_leading_zero32__3063__value;
                        vlSelf->__Vfunc_leading_zero32__3063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3075__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3075__part 
                            = vlSelf->__Vfunc_leading_zero32__3075__value;
                        vlSelf->__Vfunc_leading_zero32__3075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3087__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3087__part 
                            = vlSelf->__Vfunc_leading_zero32__3087__value;
                        vlSelf->__Vfunc_leading_zero32__3087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3099__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3099__part 
                            = vlSelf->__Vfunc_leading_zero32__3099__value;
                        vlSelf->__Vfunc_leading_zero32__3099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3111__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3111__part 
                            = vlSelf->__Vfunc_leading_zero32__3111__value;
                        vlSelf->__Vfunc_leading_zero32__3111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3123__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3123__part 
                            = vlSelf->__Vfunc_leading_zero32__3123__value;
                        vlSelf->__Vfunc_leading_zero32__3123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3135__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3135__part 
                            = vlSelf->__Vfunc_leading_zero32__3135__value;
                        vlSelf->__Vfunc_leading_zero32__3135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3147__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3147__part 
                            = vlSelf->__Vfunc_leading_zero32__3147__value;
                        vlSelf->__Vfunc_leading_zero32__3147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3159__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3159__part 
                            = vlSelf->__Vfunc_leading_zero32__3159__value;
                        vlSelf->__Vfunc_leading_zero32__3159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3171__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3171__part 
                            = vlSelf->__Vfunc_leading_zero32__3171__value;
                        vlSelf->__Vfunc_leading_zero32__3171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3183__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3183__part 
                            = vlSelf->__Vfunc_leading_zero32__3183__value;
                        vlSelf->__Vfunc_leading_zero32__3183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3195__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3195__part 
                            = vlSelf->__Vfunc_leading_zero32__3195__value;
                        vlSelf->__Vfunc_leading_zero32__3195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3207__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3207__part 
                            = vlSelf->__Vfunc_leading_zero32__3207__value;
                        vlSelf->__Vfunc_leading_zero32__3207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3219__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3219__part 
                            = vlSelf->__Vfunc_leading_zero32__3219__value;
                        vlSelf->__Vfunc_leading_zero32__3219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3231__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3231__part 
                            = vlSelf->__Vfunc_leading_zero32__3231__value;
                        vlSelf->__Vfunc_leading_zero32__3231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3243__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3243__part 
                            = vlSelf->__Vfunc_leading_zero32__3243__value;
                        vlSelf->__Vfunc_leading_zero32__3243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3255__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3255__part 
                            = vlSelf->__Vfunc_leading_zero32__3255__value;
                        vlSelf->__Vfunc_leading_zero32__3255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3267__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3267__part 
                            = vlSelf->__Vfunc_leading_zero32__3267__value;
                        vlSelf->__Vfunc_leading_zero32__3267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3279__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3279__part 
                            = vlSelf->__Vfunc_leading_zero32__3279__value;
                        vlSelf->__Vfunc_leading_zero32__3279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3279__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3291__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3291__part 
                            = vlSelf->__Vfunc_leading_zero32__3291__value;
                        vlSelf->__Vfunc_leading_zero32__3291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3303__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3303__part 
                            = vlSelf->__Vfunc_leading_zero32__3303__value;
                        vlSelf->__Vfunc_leading_zero32__3303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3315__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3315__part 
                            = vlSelf->__Vfunc_leading_zero32__3315__value;
                        vlSelf->__Vfunc_leading_zero32__3315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3315__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3327__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3327__part 
                            = vlSelf->__Vfunc_leading_zero32__3327__value;
                        vlSelf->__Vfunc_leading_zero32__3327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3339__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3339__part 
                            = vlSelf->__Vfunc_leading_zero32__3339__value;
                        vlSelf->__Vfunc_leading_zero32__3339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3351__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3351__part 
                            = vlSelf->__Vfunc_leading_zero32__3351__value;
                        vlSelf->__Vfunc_leading_zero32__3351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3351__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3363__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3363__part 
                            = vlSelf->__Vfunc_leading_zero32__3363__value;
                        vlSelf->__Vfunc_leading_zero32__3363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3375__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3375__part 
                            = vlSelf->__Vfunc_leading_zero32__3375__value;
                        vlSelf->__Vfunc_leading_zero32__3375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3387__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3387__part 
                            = vlSelf->__Vfunc_leading_zero32__3387__value;
                        vlSelf->__Vfunc_leading_zero32__3387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3387__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3399__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3399__part 
                            = vlSelf->__Vfunc_leading_zero32__3399__value;
                        vlSelf->__Vfunc_leading_zero32__3399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3411__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3411__part 
                            = vlSelf->__Vfunc_leading_zero32__3411__value;
                        vlSelf->__Vfunc_leading_zero32__3411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3423__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3423__part 
                            = vlSelf->__Vfunc_leading_zero32__3423__value;
                        vlSelf->__Vfunc_leading_zero32__3423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3423__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3435__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3435__part 
                            = vlSelf->__Vfunc_leading_zero32__3435__value;
                        vlSelf->__Vfunc_leading_zero32__3435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3447__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3447__part 
                            = vlSelf->__Vfunc_leading_zero32__3447__value;
                        vlSelf->__Vfunc_leading_zero32__3447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3459__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3459__part 
                            = vlSelf->__Vfunc_leading_zero32__3459__value;
                        vlSelf->__Vfunc_leading_zero32__3459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3459__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3471__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3471__part 
                            = vlSelf->__Vfunc_leading_zero32__3471__value;
                        vlSelf->__Vfunc_leading_zero32__3471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3483__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3483__part 
                            = vlSelf->__Vfunc_leading_zero32__3483__value;
                        vlSelf->__Vfunc_leading_zero32__3483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3495__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3495__part 
                            = vlSelf->__Vfunc_leading_zero32__3495__value;
                        vlSelf->__Vfunc_leading_zero32__3495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3495__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3507__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3507__part 
                            = vlSelf->__Vfunc_leading_zero32__3507__value;
                        vlSelf->__Vfunc_leading_zero32__3507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3519__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3519__part 
                            = vlSelf->__Vfunc_leading_zero32__3519__value;
                        vlSelf->__Vfunc_leading_zero32__3519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3531__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3531__part 
                            = vlSelf->__Vfunc_leading_zero32__3531__value;
                        vlSelf->__Vfunc_leading_zero32__3531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3531__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3543__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3543__part 
                            = vlSelf->__Vfunc_leading_zero32__3543__value;
                        vlSelf->__Vfunc_leading_zero32__3543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3555__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3555__part 
                            = vlSelf->__Vfunc_leading_zero32__3555__value;
                        vlSelf->__Vfunc_leading_zero32__3555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3567__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3567__part 
                            = vlSelf->__Vfunc_leading_zero32__3567__value;
                        vlSelf->__Vfunc_leading_zero32__3567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3567__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3579__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3579__part 
                            = vlSelf->__Vfunc_leading_zero32__3579__value;
                        vlSelf->__Vfunc_leading_zero32__3579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3591__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3591__part 
                            = vlSelf->__Vfunc_leading_zero32__3591__value;
                        vlSelf->__Vfunc_leading_zero32__3591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3603__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3603__part 
                            = vlSelf->__Vfunc_leading_zero32__3603__value;
                        vlSelf->__Vfunc_leading_zero32__3603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3603__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3615__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3615__part 
                            = vlSelf->__Vfunc_leading_zero32__3615__value;
                        vlSelf->__Vfunc_leading_zero32__3615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3627__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3627__part 
                            = vlSelf->__Vfunc_leading_zero32__3627__value;
                        vlSelf->__Vfunc_leading_zero32__3627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3639__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3639__part 
                            = vlSelf->__Vfunc_leading_zero32__3639__value;
                        vlSelf->__Vfunc_leading_zero32__3639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3639__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3651__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3651__part 
                            = vlSelf->__Vfunc_leading_zero32__3651__value;
                        vlSelf->__Vfunc_leading_zero32__3651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3663__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3663__part 
                            = vlSelf->__Vfunc_leading_zero32__3663__value;
                        vlSelf->__Vfunc_leading_zero32__3663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3675__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3675__part 
                            = vlSelf->__Vfunc_leading_zero32__3675__value;
                        vlSelf->__Vfunc_leading_zero32__3675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3675__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3687__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3687__part 
                            = vlSelf->__Vfunc_leading_zero32__3687__value;
                        vlSelf->__Vfunc_leading_zero32__3687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3699__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3699__part 
                            = vlSelf->__Vfunc_leading_zero32__3699__value;
                        vlSelf->__Vfunc_leading_zero32__3699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3711__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3711__part 
                            = vlSelf->__Vfunc_leading_zero32__3711__value;
                        vlSelf->__Vfunc_leading_zero32__3711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3723__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3723__part 
                            = vlSelf->__Vfunc_leading_zero32__3723__value;
                        vlSelf->__Vfunc_leading_zero32__3723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3735__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3735__part 
                            = vlSelf->__Vfunc_leading_zero32__3735__value;
                        vlSelf->__Vfunc_leading_zero32__3735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3747__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3747__part 
                            = vlSelf->__Vfunc_leading_zero32__3747__value;
                        vlSelf->__Vfunc_leading_zero32__3747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3759__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3759__part 
                            = vlSelf->__Vfunc_leading_zero32__3759__value;
                        vlSelf->__Vfunc_leading_zero32__3759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3771__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3771__part 
                            = vlSelf->__Vfunc_leading_zero32__3771__value;
                        vlSelf->__Vfunc_leading_zero32__3771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3783__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3783__part 
                            = vlSelf->__Vfunc_leading_zero32__3783__value;
                        vlSelf->__Vfunc_leading_zero32__3783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3795__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3795__part 
                            = vlSelf->__Vfunc_leading_zero32__3795__value;
                        vlSelf->__Vfunc_leading_zero32__3795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3807__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3807__part 
                            = vlSelf->__Vfunc_leading_zero32__3807__value;
                        vlSelf->__Vfunc_leading_zero32__3807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3819__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3819__part 
                            = vlSelf->__Vfunc_leading_zero32__3819__value;
                        vlSelf->__Vfunc_leading_zero32__3819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3831__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3831__part 
                            = vlSelf->__Vfunc_leading_zero32__3831__value;
                        vlSelf->__Vfunc_leading_zero32__3831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3843__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3843__part 
                            = vlSelf->__Vfunc_leading_zero32__3843__value;
                        vlSelf->__Vfunc_leading_zero32__3843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3855__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3855__part 
                            = vlSelf->__Vfunc_leading_zero32__3855__value;
                        vlSelf->__Vfunc_leading_zero32__3855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3867__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3867__part 
                            = vlSelf->__Vfunc_leading_zero32__3867__value;
                        vlSelf->__Vfunc_leading_zero32__3867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3879__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3879__part 
                            = vlSelf->__Vfunc_leading_zero32__3879__value;
                        vlSelf->__Vfunc_leading_zero32__3879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3891__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3891__part 
                            = vlSelf->__Vfunc_leading_zero32__3891__value;
                        vlSelf->__Vfunc_leading_zero32__3891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3903__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3903__part 
                            = vlSelf->__Vfunc_leading_zero32__3903__value;
                        vlSelf->__Vfunc_leading_zero32__3903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3915__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3915__part 
                            = vlSelf->__Vfunc_leading_zero32__3915__value;
                        vlSelf->__Vfunc_leading_zero32__3915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3927__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3927__part 
                            = vlSelf->__Vfunc_leading_zero32__3927__value;
                        vlSelf->__Vfunc_leading_zero32__3927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3939__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3939__part 
                            = vlSelf->__Vfunc_leading_zero32__3939__value;
                        vlSelf->__Vfunc_leading_zero32__3939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3951__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3951__part 
                            = vlSelf->__Vfunc_leading_zero32__3951__value;
                        vlSelf->__Vfunc_leading_zero32__3951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3963__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3963__part 
                            = vlSelf->__Vfunc_leading_zero32__3963__value;
                        vlSelf->__Vfunc_leading_zero32__3963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3975__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3975__part 
                            = vlSelf->__Vfunc_leading_zero32__3975__value;
                        vlSelf->__Vfunc_leading_zero32__3975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3987__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3987__part 
                            = vlSelf->__Vfunc_leading_zero32__3987__value;
                        vlSelf->__Vfunc_leading_zero32__3987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3999__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3999__part 
                            = vlSelf->__Vfunc_leading_zero32__3999__value;
                        vlSelf->__Vfunc_leading_zero32__3999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4011__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4011__part 
                            = vlSelf->__Vfunc_leading_zero32__4011__value;
                        vlSelf->__Vfunc_leading_zero32__4011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4023__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4023__part 
                            = vlSelf->__Vfunc_leading_zero32__4023__value;
                        vlSelf->__Vfunc_leading_zero32__4023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4035__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4035__part 
                            = vlSelf->__Vfunc_leading_zero32__4035__value;
                        vlSelf->__Vfunc_leading_zero32__4035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4047__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4047__part 
                            = vlSelf->__Vfunc_leading_zero32__4047__value;
                        vlSelf->__Vfunc_leading_zero32__4047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4059__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4059__part 
                            = vlSelf->__Vfunc_leading_zero32__4059__value;
                        vlSelf->__Vfunc_leading_zero32__4059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4071__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4071__part 
                            = vlSelf->__Vfunc_leading_zero32__4071__value;
                        vlSelf->__Vfunc_leading_zero32__4071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4083__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4083__part 
                            = vlSelf->__Vfunc_leading_zero32__4083__value;
                        vlSelf->__Vfunc_leading_zero32__4083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4095__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4095__part 
                            = vlSelf->__Vfunc_leading_zero32__4095__value;
                        vlSelf->__Vfunc_leading_zero32__4095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4107__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4107__part 
                            = vlSelf->__Vfunc_leading_zero32__4107__value;
                        vlSelf->__Vfunc_leading_zero32__4107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4119__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4119__part 
                            = vlSelf->__Vfunc_leading_zero32__4119__value;
                        vlSelf->__Vfunc_leading_zero32__4119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4131__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4131__part 
                            = vlSelf->__Vfunc_leading_zero32__4131__value;
                        vlSelf->__Vfunc_leading_zero32__4131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4143__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4143__part 
                            = vlSelf->__Vfunc_leading_zero32__4143__value;
                        vlSelf->__Vfunc_leading_zero32__4143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4155__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4155__part 
                            = vlSelf->__Vfunc_leading_zero32__4155__value;
                        vlSelf->__Vfunc_leading_zero32__4155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4167__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4167__part 
                            = vlSelf->__Vfunc_leading_zero32__4167__value;
                        vlSelf->__Vfunc_leading_zero32__4167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4179__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4179__part 
                            = vlSelf->__Vfunc_leading_zero32__4179__value;
                        vlSelf->__Vfunc_leading_zero32__4179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4191__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4191__part 
                            = vlSelf->__Vfunc_leading_zero32__4191__value;
                        vlSelf->__Vfunc_leading_zero32__4191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4203__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4203__part 
                            = vlSelf->__Vfunc_leading_zero32__4203__value;
                        vlSelf->__Vfunc_leading_zero32__4203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4215__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4215__part 
                            = vlSelf->__Vfunc_leading_zero32__4215__value;
                        vlSelf->__Vfunc_leading_zero32__4215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4227__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4227__part 
                            = vlSelf->__Vfunc_leading_zero32__4227__value;
                        vlSelf->__Vfunc_leading_zero32__4227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4239__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4239__part 
                            = vlSelf->__Vfunc_leading_zero32__4239__value;
                        vlSelf->__Vfunc_leading_zero32__4239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4251__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4251__part 
                            = vlSelf->__Vfunc_leading_zero32__4251__value;
                        vlSelf->__Vfunc_leading_zero32__4251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4263__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4263__part 
                            = vlSelf->__Vfunc_leading_zero32__4263__value;
                        vlSelf->__Vfunc_leading_zero32__4263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4275__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4275__part 
                            = vlSelf->__Vfunc_leading_zero32__4275__value;
                        vlSelf->__Vfunc_leading_zero32__4275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4287__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4287__part 
                            = vlSelf->__Vfunc_leading_zero32__4287__value;
                        vlSelf->__Vfunc_leading_zero32__4287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4299__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4299__part 
                            = vlSelf->__Vfunc_leading_zero32__4299__value;
                        vlSelf->__Vfunc_leading_zero32__4299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4311__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4311__part 
                            = vlSelf->__Vfunc_leading_zero32__4311__value;
                        vlSelf->__Vfunc_leading_zero32__4311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4323__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4323__part 
                            = vlSelf->__Vfunc_leading_zero32__4323__value;
                        vlSelf->__Vfunc_leading_zero32__4323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4323__Vfuncout)) 
                             - (IData)(8U))));
}
