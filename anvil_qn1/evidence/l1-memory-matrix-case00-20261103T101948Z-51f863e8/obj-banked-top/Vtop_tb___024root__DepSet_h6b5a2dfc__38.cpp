// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__39(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__39\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4146__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4146__part 
                            = vlSelf->__Vfunc_leading_zero32__4146__value;
                        vlSelf->__Vfunc_leading_zero32__4146__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4146__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4146__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4146__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4146__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4146__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4158__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4158__part 
                            = vlSelf->__Vfunc_leading_zero32__4158__value;
                        vlSelf->__Vfunc_leading_zero32__4158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4158__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4170__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4170__part 
                            = vlSelf->__Vfunc_leading_zero32__4170__value;
                        vlSelf->__Vfunc_leading_zero32__4170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4170__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4182__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4182__part 
                            = vlSelf->__Vfunc_leading_zero32__4182__value;
                        vlSelf->__Vfunc_leading_zero32__4182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4182__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4194__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4194__part 
                            = vlSelf->__Vfunc_leading_zero32__4194__value;
                        vlSelf->__Vfunc_leading_zero32__4194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4206__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4206__part 
                            = vlSelf->__Vfunc_leading_zero32__4206__value;
                        vlSelf->__Vfunc_leading_zero32__4206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4218__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4218__part 
                            = vlSelf->__Vfunc_leading_zero32__4218__value;
                        vlSelf->__Vfunc_leading_zero32__4218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4218__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4230__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4230__part 
                            = vlSelf->__Vfunc_leading_zero32__4230__value;
                        vlSelf->__Vfunc_leading_zero32__4230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4242__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4254__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4254__part 
                            = vlSelf->__Vfunc_leading_zero32__4254__value;
                        vlSelf->__Vfunc_leading_zero32__4254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4254__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4266__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4266__part 
                            = vlSelf->__Vfunc_leading_zero32__4266__value;
                        vlSelf->__Vfunc_leading_zero32__4266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4278__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4290__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4290__part 
                            = vlSelf->__Vfunc_leading_zero32__4290__value;
                        vlSelf->__Vfunc_leading_zero32__4290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4302__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4302__part 
                            = vlSelf->__Vfunc_leading_zero32__4302__value;
                        vlSelf->__Vfunc_leading_zero32__4302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4314__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4326__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4326__part 
                            = vlSelf->__Vfunc_leading_zero32__4326__value;
                        vlSelf->__Vfunc_leading_zero32__4326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4338__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4338__part 
                            = vlSelf->__Vfunc_leading_zero32__4338__value;
                        vlSelf->__Vfunc_leading_zero32__4338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4350__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4362__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4362__part 
                            = vlSelf->__Vfunc_leading_zero32__4362__value;
                        vlSelf->__Vfunc_leading_zero32__4362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4374__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4374__part 
                            = vlSelf->__Vfunc_leading_zero32__4374__value;
                        vlSelf->__Vfunc_leading_zero32__4374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4386__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4398__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4398__part 
                            = vlSelf->__Vfunc_leading_zero32__4398__value;
                        vlSelf->__Vfunc_leading_zero32__4398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4410__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4410__part 
                            = vlSelf->__Vfunc_leading_zero32__4410__value;
                        vlSelf->__Vfunc_leading_zero32__4410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4422__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4434__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4434__part 
                            = vlSelf->__Vfunc_leading_zero32__4434__value;
                        vlSelf->__Vfunc_leading_zero32__4434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4446__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4446__part 
                            = vlSelf->__Vfunc_leading_zero32__4446__value;
                        vlSelf->__Vfunc_leading_zero32__4446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4458__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4470__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4470__part 
                            = vlSelf->__Vfunc_leading_zero32__4470__value;
                        vlSelf->__Vfunc_leading_zero32__4470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4482__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4482__part 
                            = vlSelf->__Vfunc_leading_zero32__4482__value;
                        vlSelf->__Vfunc_leading_zero32__4482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4494__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4506__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4506__part 
                            = vlSelf->__Vfunc_leading_zero32__4506__value;
                        vlSelf->__Vfunc_leading_zero32__4506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4518__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4518__part 
                            = vlSelf->__Vfunc_leading_zero32__4518__value;
                        vlSelf->__Vfunc_leading_zero32__4518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4530__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4542__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4542__part 
                            = vlSelf->__Vfunc_leading_zero32__4542__value;
                        vlSelf->__Vfunc_leading_zero32__4542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4554__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4554__part 
                            = vlSelf->__Vfunc_leading_zero32__4554__value;
                        vlSelf->__Vfunc_leading_zero32__4554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4566__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4578__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4578__part 
                            = vlSelf->__Vfunc_leading_zero32__4578__value;
                        vlSelf->__Vfunc_leading_zero32__4578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4590__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4590__part 
                            = vlSelf->__Vfunc_leading_zero32__4590__value;
                        vlSelf->__Vfunc_leading_zero32__4590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4602__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4614__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4614__part 
                            = vlSelf->__Vfunc_leading_zero32__4614__value;
                        vlSelf->__Vfunc_leading_zero32__4614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4626__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4626__part 
                            = vlSelf->__Vfunc_leading_zero32__4626__value;
                        vlSelf->__Vfunc_leading_zero32__4626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4638__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4650__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4650__part 
                            = vlSelf->__Vfunc_leading_zero32__4650__value;
                        vlSelf->__Vfunc_leading_zero32__4650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4662__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4662__part 
                            = vlSelf->__Vfunc_leading_zero32__4662__value;
                        vlSelf->__Vfunc_leading_zero32__4662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4674__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4686__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4686__part 
                            = vlSelf->__Vfunc_leading_zero32__4686__value;
                        vlSelf->__Vfunc_leading_zero32__4686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4698__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4698__part 
                            = vlSelf->__Vfunc_leading_zero32__4698__value;
                        vlSelf->__Vfunc_leading_zero32__4698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4710__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4722__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4722__part 
                            = vlSelf->__Vfunc_leading_zero32__4722__value;
                        vlSelf->__Vfunc_leading_zero32__4722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4734__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4734__part 
                            = vlSelf->__Vfunc_leading_zero32__4734__value;
                        vlSelf->__Vfunc_leading_zero32__4734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4746__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1687__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1687__part 
                            = vlSelf->__Vfunc_leading_zero32__1687__value;
                        vlSelf->__Vfunc_leading_zero32__1687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1699__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1699__part 
                            = vlSelf->__Vfunc_leading_zero32__1699__value;
                        vlSelf->__Vfunc_leading_zero32__1699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1711__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1711__part 
                            = vlSelf->__Vfunc_leading_zero32__1711__value;
                        vlSelf->__Vfunc_leading_zero32__1711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1723__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1723__part 
                            = vlSelf->__Vfunc_leading_zero32__1723__value;
                        vlSelf->__Vfunc_leading_zero32__1723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1735__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1735__part 
                            = vlSelf->__Vfunc_leading_zero32__1735__value;
                        vlSelf->__Vfunc_leading_zero32__1735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1747__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1747__part 
                            = vlSelf->__Vfunc_leading_zero32__1747__value;
                        vlSelf->__Vfunc_leading_zero32__1747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1759__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1759__part 
                            = vlSelf->__Vfunc_leading_zero32__1759__value;
                        vlSelf->__Vfunc_leading_zero32__1759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1771__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1771__part 
                            = vlSelf->__Vfunc_leading_zero32__1771__value;
                        vlSelf->__Vfunc_leading_zero32__1771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1783__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1783__part 
                            = vlSelf->__Vfunc_leading_zero32__1783__value;
                        vlSelf->__Vfunc_leading_zero32__1783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1795__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1795__part 
                            = vlSelf->__Vfunc_leading_zero32__1795__value;
                        vlSelf->__Vfunc_leading_zero32__1795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1807__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1807__part 
                            = vlSelf->__Vfunc_leading_zero32__1807__value;
                        vlSelf->__Vfunc_leading_zero32__1807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1819__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1819__part 
                            = vlSelf->__Vfunc_leading_zero32__1819__value;
                        vlSelf->__Vfunc_leading_zero32__1819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1831__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1831__part 
                            = vlSelf->__Vfunc_leading_zero32__1831__value;
                        vlSelf->__Vfunc_leading_zero32__1831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1843__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1843__part 
                            = vlSelf->__Vfunc_leading_zero32__1843__value;
                        vlSelf->__Vfunc_leading_zero32__1843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1855__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1855__part 
                            = vlSelf->__Vfunc_leading_zero32__1855__value;
                        vlSelf->__Vfunc_leading_zero32__1855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1867__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1867__part 
                            = vlSelf->__Vfunc_leading_zero32__1867__value;
                        vlSelf->__Vfunc_leading_zero32__1867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1879__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1879__part 
                            = vlSelf->__Vfunc_leading_zero32__1879__value;
                        vlSelf->__Vfunc_leading_zero32__1879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1891__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1891__part 
                            = vlSelf->__Vfunc_leading_zero32__1891__value;
                        vlSelf->__Vfunc_leading_zero32__1891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1903__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1903__part 
                            = vlSelf->__Vfunc_leading_zero32__1903__value;
                        vlSelf->__Vfunc_leading_zero32__1903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1915__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1915__part 
                            = vlSelf->__Vfunc_leading_zero32__1915__value;
                        vlSelf->__Vfunc_leading_zero32__1915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1927__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1927__part 
                            = vlSelf->__Vfunc_leading_zero32__1927__value;
                        vlSelf->__Vfunc_leading_zero32__1927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1939__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1939__part 
                            = vlSelf->__Vfunc_leading_zero32__1939__value;
                        vlSelf->__Vfunc_leading_zero32__1939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1951__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1951__part 
                            = vlSelf->__Vfunc_leading_zero32__1951__value;
                        vlSelf->__Vfunc_leading_zero32__1951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1963__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1963__part 
                            = vlSelf->__Vfunc_leading_zero32__1963__value;
                        vlSelf->__Vfunc_leading_zero32__1963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1975__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1975__part 
                            = vlSelf->__Vfunc_leading_zero32__1975__value;
                        vlSelf->__Vfunc_leading_zero32__1975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1987__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1987__part 
                            = vlSelf->__Vfunc_leading_zero32__1987__value;
                        vlSelf->__Vfunc_leading_zero32__1987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1999__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1999__part 
                            = vlSelf->__Vfunc_leading_zero32__1999__value;
                        vlSelf->__Vfunc_leading_zero32__1999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2011__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2011__part 
                            = vlSelf->__Vfunc_leading_zero32__2011__value;
                        vlSelf->__Vfunc_leading_zero32__2011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2023__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2023__part 
                            = vlSelf->__Vfunc_leading_zero32__2023__value;
                        vlSelf->__Vfunc_leading_zero32__2023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2035__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2035__part 
                            = vlSelf->__Vfunc_leading_zero32__2035__value;
                        vlSelf->__Vfunc_leading_zero32__2035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2047__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2047__part 
                            = vlSelf->__Vfunc_leading_zero32__2047__value;
                        vlSelf->__Vfunc_leading_zero32__2047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2059__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2059__part 
                            = vlSelf->__Vfunc_leading_zero32__2059__value;
                        vlSelf->__Vfunc_leading_zero32__2059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2071__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2071__part 
                            = vlSelf->__Vfunc_leading_zero32__2071__value;
                        vlSelf->__Vfunc_leading_zero32__2071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2083__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2083__part 
                            = vlSelf->__Vfunc_leading_zero32__2083__value;
                        vlSelf->__Vfunc_leading_zero32__2083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2095__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2095__part 
                            = vlSelf->__Vfunc_leading_zero32__2095__value;
                        vlSelf->__Vfunc_leading_zero32__2095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2107__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2107__part 
                            = vlSelf->__Vfunc_leading_zero32__2107__value;
                        vlSelf->__Vfunc_leading_zero32__2107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2119__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2119__part 
                            = vlSelf->__Vfunc_leading_zero32__2119__value;
                        vlSelf->__Vfunc_leading_zero32__2119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2131__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2131__part 
                            = vlSelf->__Vfunc_leading_zero32__2131__value;
                        vlSelf->__Vfunc_leading_zero32__2131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2143__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2143__part 
                            = vlSelf->__Vfunc_leading_zero32__2143__value;
                        vlSelf->__Vfunc_leading_zero32__2143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2155__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2155__part 
                            = vlSelf->__Vfunc_leading_zero32__2155__value;
                        vlSelf->__Vfunc_leading_zero32__2155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2167__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2167__part 
                            = vlSelf->__Vfunc_leading_zero32__2167__value;
                        vlSelf->__Vfunc_leading_zero32__2167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2179__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2179__part 
                            = vlSelf->__Vfunc_leading_zero32__2179__value;
                        vlSelf->__Vfunc_leading_zero32__2179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2191__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2191__part 
                            = vlSelf->__Vfunc_leading_zero32__2191__value;
                        vlSelf->__Vfunc_leading_zero32__2191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2203__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2203__part 
                            = vlSelf->__Vfunc_leading_zero32__2203__value;
                        vlSelf->__Vfunc_leading_zero32__2203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2215__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2215__part 
                            = vlSelf->__Vfunc_leading_zero32__2215__value;
                        vlSelf->__Vfunc_leading_zero32__2215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2227__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2227__part 
                            = vlSelf->__Vfunc_leading_zero32__2227__value;
                        vlSelf->__Vfunc_leading_zero32__2227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2239__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2239__part 
                            = vlSelf->__Vfunc_leading_zero32__2239__value;
                        vlSelf->__Vfunc_leading_zero32__2239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2251__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2251__part 
                            = vlSelf->__Vfunc_leading_zero32__2251__value;
                        vlSelf->__Vfunc_leading_zero32__2251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2263__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2263__part 
                            = vlSelf->__Vfunc_leading_zero32__2263__value;
                        vlSelf->__Vfunc_leading_zero32__2263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2275__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2275__part 
                            = vlSelf->__Vfunc_leading_zero32__2275__value;
                        vlSelf->__Vfunc_leading_zero32__2275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2287__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2287__part 
                            = vlSelf->__Vfunc_leading_zero32__2287__value;
                        vlSelf->__Vfunc_leading_zero32__2287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2299__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2299__part 
                            = vlSelf->__Vfunc_leading_zero32__2299__value;
                        vlSelf->__Vfunc_leading_zero32__2299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2311__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2311__part 
                            = vlSelf->__Vfunc_leading_zero32__2311__value;
                        vlSelf->__Vfunc_leading_zero32__2311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2323__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2323__part 
                            = vlSelf->__Vfunc_leading_zero32__2323__value;
                        vlSelf->__Vfunc_leading_zero32__2323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2335__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2335__part 
                            = vlSelf->__Vfunc_leading_zero32__2335__value;
                        vlSelf->__Vfunc_leading_zero32__2335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2347__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2347__part 
                            = vlSelf->__Vfunc_leading_zero32__2347__value;
                        vlSelf->__Vfunc_leading_zero32__2347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2359__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2359__part 
                            = vlSelf->__Vfunc_leading_zero32__2359__value;
                        vlSelf->__Vfunc_leading_zero32__2359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2371__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2371__part 
                            = vlSelf->__Vfunc_leading_zero32__2371__value;
                        vlSelf->__Vfunc_leading_zero32__2371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2383__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2383__part 
                            = vlSelf->__Vfunc_leading_zero32__2383__value;
                        vlSelf->__Vfunc_leading_zero32__2383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2395__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2395__part 
                            = vlSelf->__Vfunc_leading_zero32__2395__value;
                        vlSelf->__Vfunc_leading_zero32__2395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2407__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2407__part 
                            = vlSelf->__Vfunc_leading_zero32__2407__value;
                        vlSelf->__Vfunc_leading_zero32__2407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2419__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2419__part 
                            = vlSelf->__Vfunc_leading_zero32__2419__value;
                        vlSelf->__Vfunc_leading_zero32__2419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2431__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2431__part 
                            = vlSelf->__Vfunc_leading_zero32__2431__value;
                        vlSelf->__Vfunc_leading_zero32__2431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2443__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2443__part 
                            = vlSelf->__Vfunc_leading_zero32__2443__value;
                        vlSelf->__Vfunc_leading_zero32__2443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2455__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2455__part 
                            = vlSelf->__Vfunc_leading_zero32__2455__value;
                        vlSelf->__Vfunc_leading_zero32__2455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2467__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2467__part 
                            = vlSelf->__Vfunc_leading_zero32__2467__value;
                        vlSelf->__Vfunc_leading_zero32__2467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2479__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2479__part 
                            = vlSelf->__Vfunc_leading_zero32__2479__value;
                        vlSelf->__Vfunc_leading_zero32__2479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2491__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2491__part 
                            = vlSelf->__Vfunc_leading_zero32__2491__value;
                        vlSelf->__Vfunc_leading_zero32__2491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2503__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2503__part 
                            = vlSelf->__Vfunc_leading_zero32__2503__value;
                        vlSelf->__Vfunc_leading_zero32__2503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2515__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2515__part 
                            = vlSelf->__Vfunc_leading_zero32__2515__value;
                        vlSelf->__Vfunc_leading_zero32__2515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2527__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2527__part 
                            = vlSelf->__Vfunc_leading_zero32__2527__value;
                        vlSelf->__Vfunc_leading_zero32__2527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2539__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2539__part 
                            = vlSelf->__Vfunc_leading_zero32__2539__value;
                        vlSelf->__Vfunc_leading_zero32__2539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2551__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2551__part 
                            = vlSelf->__Vfunc_leading_zero32__2551__value;
                        vlSelf->__Vfunc_leading_zero32__2551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2563__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2563__part 
                            = vlSelf->__Vfunc_leading_zero32__2563__value;
                        vlSelf->__Vfunc_leading_zero32__2563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2575__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2575__part 
                            = vlSelf->__Vfunc_leading_zero32__2575__value;
                        vlSelf->__Vfunc_leading_zero32__2575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2587__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2587__part 
                            = vlSelf->__Vfunc_leading_zero32__2587__value;
                        vlSelf->__Vfunc_leading_zero32__2587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2599__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2599__part 
                            = vlSelf->__Vfunc_leading_zero32__2599__value;
                        vlSelf->__Vfunc_leading_zero32__2599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2611__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2611__part 
                            = vlSelf->__Vfunc_leading_zero32__2611__value;
                        vlSelf->__Vfunc_leading_zero32__2611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2623__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2623__part 
                            = vlSelf->__Vfunc_leading_zero32__2623__value;
                        vlSelf->__Vfunc_leading_zero32__2623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2635__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2635__part 
                            = vlSelf->__Vfunc_leading_zero32__2635__value;
                        vlSelf->__Vfunc_leading_zero32__2635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2647__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2647__part 
                            = vlSelf->__Vfunc_leading_zero32__2647__value;
                        vlSelf->__Vfunc_leading_zero32__2647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2659__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2659__part 
                            = vlSelf->__Vfunc_leading_zero32__2659__value;
                        vlSelf->__Vfunc_leading_zero32__2659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2671__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2671__part 
                            = vlSelf->__Vfunc_leading_zero32__2671__value;
                        vlSelf->__Vfunc_leading_zero32__2671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2683__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2683__part 
                            = vlSelf->__Vfunc_leading_zero32__2683__value;
                        vlSelf->__Vfunc_leading_zero32__2683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2695__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2695__part 
                            = vlSelf->__Vfunc_leading_zero32__2695__value;
                        vlSelf->__Vfunc_leading_zero32__2695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2707__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2707__part 
                            = vlSelf->__Vfunc_leading_zero32__2707__value;
                        vlSelf->__Vfunc_leading_zero32__2707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2707__count)));
                            vlSelf->__Vfunc_leading_zero32__2707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2707__count)));
                            vlSelf->__Vfunc_leading_zero32__2707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2707__count)));
                            vlSelf->__Vfunc_leading_zero32__2707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2707__count)));
                            vlSelf->__Vfunc_leading_zero32__2707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2707__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2719__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2719__part 
                            = vlSelf->__Vfunc_leading_zero32__2719__value;
                        vlSelf->__Vfunc_leading_zero32__2719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2719__count)));
                            vlSelf->__Vfunc_leading_zero32__2719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2719__count)));
                            vlSelf->__Vfunc_leading_zero32__2719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2719__count)));
                            vlSelf->__Vfunc_leading_zero32__2719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2719__count)));
                            vlSelf->__Vfunc_leading_zero32__2719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2719__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2731__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2731__part 
                            = vlSelf->__Vfunc_leading_zero32__2731__value;
                        vlSelf->__Vfunc_leading_zero32__2731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2731__count)));
                            vlSelf->__Vfunc_leading_zero32__2731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2731__count)));
                            vlSelf->__Vfunc_leading_zero32__2731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2731__count)));
                            vlSelf->__Vfunc_leading_zero32__2731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2731__count)));
                            vlSelf->__Vfunc_leading_zero32__2731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2743__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2743__part 
                            = vlSelf->__Vfunc_leading_zero32__2743__value;
                        vlSelf->__Vfunc_leading_zero32__2743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2743__count)));
                            vlSelf->__Vfunc_leading_zero32__2743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2743__count)));
                            vlSelf->__Vfunc_leading_zero32__2743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2743__count)));
                            vlSelf->__Vfunc_leading_zero32__2743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2743__count)));
                            vlSelf->__Vfunc_leading_zero32__2743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2743__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2755__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2755__part 
                            = vlSelf->__Vfunc_leading_zero32__2755__value;
                        vlSelf->__Vfunc_leading_zero32__2755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2755__count)));
                            vlSelf->__Vfunc_leading_zero32__2755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2755__count)));
                            vlSelf->__Vfunc_leading_zero32__2755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2755__count)));
                            vlSelf->__Vfunc_leading_zero32__2755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2755__count)));
                            vlSelf->__Vfunc_leading_zero32__2755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2767__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2767__part 
                            = vlSelf->__Vfunc_leading_zero32__2767__value;
                        vlSelf->__Vfunc_leading_zero32__2767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2767__count)));
                            vlSelf->__Vfunc_leading_zero32__2767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2767__count)));
                            vlSelf->__Vfunc_leading_zero32__2767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2767__count)));
                            vlSelf->__Vfunc_leading_zero32__2767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2767__count)));
                            vlSelf->__Vfunc_leading_zero32__2767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2779__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2779__part 
                            = vlSelf->__Vfunc_leading_zero32__2779__value;
                        vlSelf->__Vfunc_leading_zero32__2779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2779__count)));
                            vlSelf->__Vfunc_leading_zero32__2779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2779__count)));
                            vlSelf->__Vfunc_leading_zero32__2779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2779__count)));
                            vlSelf->__Vfunc_leading_zero32__2779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2779__count)));
                            vlSelf->__Vfunc_leading_zero32__2779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2779__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2791__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2791__part 
                            = vlSelf->__Vfunc_leading_zero32__2791__value;
                        vlSelf->__Vfunc_leading_zero32__2791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2791__count)));
                            vlSelf->__Vfunc_leading_zero32__2791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2791__count)));
                            vlSelf->__Vfunc_leading_zero32__2791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2791__count)));
                            vlSelf->__Vfunc_leading_zero32__2791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2791__count)));
                            vlSelf->__Vfunc_leading_zero32__2791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2803__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2803__part 
                            = vlSelf->__Vfunc_leading_zero32__2803__value;
                        vlSelf->__Vfunc_leading_zero32__2803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2803__count)));
                            vlSelf->__Vfunc_leading_zero32__2803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2803__count)));
                            vlSelf->__Vfunc_leading_zero32__2803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2803__count)));
                            vlSelf->__Vfunc_leading_zero32__2803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2803__count)));
                            vlSelf->__Vfunc_leading_zero32__2803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2803__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2815__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2815__part 
                            = vlSelf->__Vfunc_leading_zero32__2815__value;
                        vlSelf->__Vfunc_leading_zero32__2815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2815__count)));
                            vlSelf->__Vfunc_leading_zero32__2815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2815__count)));
                            vlSelf->__Vfunc_leading_zero32__2815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2815__count)));
                            vlSelf->__Vfunc_leading_zero32__2815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2815__count)));
                            vlSelf->__Vfunc_leading_zero32__2815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2815__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2827__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2827__part 
                            = vlSelf->__Vfunc_leading_zero32__2827__value;
                        vlSelf->__Vfunc_leading_zero32__2827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2827__count)));
                            vlSelf->__Vfunc_leading_zero32__2827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2827__count)));
                            vlSelf->__Vfunc_leading_zero32__2827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2827__count)));
                            vlSelf->__Vfunc_leading_zero32__2827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2827__count)));
                            vlSelf->__Vfunc_leading_zero32__2827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2827__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2839__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2839__part 
                            = vlSelf->__Vfunc_leading_zero32__2839__value;
                        vlSelf->__Vfunc_leading_zero32__2839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2839__count)));
                            vlSelf->__Vfunc_leading_zero32__2839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2839__count)));
                            vlSelf->__Vfunc_leading_zero32__2839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2839__count)));
                            vlSelf->__Vfunc_leading_zero32__2839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2839__count)));
                            vlSelf->__Vfunc_leading_zero32__2839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2839__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2851__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2851__part 
                            = vlSelf->__Vfunc_leading_zero32__2851__value;
                        vlSelf->__Vfunc_leading_zero32__2851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2851__count)));
                            vlSelf->__Vfunc_leading_zero32__2851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2851__count)));
                            vlSelf->__Vfunc_leading_zero32__2851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2851__count)));
                            vlSelf->__Vfunc_leading_zero32__2851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2851__count)));
                            vlSelf->__Vfunc_leading_zero32__2851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2851__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2863__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2863__part 
                            = vlSelf->__Vfunc_leading_zero32__2863__value;
                        vlSelf->__Vfunc_leading_zero32__2863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2863__count)));
                            vlSelf->__Vfunc_leading_zero32__2863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2863__count)));
                            vlSelf->__Vfunc_leading_zero32__2863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2863__count)));
                            vlSelf->__Vfunc_leading_zero32__2863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2863__count)));
                            vlSelf->__Vfunc_leading_zero32__2863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2863__Vfuncout)) 
                             - (IData)(8U))));
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
}
