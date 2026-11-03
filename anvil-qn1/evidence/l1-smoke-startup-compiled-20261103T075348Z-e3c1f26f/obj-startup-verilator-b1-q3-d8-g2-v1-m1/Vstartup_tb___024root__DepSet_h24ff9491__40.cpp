// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__40(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__40\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3472__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3472__part 
                            = vlSelf->__Vfunc_leading_zero32__3472__value;
                        vlSelf->__Vfunc_leading_zero32__3472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3472__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3484__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3484__part 
                            = vlSelf->__Vfunc_leading_zero32__3484__value;
                        vlSelf->__Vfunc_leading_zero32__3484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3484__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3496__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3496__part 
                            = vlSelf->__Vfunc_leading_zero32__3496__value;
                        vlSelf->__Vfunc_leading_zero32__3496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3496__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3508__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3508__part 
                            = vlSelf->__Vfunc_leading_zero32__3508__value;
                        vlSelf->__Vfunc_leading_zero32__3508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3508__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3520__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3520__part 
                            = vlSelf->__Vfunc_leading_zero32__3520__value;
                        vlSelf->__Vfunc_leading_zero32__3520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3520__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3532__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3532__part 
                            = vlSelf->__Vfunc_leading_zero32__3532__value;
                        vlSelf->__Vfunc_leading_zero32__3532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3532__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3544__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3544__part 
                            = vlSelf->__Vfunc_leading_zero32__3544__value;
                        vlSelf->__Vfunc_leading_zero32__3544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3544__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3556__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3556__part 
                            = vlSelf->__Vfunc_leading_zero32__3556__value;
                        vlSelf->__Vfunc_leading_zero32__3556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3556__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3568__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3568__part 
                            = vlSelf->__Vfunc_leading_zero32__3568__value;
                        vlSelf->__Vfunc_leading_zero32__3568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3568__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3580__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3580__part 
                            = vlSelf->__Vfunc_leading_zero32__3580__value;
                        vlSelf->__Vfunc_leading_zero32__3580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3580__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3592__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3592__part 
                            = vlSelf->__Vfunc_leading_zero32__3592__value;
                        vlSelf->__Vfunc_leading_zero32__3592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3592__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3604__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3604__part 
                            = vlSelf->__Vfunc_leading_zero32__3604__value;
                        vlSelf->__Vfunc_leading_zero32__3604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3604__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3616__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3616__part 
                            = vlSelf->__Vfunc_leading_zero32__3616__value;
                        vlSelf->__Vfunc_leading_zero32__3616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3616__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3628__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3628__part 
                            = vlSelf->__Vfunc_leading_zero32__3628__value;
                        vlSelf->__Vfunc_leading_zero32__3628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3628__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3640__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3640__part 
                            = vlSelf->__Vfunc_leading_zero32__3640__value;
                        vlSelf->__Vfunc_leading_zero32__3640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3640__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3652__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3652__part 
                            = vlSelf->__Vfunc_leading_zero32__3652__value;
                        vlSelf->__Vfunc_leading_zero32__3652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3652__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3664__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3664__part 
                            = vlSelf->__Vfunc_leading_zero32__3664__value;
                        vlSelf->__Vfunc_leading_zero32__3664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3664__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3676__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3676__part 
                            = vlSelf->__Vfunc_leading_zero32__3676__value;
                        vlSelf->__Vfunc_leading_zero32__3676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3676__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3688__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3688__part 
                            = vlSelf->__Vfunc_leading_zero32__3688__value;
                        vlSelf->__Vfunc_leading_zero32__3688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3688__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3700__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3700__part 
                            = vlSelf->__Vfunc_leading_zero32__3700__value;
                        vlSelf->__Vfunc_leading_zero32__3700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3700__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3712__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3712__part 
                            = vlSelf->__Vfunc_leading_zero32__3712__value;
                        vlSelf->__Vfunc_leading_zero32__3712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3712__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3724__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3724__part 
                            = vlSelf->__Vfunc_leading_zero32__3724__value;
                        vlSelf->__Vfunc_leading_zero32__3724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3724__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3736__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3736__part 
                            = vlSelf->__Vfunc_leading_zero32__3736__value;
                        vlSelf->__Vfunc_leading_zero32__3736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3736__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3748__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3748__part 
                            = vlSelf->__Vfunc_leading_zero32__3748__value;
                        vlSelf->__Vfunc_leading_zero32__3748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3748__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3760__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3760__part 
                            = vlSelf->__Vfunc_leading_zero32__3760__value;
                        vlSelf->__Vfunc_leading_zero32__3760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3760__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3772__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3772__part 
                            = vlSelf->__Vfunc_leading_zero32__3772__value;
                        vlSelf->__Vfunc_leading_zero32__3772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3772__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3784__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3784__part 
                            = vlSelf->__Vfunc_leading_zero32__3784__value;
                        vlSelf->__Vfunc_leading_zero32__3784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3784__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3796__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3796__part 
                            = vlSelf->__Vfunc_leading_zero32__3796__value;
                        vlSelf->__Vfunc_leading_zero32__3796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3796__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3808__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3808__part 
                            = vlSelf->__Vfunc_leading_zero32__3808__value;
                        vlSelf->__Vfunc_leading_zero32__3808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3808__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3820__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3820__part 
                            = vlSelf->__Vfunc_leading_zero32__3820__value;
                        vlSelf->__Vfunc_leading_zero32__3820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3820__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3832__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3832__part 
                            = vlSelf->__Vfunc_leading_zero32__3832__value;
                        vlSelf->__Vfunc_leading_zero32__3832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3832__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3844__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3844__part 
                            = vlSelf->__Vfunc_leading_zero32__3844__value;
                        vlSelf->__Vfunc_leading_zero32__3844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3844__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3856__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3856__part 
                            = vlSelf->__Vfunc_leading_zero32__3856__value;
                        vlSelf->__Vfunc_leading_zero32__3856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3856__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3868__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3868__part 
                            = vlSelf->__Vfunc_leading_zero32__3868__value;
                        vlSelf->__Vfunc_leading_zero32__3868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3868__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3880__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3880__part 
                            = vlSelf->__Vfunc_leading_zero32__3880__value;
                        vlSelf->__Vfunc_leading_zero32__3880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3880__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3892__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3892__part 
                            = vlSelf->__Vfunc_leading_zero32__3892__value;
                        vlSelf->__Vfunc_leading_zero32__3892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3892__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3904__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3904__part 
                            = vlSelf->__Vfunc_leading_zero32__3904__value;
                        vlSelf->__Vfunc_leading_zero32__3904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3916__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3916__part 
                            = vlSelf->__Vfunc_leading_zero32__3916__value;
                        vlSelf->__Vfunc_leading_zero32__3916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3928__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3928__part 
                            = vlSelf->__Vfunc_leading_zero32__3928__value;
                        vlSelf->__Vfunc_leading_zero32__3928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3940__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3940__part 
                            = vlSelf->__Vfunc_leading_zero32__3940__value;
                        vlSelf->__Vfunc_leading_zero32__3940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3952__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3952__part 
                            = vlSelf->__Vfunc_leading_zero32__3952__value;
                        vlSelf->__Vfunc_leading_zero32__3952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3964__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3964__part 
                            = vlSelf->__Vfunc_leading_zero32__3964__value;
                        vlSelf->__Vfunc_leading_zero32__3964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3976__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3976__part 
                            = vlSelf->__Vfunc_leading_zero32__3976__value;
                        vlSelf->__Vfunc_leading_zero32__3976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3976__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3988__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3988__part 
                            = vlSelf->__Vfunc_leading_zero32__3988__value;
                        vlSelf->__Vfunc_leading_zero32__3988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3988__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4000__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4000__part 
                            = vlSelf->__Vfunc_leading_zero32__4000__value;
                        vlSelf->__Vfunc_leading_zero32__4000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4000__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4012__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4012__part 
                            = vlSelf->__Vfunc_leading_zero32__4012__value;
                        vlSelf->__Vfunc_leading_zero32__4012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4012__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4024__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4024__part 
                            = vlSelf->__Vfunc_leading_zero32__4024__value;
                        vlSelf->__Vfunc_leading_zero32__4024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4024__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4036__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4036__part 
                            = vlSelf->__Vfunc_leading_zero32__4036__value;
                        vlSelf->__Vfunc_leading_zero32__4036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4036__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4048__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4048__part 
                            = vlSelf->__Vfunc_leading_zero32__4048__value;
                        vlSelf->__Vfunc_leading_zero32__4048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4048__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4060__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4060__part 
                            = vlSelf->__Vfunc_leading_zero32__4060__value;
                        vlSelf->__Vfunc_leading_zero32__4060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4060__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4072__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4072__part 
                            = vlSelf->__Vfunc_leading_zero32__4072__value;
                        vlSelf->__Vfunc_leading_zero32__4072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4072__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4084__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4084__part 
                            = vlSelf->__Vfunc_leading_zero32__4084__value;
                        vlSelf->__Vfunc_leading_zero32__4084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4084__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4096__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4096__part 
                            = vlSelf->__Vfunc_leading_zero32__4096__value;
                        vlSelf->__Vfunc_leading_zero32__4096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4096__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4108__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4108__part 
                            = vlSelf->__Vfunc_leading_zero32__4108__value;
                        vlSelf->__Vfunc_leading_zero32__4108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4120__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4120__part 
                            = vlSelf->__Vfunc_leading_zero32__4120__value;
                        vlSelf->__Vfunc_leading_zero32__4120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4132__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4132__part 
                            = vlSelf->__Vfunc_leading_zero32__4132__value;
                        vlSelf->__Vfunc_leading_zero32__4132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4144__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4144__part 
                            = vlSelf->__Vfunc_leading_zero32__4144__value;
                        vlSelf->__Vfunc_leading_zero32__4144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4156__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4156__part 
                            = vlSelf->__Vfunc_leading_zero32__4156__value;
                        vlSelf->__Vfunc_leading_zero32__4156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4168__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4168__part 
                            = vlSelf->__Vfunc_leading_zero32__4168__value;
                        vlSelf->__Vfunc_leading_zero32__4168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4168__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4180__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4180__part 
                            = vlSelf->__Vfunc_leading_zero32__4180__value;
                        vlSelf->__Vfunc_leading_zero32__4180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4192__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4192__part 
                            = vlSelf->__Vfunc_leading_zero32__4192__value;
                        vlSelf->__Vfunc_leading_zero32__4192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4204__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4204__part 
                            = vlSelf->__Vfunc_leading_zero32__4204__value;
                        vlSelf->__Vfunc_leading_zero32__4204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4216__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4216__part 
                            = vlSelf->__Vfunc_leading_zero32__4216__value;
                        vlSelf->__Vfunc_leading_zero32__4216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4228__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4228__part 
                            = vlSelf->__Vfunc_leading_zero32__4228__value;
                        vlSelf->__Vfunc_leading_zero32__4228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4240__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4240__part 
                            = vlSelf->__Vfunc_leading_zero32__4240__value;
                        vlSelf->__Vfunc_leading_zero32__4240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4252__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4252__part 
                            = vlSelf->__Vfunc_leading_zero32__4252__value;
                        vlSelf->__Vfunc_leading_zero32__4252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4264__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4264__part 
                            = vlSelf->__Vfunc_leading_zero32__4264__value;
                        vlSelf->__Vfunc_leading_zero32__4264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4276__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4276__part 
                            = vlSelf->__Vfunc_leading_zero32__4276__value;
                        vlSelf->__Vfunc_leading_zero32__4276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4288__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4288__part 
                            = vlSelf->__Vfunc_leading_zero32__4288__value;
                        vlSelf->__Vfunc_leading_zero32__4288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4300__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4300__part 
                            = vlSelf->__Vfunc_leading_zero32__4300__value;
                        vlSelf->__Vfunc_leading_zero32__4300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4312__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4312__part 
                            = vlSelf->__Vfunc_leading_zero32__4312__value;
                        vlSelf->__Vfunc_leading_zero32__4312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4324__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4324__part 
                            = vlSelf->__Vfunc_leading_zero32__4324__value;
                        vlSelf->__Vfunc_leading_zero32__4324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4336__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4336__part 
                            = vlSelf->__Vfunc_leading_zero32__4336__value;
                        vlSelf->__Vfunc_leading_zero32__4336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4348__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4348__part 
                            = vlSelf->__Vfunc_leading_zero32__4348__value;
                        vlSelf->__Vfunc_leading_zero32__4348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4360__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4360__part 
                            = vlSelf->__Vfunc_leading_zero32__4360__value;
                        vlSelf->__Vfunc_leading_zero32__4360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4372__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4372__part 
                            = vlSelf->__Vfunc_leading_zero32__4372__value;
                        vlSelf->__Vfunc_leading_zero32__4372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4384__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4384__part 
                            = vlSelf->__Vfunc_leading_zero32__4384__value;
                        vlSelf->__Vfunc_leading_zero32__4384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4396__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4396__part 
                            = vlSelf->__Vfunc_leading_zero32__4396__value;
                        vlSelf->__Vfunc_leading_zero32__4396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4408__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4408__part 
                            = vlSelf->__Vfunc_leading_zero32__4408__value;
                        vlSelf->__Vfunc_leading_zero32__4408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4420__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4420__part 
                            = vlSelf->__Vfunc_leading_zero32__4420__value;
                        vlSelf->__Vfunc_leading_zero32__4420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4432__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4432__part 
                            = vlSelf->__Vfunc_leading_zero32__4432__value;
                        vlSelf->__Vfunc_leading_zero32__4432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4444__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4444__part 
                            = vlSelf->__Vfunc_leading_zero32__4444__value;
                        vlSelf->__Vfunc_leading_zero32__4444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4456__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4456__part 
                            = vlSelf->__Vfunc_leading_zero32__4456__value;
                        vlSelf->__Vfunc_leading_zero32__4456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4468__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4468__part 
                            = vlSelf->__Vfunc_leading_zero32__4468__value;
                        vlSelf->__Vfunc_leading_zero32__4468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4480__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4480__part 
                            = vlSelf->__Vfunc_leading_zero32__4480__value;
                        vlSelf->__Vfunc_leading_zero32__4480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4492__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4492__part 
                            = vlSelf->__Vfunc_leading_zero32__4492__value;
                        vlSelf->__Vfunc_leading_zero32__4492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4504__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4504__part 
                            = vlSelf->__Vfunc_leading_zero32__4504__value;
                        vlSelf->__Vfunc_leading_zero32__4504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4516__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4516__part 
                            = vlSelf->__Vfunc_leading_zero32__4516__value;
                        vlSelf->__Vfunc_leading_zero32__4516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4528__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4528__part 
                            = vlSelf->__Vfunc_leading_zero32__4528__value;
                        vlSelf->__Vfunc_leading_zero32__4528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4540__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4540__part 
                            = vlSelf->__Vfunc_leading_zero32__4540__value;
                        vlSelf->__Vfunc_leading_zero32__4540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4552__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4552__part 
                            = vlSelf->__Vfunc_leading_zero32__4552__value;
                        vlSelf->__Vfunc_leading_zero32__4552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4564__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4564__part 
                            = vlSelf->__Vfunc_leading_zero32__4564__value;
                        vlSelf->__Vfunc_leading_zero32__4564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4576__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4576__part 
                            = vlSelf->__Vfunc_leading_zero32__4576__value;
                        vlSelf->__Vfunc_leading_zero32__4576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4588__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4588__part 
                            = vlSelf->__Vfunc_leading_zero32__4588__value;
                        vlSelf->__Vfunc_leading_zero32__4588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4600__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4600__part 
                            = vlSelf->__Vfunc_leading_zero32__4600__value;
                        vlSelf->__Vfunc_leading_zero32__4600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4612__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4612__part 
                            = vlSelf->__Vfunc_leading_zero32__4612__value;
                        vlSelf->__Vfunc_leading_zero32__4612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4624__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4624__part 
                            = vlSelf->__Vfunc_leading_zero32__4624__value;
                        vlSelf->__Vfunc_leading_zero32__4624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4636__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4636__part 
                            = vlSelf->__Vfunc_leading_zero32__4636__value;
                        vlSelf->__Vfunc_leading_zero32__4636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4648__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4648__part 
                            = vlSelf->__Vfunc_leading_zero32__4648__value;
                        vlSelf->__Vfunc_leading_zero32__4648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4660__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4660__part 
                            = vlSelf->__Vfunc_leading_zero32__4660__value;
                        vlSelf->__Vfunc_leading_zero32__4660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4672__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4672__part 
                            = vlSelf->__Vfunc_leading_zero32__4672__value;
                        vlSelf->__Vfunc_leading_zero32__4672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4684__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4684__part 
                            = vlSelf->__Vfunc_leading_zero32__4684__value;
                        vlSelf->__Vfunc_leading_zero32__4684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4696__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4696__part 
                            = vlSelf->__Vfunc_leading_zero32__4696__value;
                        vlSelf->__Vfunc_leading_zero32__4696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4708__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4708__part 
                            = vlSelf->__Vfunc_leading_zero32__4708__value;
                        vlSelf->__Vfunc_leading_zero32__4708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4720__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4720__part 
                            = vlSelf->__Vfunc_leading_zero32__4720__value;
                        vlSelf->__Vfunc_leading_zero32__4720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4732__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4732__part 
                            = vlSelf->__Vfunc_leading_zero32__4732__value;
                        vlSelf->__Vfunc_leading_zero32__4732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4744__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4744__part 
                            = vlSelf->__Vfunc_leading_zero32__4744__value;
                        vlSelf->__Vfunc_leading_zero32__4744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4756__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4756__part 
                            = vlSelf->__Vfunc_leading_zero32__4756__value;
                        vlSelf->__Vfunc_leading_zero32__4756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4768__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4768__part 
                            = vlSelf->__Vfunc_leading_zero32__4768__value;
                        vlSelf->__Vfunc_leading_zero32__4768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4780__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4780__part 
                            = vlSelf->__Vfunc_leading_zero32__4780__value;
                        vlSelf->__Vfunc_leading_zero32__4780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4792__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4792__part 
                            = vlSelf->__Vfunc_leading_zero32__4792__value;
                        vlSelf->__Vfunc_leading_zero32__4792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4792__Vfuncout)) 
                             - (IData)(8U))));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__0(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->startup_tb__DOT__mem_rsp_ready = vlSelf->startup_tb__DOT__rst_n;
    vlSelf->startup_tb__DOT__dut__DOT____VdfgTmp_hc9eec2f8__0 
        = ((~ (IData)(vlSelf->startup_tb__DOT__cancel)) 
           & (IData)(vlSelf->startup_tb__DOT__rst_n));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__1(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0U;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a = 0U;
    if (((((((((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
               | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
              | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
             | (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
            | (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
           | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
          | (0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
         | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
        if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                   << 0x10U);
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                   << 0x10U);
        } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__right_q;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__left_q;
        } else if ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0x41000000U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum;
        } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0x358637bdU;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean;
        } else {
            if ((9U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                    = ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                        ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root
                        : ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                            ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal
                            : ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma_q) 
                               << 0x10U)));
            }
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                    ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance
                    : ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                        ? 0x3f800000U : ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                          ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                                             << 0x10U)
                                          : ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u) 
                                             << 0x10U))));
        }
    }
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__44(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__44\n"); );
    // Init
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__63__Vfuncout;
    __Vfunc_unsigned32_to_fp32__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__63__value;
    __Vfunc_unsigned32_to_fp32__63__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__63__shift;
    __Vfunc_unsigned32_to_fp32__63__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__63__normalized;
    __Vfunc_unsigned32_to_fp32__63__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__63__packed_value;
    __Vfunc_unsigned32_to_fp32__63__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__64__Vfuncout;
    __Vfunc_leading_zero32__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__64__value;
    __Vfunc_leading_zero32__64__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__64__part;
    __Vfunc_leading_zero32__64__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__64__count;
    __Vfunc_leading_zero32__64__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__65__Vfuncout;
    __Vfunc_round_pack32__65__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__65__exponent;
    __Vfunc_round_pack32__65__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__65__significand;
    __Vfunc_round_pack32__65__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__65__shifted;
    __Vfunc_round_pack32__65__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__65__rounded;
    __Vfunc_round_pack32__65__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__65__adjusted;
    __Vfunc_round_pack32__65__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__65__biased;
    __Vfunc_round_pack32__65__biased = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__67__Vfuncout;
    __Vfunc_unsigned32_to_fp32__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__67__value;
    __Vfunc_unsigned32_to_fp32__67__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__67__shift;
    __Vfunc_unsigned32_to_fp32__67__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__67__normalized;
    __Vfunc_unsigned32_to_fp32__67__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__67__packed_value;
    __Vfunc_unsigned32_to_fp32__67__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__68__Vfuncout;
    __Vfunc_leading_zero32__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__68__value;
    __Vfunc_leading_zero32__68__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__68__part;
    __Vfunc_leading_zero32__68__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__68__count;
    __Vfunc_leading_zero32__68__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__69__Vfuncout;
    __Vfunc_round_pack32__69__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__69__exponent;
    __Vfunc_round_pack32__69__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__69__significand;
    __Vfunc_round_pack32__69__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__69__shifted;
    __Vfunc_round_pack32__69__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__69__rounded;
    __Vfunc_round_pack32__69__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__69__adjusted;
    __Vfunc_round_pack32__69__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__69__biased;
    __Vfunc_round_pack32__69__biased = 0;
    QData/*32:0*/ __Vfunc_scale32__72__Vfuncout;
    __Vfunc_scale32__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scale32__72__value;
    __Vfunc_scale32__72__value = 0;
    SData/*11:0*/ __Vfunc_scale32__72__power;
    __Vfunc_scale32__72__power = 0;
    IData/*23:0*/ __Vfunc_scale32__72__raw;
    __Vfunc_scale32__72__raw = 0;
    IData/*23:0*/ __Vfunc_scale32__72__normalized;
    __Vfunc_scale32__72__normalized = 0;
    CData/*5:0*/ __Vfunc_scale32__72__shift;
    __Vfunc_scale32__72__shift = 0;
    SData/*11:0*/ __Vfunc_scale32__72__exponent;
    __Vfunc_scale32__72__exponent = 0;
    QData/*32:0*/ __Vfunc_scale32__182__Vfuncout;
    __Vfunc_scale32__182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scale32__182__value;
    __Vfunc_scale32__182__value = 0;
    SData/*11:0*/ __Vfunc_scale32__182__power;
    __Vfunc_scale32__182__power = 0;
    IData/*23:0*/ __Vfunc_scale32__182__raw;
    __Vfunc_scale32__182__raw = 0;
    IData/*23:0*/ __Vfunc_scale32__182__normalized;
    __Vfunc_scale32__182__normalized = 0;
    CData/*5:0*/ __Vfunc_scale32__182__shift;
    __Vfunc_scale32__182__shift = 0;
    SData/*11:0*/ __Vfunc_scale32__182__exponent;
    __Vfunc_scale32__182__exponent = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__359__Vfuncout;
    __Vfunc_awq_lane_shift__359__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__359__lane;
    __Vfunc_awq_lane_shift__359__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__360__Vfuncout;
    __Vfunc_awq_lane_shift__360__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__360__lane;
    __Vfunc_awq_lane_shift__360__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__361__Vfuncout;
    __Vfunc_awq_lane_shift__361__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__361__lane;
    __Vfunc_awq_lane_shift__361__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__362__Vfuncout;
    __Vfunc_awq_lane_shift__362__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__362__lane;
    __Vfunc_awq_lane_shift__362__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__363__Vfuncout;
    __Vfunc_awq_lane_shift__363__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__363__lane;
    __Vfunc_awq_lane_shift__363__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__364__Vfuncout;
    __Vfunc_awq_lane_shift__364__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__364__lane;
    __Vfunc_awq_lane_shift__364__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__365__Vfuncout;
    __Vfunc_awq_lane_shift__365__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__365__lane;
    __Vfunc_awq_lane_shift__365__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__366__Vfuncout;
    __Vfunc_awq_lane_shift__366__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__366__lane;
    __Vfunc_awq_lane_shift__366__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__367__Vfuncout;
    __Vfunc_awq_lane_shift__367__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__367__lane;
    __Vfunc_awq_lane_shift__367__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__368__Vfuncout;
    __Vfunc_awq_lane_shift__368__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__368__lane;
    __Vfunc_awq_lane_shift__368__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__369__Vfuncout;
    __Vfunc_awq_lane_shift__369__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__369__lane;
    __Vfunc_awq_lane_shift__369__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__370__Vfuncout;
    __Vfunc_awq_lane_shift__370__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__370__lane;
    __Vfunc_awq_lane_shift__370__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__371__Vfuncout;
    __Vfunc_awq_lane_shift__371__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__371__lane;
    __Vfunc_awq_lane_shift__371__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__372__Vfuncout;
    __Vfunc_awq_lane_shift__372__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__372__lane;
    __Vfunc_awq_lane_shift__372__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__373__Vfuncout;
    __Vfunc_awq_lane_shift__373__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__373__lane;
    __Vfunc_awq_lane_shift__373__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__374__Vfuncout;
    __Vfunc_awq_lane_shift__374__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__374__lane;
    __Vfunc_awq_lane_shift__374__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__375__Vfuncout;
    __Vfunc_awq_lane_shift__375__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__375__lane;
    __Vfunc_awq_lane_shift__375__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__376__Vfuncout;
    __Vfunc_awq_lane_shift__376__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__376__lane;
    __Vfunc_awq_lane_shift__376__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__377__Vfuncout;
    __Vfunc_awq_lane_shift__377__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__377__lane;
    __Vfunc_awq_lane_shift__377__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__378__Vfuncout;
    __Vfunc_awq_lane_shift__378__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__378__lane;
    __Vfunc_awq_lane_shift__378__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__379__Vfuncout;
    __Vfunc_awq_lane_shift__379__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__379__lane;
    __Vfunc_awq_lane_shift__379__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__380__Vfuncout;
    __Vfunc_awq_lane_shift__380__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__380__lane;
    __Vfunc_awq_lane_shift__380__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__381__Vfuncout;
    __Vfunc_awq_lane_shift__381__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__381__lane;
    __Vfunc_awq_lane_shift__381__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__382__Vfuncout;
    __Vfunc_awq_lane_shift__382__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__382__lane;
    __Vfunc_awq_lane_shift__382__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__383__Vfuncout;
    __Vfunc_awq_lane_shift__383__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__383__lane;
    __Vfunc_awq_lane_shift__383__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__384__Vfuncout;
    __Vfunc_awq_lane_shift__384__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__384__lane;
    __Vfunc_awq_lane_shift__384__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__385__Vfuncout;
    __Vfunc_awq_lane_shift__385__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__385__lane;
    __Vfunc_awq_lane_shift__385__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__386__Vfuncout;
    __Vfunc_awq_lane_shift__386__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__386__lane;
    __Vfunc_awq_lane_shift__386__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__387__Vfuncout;
    __Vfunc_awq_lane_shift__387__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__387__lane;
    __Vfunc_awq_lane_shift__387__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__388__Vfuncout;
    __Vfunc_awq_lane_shift__388__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__388__lane;
    __Vfunc_awq_lane_shift__388__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__389__Vfuncout;
    __Vfunc_awq_lane_shift__389__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__389__lane;
    __Vfunc_awq_lane_shift__389__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__390__Vfuncout;
    __Vfunc_awq_lane_shift__390__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__390__lane;
    __Vfunc_awq_lane_shift__390__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__391__Vfuncout;
    __Vfunc_awq_lane_shift__391__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__391__lane;
    __Vfunc_awq_lane_shift__391__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__392__Vfuncout;
    __Vfunc_awq_lane_shift__392__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__392__lane;
    __Vfunc_awq_lane_shift__392__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__393__Vfuncout;
    __Vfunc_awq_lane_shift__393__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__393__lane;
    __Vfunc_awq_lane_shift__393__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__394__Vfuncout;
    __Vfunc_awq_lane_shift__394__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__394__lane;
    __Vfunc_awq_lane_shift__394__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__395__Vfuncout;
    __Vfunc_awq_lane_shift__395__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__395__lane;
    __Vfunc_awq_lane_shift__395__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__396__Vfuncout;
    __Vfunc_awq_lane_shift__396__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__396__lane;
    __Vfunc_awq_lane_shift__396__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__397__Vfuncout;
    __Vfunc_awq_lane_shift__397__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__397__lane;
    __Vfunc_awq_lane_shift__397__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__398__Vfuncout;
    __Vfunc_awq_lane_shift__398__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__398__lane;
    __Vfunc_awq_lane_shift__398__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__399__Vfuncout;
    __Vfunc_awq_lane_shift__399__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__399__lane;
    __Vfunc_awq_lane_shift__399__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__400__Vfuncout;
    __Vfunc_awq_lane_shift__400__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__400__lane;
    __Vfunc_awq_lane_shift__400__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__401__Vfuncout;
    __Vfunc_awq_lane_shift__401__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__401__lane;
    __Vfunc_awq_lane_shift__401__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__402__Vfuncout;
    __Vfunc_awq_lane_shift__402__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__402__lane;
    __Vfunc_awq_lane_shift__402__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__403__Vfuncout;
    __Vfunc_awq_lane_shift__403__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__403__lane;
    __Vfunc_awq_lane_shift__403__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__404__Vfuncout;
    __Vfunc_awq_lane_shift__404__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__404__lane;
    __Vfunc_awq_lane_shift__404__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__405__Vfuncout;
    __Vfunc_awq_lane_shift__405__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__405__lane;
    __Vfunc_awq_lane_shift__405__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__406__Vfuncout;
    __Vfunc_awq_lane_shift__406__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__406__lane;
    __Vfunc_awq_lane_shift__406__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__407__Vfuncout;
    __Vfunc_awq_lane_shift__407__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__407__lane;
    __Vfunc_awq_lane_shift__407__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__408__Vfuncout;
    __Vfunc_awq_lane_shift__408__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__408__lane;
    __Vfunc_awq_lane_shift__408__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__409__Vfuncout;
    __Vfunc_awq_lane_shift__409__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__409__lane;
    __Vfunc_awq_lane_shift__409__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__410__Vfuncout;
    __Vfunc_awq_lane_shift__410__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__410__lane;
    __Vfunc_awq_lane_shift__410__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__411__Vfuncout;
    __Vfunc_awq_lane_shift__411__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__411__lane;
    __Vfunc_awq_lane_shift__411__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__412__Vfuncout;
    __Vfunc_awq_lane_shift__412__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__412__lane;
    __Vfunc_awq_lane_shift__412__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__413__Vfuncout;
    __Vfunc_awq_lane_shift__413__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__413__lane;
    __Vfunc_awq_lane_shift__413__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__414__Vfuncout;
    __Vfunc_awq_lane_shift__414__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__414__lane;
    __Vfunc_awq_lane_shift__414__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__415__Vfuncout;
    __Vfunc_awq_lane_shift__415__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__415__lane;
    __Vfunc_awq_lane_shift__415__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__416__Vfuncout;
    __Vfunc_awq_lane_shift__416__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__416__lane;
    __Vfunc_awq_lane_shift__416__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__417__Vfuncout;
    __Vfunc_awq_lane_shift__417__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__417__lane;
    __Vfunc_awq_lane_shift__417__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__418__Vfuncout;
    __Vfunc_awq_lane_shift__418__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__418__lane;
    __Vfunc_awq_lane_shift__418__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__419__Vfuncout;
    __Vfunc_awq_lane_shift__419__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__419__lane;
    __Vfunc_awq_lane_shift__419__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__420__Vfuncout;
    __Vfunc_awq_lane_shift__420__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__420__lane;
    __Vfunc_awq_lane_shift__420__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__421__Vfuncout;
    __Vfunc_awq_lane_shift__421__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__421__lane;
    __Vfunc_awq_lane_shift__421__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__422__Vfuncout;
    __Vfunc_awq_lane_shift__422__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__422__lane;
    __Vfunc_awq_lane_shift__422__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__423__Vfuncout;
    __Vfunc_awq_lane_shift__423__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__423__lane;
    __Vfunc_awq_lane_shift__423__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__424__Vfuncout;
    __Vfunc_awq_lane_shift__424__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__424__lane;
    __Vfunc_awq_lane_shift__424__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__425__Vfuncout;
    __Vfunc_awq_lane_shift__425__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__425__lane;
    __Vfunc_awq_lane_shift__425__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__426__Vfuncout;
    __Vfunc_awq_lane_shift__426__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__426__lane;
    __Vfunc_awq_lane_shift__426__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__427__Vfuncout;
    __Vfunc_awq_lane_shift__427__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__427__lane;
    __Vfunc_awq_lane_shift__427__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__428__Vfuncout;
    __Vfunc_awq_lane_shift__428__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__428__lane;
    __Vfunc_awq_lane_shift__428__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__429__Vfuncout;
    __Vfunc_awq_lane_shift__429__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__429__lane;
    __Vfunc_awq_lane_shift__429__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__430__Vfuncout;
    __Vfunc_awq_lane_shift__430__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__430__lane;
    __Vfunc_awq_lane_shift__430__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__431__Vfuncout;
    __Vfunc_awq_lane_shift__431__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__431__lane;
    __Vfunc_awq_lane_shift__431__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__432__Vfuncout;
    __Vfunc_awq_lane_shift__432__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__432__lane;
    __Vfunc_awq_lane_shift__432__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__433__Vfuncout;
    __Vfunc_awq_lane_shift__433__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__433__lane;
    __Vfunc_awq_lane_shift__433__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__434__Vfuncout;
    __Vfunc_awq_lane_shift__434__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__434__lane;
    __Vfunc_awq_lane_shift__434__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__435__Vfuncout;
    __Vfunc_awq_lane_shift__435__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__435__lane;
    __Vfunc_awq_lane_shift__435__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__436__Vfuncout;
    __Vfunc_awq_lane_shift__436__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__436__lane;
    __Vfunc_awq_lane_shift__436__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__437__Vfuncout;
    __Vfunc_awq_lane_shift__437__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__437__lane;
    __Vfunc_awq_lane_shift__437__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__438__Vfuncout;
    __Vfunc_awq_lane_shift__438__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__438__lane;
    __Vfunc_awq_lane_shift__438__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__439__Vfuncout;
    __Vfunc_awq_lane_shift__439__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__439__lane;
    __Vfunc_awq_lane_shift__439__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__440__Vfuncout;
    __Vfunc_awq_lane_shift__440__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__440__lane;
    __Vfunc_awq_lane_shift__440__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__441__Vfuncout;
    __Vfunc_awq_lane_shift__441__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__441__lane;
    __Vfunc_awq_lane_shift__441__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__442__Vfuncout;
    __Vfunc_awq_lane_shift__442__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__442__lane;
    __Vfunc_awq_lane_shift__442__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__443__Vfuncout;
    __Vfunc_awq_lane_shift__443__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__443__lane;
    __Vfunc_awq_lane_shift__443__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__444__Vfuncout;
    __Vfunc_awq_lane_shift__444__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__444__lane;
    __Vfunc_awq_lane_shift__444__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__445__Vfuncout;
    __Vfunc_awq_lane_shift__445__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__445__lane;
    __Vfunc_awq_lane_shift__445__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__446__Vfuncout;
    __Vfunc_awq_lane_shift__446__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__446__lane;
    __Vfunc_awq_lane_shift__446__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__447__Vfuncout;
    __Vfunc_awq_lane_shift__447__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__447__lane;
    __Vfunc_awq_lane_shift__447__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__448__Vfuncout;
    __Vfunc_awq_lane_shift__448__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__448__lane;
    __Vfunc_awq_lane_shift__448__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__449__Vfuncout;
    __Vfunc_awq_lane_shift__449__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__449__lane;
    __Vfunc_awq_lane_shift__449__lane = 0;
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__164__KET____DOT__shift 
        = vlSelf->__Vfunc_awq_lane_shift__358__Vfuncout;
    __Vfunc_awq_lane_shift__359__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__359__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__359__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__165__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__359__Vfuncout;
    __Vfunc_awq_lane_shift__360__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__360__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__360__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__166__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__360__Vfuncout;
    __Vfunc_awq_lane_shift__361__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__361__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__361__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__167__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__361__Vfuncout;
    __Vfunc_awq_lane_shift__362__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__362__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__362__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__168__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__362__Vfuncout;
    __Vfunc_awq_lane_shift__363__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__363__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__363__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__169__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__363__Vfuncout;
    __Vfunc_awq_lane_shift__364__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__364__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__364__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__170__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__364__Vfuncout;
    __Vfunc_awq_lane_shift__365__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__365__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__365__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__171__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__365__Vfuncout;
    __Vfunc_awq_lane_shift__366__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__366__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__366__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__172__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__366__Vfuncout;
    __Vfunc_awq_lane_shift__367__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__367__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__367__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__173__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__367__Vfuncout;
    __Vfunc_awq_lane_shift__368__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__368__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__368__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__174__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__368__Vfuncout;
    __Vfunc_awq_lane_shift__369__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__369__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__369__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__175__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__369__Vfuncout;
    __Vfunc_awq_lane_shift__370__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__370__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__370__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__176__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__370__Vfuncout;
    __Vfunc_awq_lane_shift__371__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__371__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__371__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__177__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__371__Vfuncout;
    __Vfunc_awq_lane_shift__372__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__372__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__372__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__178__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__372__Vfuncout;
    __Vfunc_awq_lane_shift__373__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__373__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__373__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__179__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__373__Vfuncout;
    __Vfunc_awq_lane_shift__374__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__374__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__374__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__180__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__374__Vfuncout;
    __Vfunc_awq_lane_shift__375__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__375__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__375__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__181__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__375__Vfuncout;
    __Vfunc_awq_lane_shift__376__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__376__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__376__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__182__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__376__Vfuncout;
    __Vfunc_awq_lane_shift__377__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__377__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__377__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__183__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__377__Vfuncout;
    __Vfunc_awq_lane_shift__378__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__378__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__378__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__184__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__378__Vfuncout;
    __Vfunc_awq_lane_shift__379__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__379__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__379__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__185__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__379__Vfuncout;
    __Vfunc_awq_lane_shift__380__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__380__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__380__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__186__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__380__Vfuncout;
    __Vfunc_awq_lane_shift__381__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__381__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__381__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__187__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__381__Vfuncout;
    __Vfunc_awq_lane_shift__382__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__382__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__382__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__188__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__382__Vfuncout;
    __Vfunc_awq_lane_shift__383__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__383__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__383__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__189__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__383__Vfuncout;
    __Vfunc_awq_lane_shift__384__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__384__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__384__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__190__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__384__Vfuncout;
    __Vfunc_awq_lane_shift__385__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__385__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__385__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__191__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__385__Vfuncout;
    __Vfunc_awq_lane_shift__386__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__386__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__386__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__192__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__386__Vfuncout;
    __Vfunc_awq_lane_shift__387__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__387__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__387__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__193__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__387__Vfuncout;
    __Vfunc_awq_lane_shift__388__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__388__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__388__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__194__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__388__Vfuncout;
    __Vfunc_awq_lane_shift__389__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__389__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__389__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__195__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__389__Vfuncout;
    __Vfunc_awq_lane_shift__390__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__390__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__390__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__196__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__390__Vfuncout;
    __Vfunc_awq_lane_shift__391__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__391__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__391__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__197__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__391__Vfuncout;
    __Vfunc_awq_lane_shift__392__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__392__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__392__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__198__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__392__Vfuncout;
    __Vfunc_awq_lane_shift__393__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__393__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__393__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__199__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__393__Vfuncout;
    __Vfunc_awq_lane_shift__394__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__394__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__394__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__200__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__394__Vfuncout;
    __Vfunc_awq_lane_shift__395__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__395__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__395__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__201__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__395__Vfuncout;
    __Vfunc_awq_lane_shift__396__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__396__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__396__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__202__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__396__Vfuncout;
    __Vfunc_awq_lane_shift__397__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__397__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__397__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__203__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__397__Vfuncout;
    __Vfunc_awq_lane_shift__398__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__398__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__398__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__204__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__398__Vfuncout;
    __Vfunc_awq_lane_shift__399__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__399__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__399__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__205__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__399__Vfuncout;
    __Vfunc_awq_lane_shift__400__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__400__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__400__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__206__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__400__Vfuncout;
    __Vfunc_awq_lane_shift__401__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__401__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__401__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__207__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__401__Vfuncout;
    __Vfunc_awq_lane_shift__402__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__402__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__402__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__208__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__402__Vfuncout;
    __Vfunc_awq_lane_shift__403__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__403__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__403__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__209__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__403__Vfuncout;
    __Vfunc_awq_lane_shift__404__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__404__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__404__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__210__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__404__Vfuncout;
    __Vfunc_awq_lane_shift__405__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__405__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__211__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__405__Vfuncout;
    __Vfunc_awq_lane_shift__406__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__406__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__406__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__212__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__406__Vfuncout;
    __Vfunc_awq_lane_shift__407__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__407__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__407__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__213__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__407__Vfuncout;
    __Vfunc_awq_lane_shift__408__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__408__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__408__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__214__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__408__Vfuncout;
    __Vfunc_awq_lane_shift__409__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__409__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__409__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__215__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__409__Vfuncout;
    __Vfunc_awq_lane_shift__410__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__410__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__410__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__216__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__410__Vfuncout;
    __Vfunc_awq_lane_shift__411__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__411__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__411__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__217__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__411__Vfuncout;
    __Vfunc_awq_lane_shift__412__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__412__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__412__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__218__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__412__Vfuncout;
    __Vfunc_awq_lane_shift__413__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__413__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__413__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__219__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__413__Vfuncout;
    __Vfunc_awq_lane_shift__414__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__414__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__414__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__220__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__414__Vfuncout;
    __Vfunc_awq_lane_shift__415__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__415__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__415__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__221__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__415__Vfuncout;
    __Vfunc_awq_lane_shift__416__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__416__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__416__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__222__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__416__Vfuncout;
    __Vfunc_awq_lane_shift__417__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__417__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__417__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__223__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__417__Vfuncout;
    __Vfunc_awq_lane_shift__418__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__418__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__418__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__224__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__418__Vfuncout;
    __Vfunc_awq_lane_shift__419__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__419__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__419__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__225__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__419__Vfuncout;
    __Vfunc_awq_lane_shift__420__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__420__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__420__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__226__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__420__Vfuncout;
    __Vfunc_awq_lane_shift__421__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__421__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__421__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__227__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__421__Vfuncout;
    __Vfunc_awq_lane_shift__422__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__422__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__422__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__228__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__422__Vfuncout;
    __Vfunc_awq_lane_shift__423__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__423__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__423__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__229__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__423__Vfuncout;
    __Vfunc_awq_lane_shift__424__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__424__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__424__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__230__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__424__Vfuncout;
    __Vfunc_awq_lane_shift__425__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__425__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__425__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__231__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__425__Vfuncout;
    __Vfunc_awq_lane_shift__426__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__426__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__426__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__232__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__426__Vfuncout;
    __Vfunc_awq_lane_shift__427__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__427__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__427__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__233__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__427__Vfuncout;
    __Vfunc_awq_lane_shift__428__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__428__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__428__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__234__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__428__Vfuncout;
    __Vfunc_awq_lane_shift__429__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__429__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__429__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__235__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__429__Vfuncout;
    __Vfunc_awq_lane_shift__430__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__430__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__430__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__236__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__430__Vfuncout;
    __Vfunc_awq_lane_shift__431__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__431__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__431__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__237__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__431__Vfuncout;
    __Vfunc_awq_lane_shift__432__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__432__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__432__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__238__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__432__Vfuncout;
    __Vfunc_awq_lane_shift__433__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__433__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__433__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__239__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__433__Vfuncout;
    __Vfunc_awq_lane_shift__434__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__434__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__434__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__240__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__434__Vfuncout;
    __Vfunc_awq_lane_shift__435__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__435__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__435__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__241__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__435__Vfuncout;
    __Vfunc_awq_lane_shift__436__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__436__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__436__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__242__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__436__Vfuncout;
    __Vfunc_awq_lane_shift__437__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__437__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__437__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__243__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__437__Vfuncout;
    __Vfunc_awq_lane_shift__438__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__438__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__438__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__244__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__438__Vfuncout;
    __Vfunc_awq_lane_shift__439__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__439__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__439__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__245__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__439__Vfuncout;
    __Vfunc_awq_lane_shift__440__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__440__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__440__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__246__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__440__Vfuncout;
    __Vfunc_awq_lane_shift__441__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__441__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__441__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__247__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__441__Vfuncout;
    __Vfunc_awq_lane_shift__442__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__442__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__442__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__248__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__442__Vfuncout;
    __Vfunc_awq_lane_shift__443__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__443__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__443__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__249__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__443__Vfuncout;
    __Vfunc_awq_lane_shift__444__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__444__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__444__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__250__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__444__Vfuncout;
    __Vfunc_awq_lane_shift__445__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__445__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__445__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__251__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__445__Vfuncout;
    __Vfunc_awq_lane_shift__446__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__446__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__446__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__252__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__446__Vfuncout;
    __Vfunc_awq_lane_shift__447__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__447__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__447__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__253__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__447__Vfuncout;
    __Vfunc_awq_lane_shift__448__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__448__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__448__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__254__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__448__Vfuncout;
    __Vfunc_awq_lane_shift__449__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__449__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__449__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__255__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__449__Vfuncout;
    __Vfunc_scale32__182__power = (0xfffU & (- (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent)));
    __Vfunc_scale32__182__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__clamped;
    __Vfunc_scale32__182__raw = (((0U != (0xffU & (__Vfunc_scale32__182__value 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & __Vfunc_scale32__182__value));
    __Vfunc_scale32__182__shift = ((0U == __Vfunc_scale32__182__raw)
                                    ? 0U : (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__183__value 
                            = __Vfunc_scale32__182__raw;
                        vlSelf->__Vfunc_leading_zero32__183__part 
                            = vlSelf->__Vfunc_leading_zero32__183__value;
                        vlSelf->__Vfunc_leading_zero32__183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__183__count)));
                            vlSelf->__Vfunc_leading_zero32__183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__183__count)));
                            vlSelf->__Vfunc_leading_zero32__183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__183__count)));
                            vlSelf->__Vfunc_leading_zero32__183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__183__count)));
                            vlSelf->__Vfunc_leading_zero32__183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__183__Vfuncout)) 
                                             - (IData)(8U))));
    __Vfunc_scale32__182__normalized = (0xffffffU & 
                                        VL_SHIFTL_III(24,24,6, __Vfunc_scale32__182__raw, (IData)(__Vfunc_scale32__182__shift)));
    __Vfunc_scale32__182__exponent = (0xfffU & ((((0U 
                                                   == 
                                                   (0xffU 
                                                    & (__Vfunc_scale32__182__value 
                                                       >> 0x17U)))
                                                   ? 0xf82U
                                                   : 
                                                  ((0xffU 
                                                    & (__Vfunc_scale32__182__value 
                                                       >> 0x17U)) 
                                                   - (IData)(0x7fU))) 
                                                 - (IData)(__Vfunc_scale32__182__shift)) 
                                                + (IData)(__Vfunc_scale32__182__power)));
    __Vfunc_scale32__182__Vfuncout = (([&]() {
                vlSelf->__Vfunc_fp32_invalid__184__value 
                    = __Vfunc_scale32__182__value;
                vlSelf->__Vfunc_fp32_invalid__184__Vfuncout 
                    = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__184__value 
                                          >> 0x17U)));
            }(), (IData)(vlSelf->__Vfunc_fp32_invalid__184__Vfuncout))
                                       ? 0x100000000ULL
                                       : ([&]() {
                vlSelf->__Vfunc_round_pack32__185__significand 
                    = (__Vfunc_scale32__182__normalized 
                       << 3U);
                vlSelf->__Vfunc_round_pack32__185__exponent 
                    = __Vfunc_scale32__182__exponent;
                vlSelf->__Vfunc_round_pack32__185__negative 
                    = (__Vfunc_scale32__182__value 
                       >> 0x1fU);
                vlSelf->__Vfunc_round_pack32__185__adjusted 
                    = vlSelf->__Vfunc_round_pack32__185__exponent;
                vlSelf->__Vfunc_round_pack32__185__shifted 
                    = vlSelf->__Vfunc_round_pack32__185__significand;
                if (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->__Vfunc_round_pack32__185__exponent))) {
                    vlSelf->__Vfunc_shift_jam27__186__distance 
                        = (0xfffU & ((IData)(0xf82U) 
                                     - (IData)(vlSelf->__Vfunc_round_pack32__185__exponent)));
                    vlSelf->__Vfunc_shift_jam27__186__value 
                        = vlSelf->__Vfunc_round_pack32__185__significand;
                    vlSelf->__Vfunc_round_pack32__185__adjusted = 0xf82U;
                    if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__186__distance))) {
                        vlSelf->__Vfunc_shift_jam27__186__Vfuncout 
                            = vlSelf->__Vfunc_shift_jam27__186__value;
                    } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__186__distance))) {
                        vlSelf->__Vfunc_shift_jam27__186__Vfuncout 
                            = (0U != vlSelf->__Vfunc_shift_jam27__186__value);
                    } else {
                        vlSelf->__Vfunc_shift_jam27__186__shifted 
                            = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__186__value, (IData)(vlSelf->__Vfunc_shift_jam27__186__distance)));
                        vlSelf->__Vfunc_shift_jam27__186__discarded 
                            = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__186__value, 
                                                          (0xfffU 
                                                           & ((IData)(0x1bU) 
                                                              - (IData)(vlSelf->__Vfunc_shift_jam27__186__distance)))));
                        vlSelf->__Vfunc_shift_jam27__186__Vfuncout 
                            = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__186__shifted) 
                               | (1U & (vlSelf->__Vfunc_shift_jam27__186__shifted 
                                        | (0U != vlSelf->__Vfunc_shift_jam27__186__discarded))));
                    }
                    vlSelf->__Vfunc_round_pack32__185__shifted 
                        = vlSelf->__Vfunc_shift_jam27__186__Vfuncout;
                }
                vlSelf->__Vfunc_round_pack32__185__rounded 
                    = (0x1ffffffU & ((0xffffffU & (vlSelf->__Vfunc_round_pack32__185__shifted 
                                                   >> 3U)) 
                                     + (1U & ((vlSelf->__Vfunc_round_pack32__185__shifted 
                                               >> 2U) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xbU 
                                                          & vlSelf->__Vfunc_round_pack32__185__shifted)))))));
                if ((0x1000000U & vlSelf->__Vfunc_round_pack32__185__rounded)) {
                    vlSelf->__Vfunc_round_pack32__185__rounded 
                        = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__185__rounded, 1U));
                    vlSelf->__Vfunc_round_pack32__185__adjusted 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__185__adjusted)));
                }
                vlSelf->__Vfunc_round_pack32__185__biased = 0U;
                if ((0x800000U & vlSelf->__Vfunc_round_pack32__185__rounded)) {
                    vlSelf->__Vfunc_round_pack32__185__biased 
                        = (0xffU & ((IData)(0x7fU) 
                                    + (IData)(vlSelf->__Vfunc_round_pack32__185__adjusted)));
                }
                vlSelf->__Vfunc_round_pack32__185__Vfuncout 
                    = (((0U == vlSelf->__Vfunc_round_pack32__185__significand) 
                        | (0U == vlSelf->__Vfunc_round_pack32__185__rounded))
                        ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__185__negative)) 
                           << 0x1fU) : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__185__adjusted))
                                         ? 0x100000000ULL
                                         : (((QData)((IData)(vlSelf->__Vfunc_round_pack32__185__negative)) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->__Vfunc_round_pack32__185__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & vlSelf->__Vfunc_round_pack32__185__rounded)))))));
            }(), vlSelf->__Vfunc_round_pack32__185__Vfuncout));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__scaled 
        = __Vfunc_scale32__182__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large_exponent 
        = ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0))
            ? 0xf82U : (0xfffU & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0) 
                                  - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent;
    if ((0x100U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__remaining)) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_groups = 0x20U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes = 0x100U;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_groups 
            = (0x3fU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__remaining 
                        >> 3U));
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes 
            = (0x1ffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__remaining);
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic_state 
        = ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
           | ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
              | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))));
    __Vfunc_unsigned32_to_fp32__67__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order;
    __Vfunc_leading_zero32__68__value = __Vfunc_unsigned32_to_fp32__67__value;
    __Vfunc_leading_zero32__68__part = __Vfunc_leading_zero32__68__value;
    __Vfunc_leading_zero32__68__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__68__part >> 0x10U))) {
        __Vfunc_leading_zero32__68__count = (0x3fU 
                                             & ((IData)(0x10U) 
                                                + (IData)(__Vfunc_leading_zero32__68__count)));
        __Vfunc_leading_zero32__68__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__68__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__68__part >> 0x18U))) {
        __Vfunc_leading_zero32__68__count = (0x3fU 
                                             & ((IData)(8U) 
                                                + (IData)(__Vfunc_leading_zero32__68__count)));
        __Vfunc_leading_zero32__68__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__68__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__68__part >> 0x1cU))) {
        __Vfunc_leading_zero32__68__count = (0x3fU 
                                             & ((IData)(4U) 
                                                + (IData)(__Vfunc_leading_zero32__68__count)));
        __Vfunc_leading_zero32__68__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__68__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__68__part >> 0x1eU))) {
        __Vfunc_leading_zero32__68__count = (0x3fU 
                                             & ((IData)(2U) 
                                                + (IData)(__Vfunc_leading_zero32__68__count)));
        __Vfunc_leading_zero32__68__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__68__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__68__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__68__count = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_leading_zero32__68__count)));
    }
    __Vfunc_leading_zero32__68__Vfuncout = ((0U == __Vfunc_leading_zero32__68__value)
                                             ? 0x20U
                                             : (IData)(__Vfunc_leading_zero32__68__count));
    __Vfunc_unsigned32_to_fp32__67__shift = __Vfunc_leading_zero32__68__Vfuncout;
    __Vfunc_unsigned32_to_fp32__67__normalized = VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__67__value, (IData)(__Vfunc_unsigned32_to_fp32__67__shift));
    __Vfunc_round_pack32__69__significand = ((0x7fffffeU 
                                              & (__Vfunc_unsigned32_to_fp32__67__normalized 
                                                 >> 5U)) 
                                             | (0U 
                                                != 
                                                (0x3fU 
                                                 & __Vfunc_unsigned32_to_fp32__67__normalized)));
    __Vfunc_round_pack32__69__exponent = (0xfffU & 
                                          ((IData)(0x1fU) 
                                           - (IData)(__Vfunc_unsigned32_to_fp32__67__shift)));
    __Vfunc_round_pack32__69__adjusted = __Vfunc_round_pack32__69__exponent;
    __Vfunc_round_pack32__69__shifted = __Vfunc_round_pack32__69__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__69__exponent))) {
        vlSelf->__Vfunc_shift_jam27__70__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__69__exponent)));
        vlSelf->__Vfunc_shift_jam27__70__value = __Vfunc_round_pack32__69__significand;
        __Vfunc_round_pack32__69__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__70__distance))) {
            vlSelf->__Vfunc_shift_jam27__70__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__70__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__70__distance))) {
            vlSelf->__Vfunc_shift_jam27__70__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__70__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__70__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__70__value, (IData)(vlSelf->__Vfunc_shift_jam27__70__distance)));
            vlSelf->__Vfunc_shift_jam27__70__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__70__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__70__distance)))));
            vlSelf->__Vfunc_shift_jam27__70__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__70__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__70__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__70__discarded))));
        }
        __Vfunc_round_pack32__69__shifted = vlSelf->__Vfunc_shift_jam27__70__Vfuncout;
    }
    __Vfunc_round_pack32__69__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__69__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__69__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__69__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__69__rounded)) {
        __Vfunc_round_pack32__69__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__69__rounded, 1U));
        __Vfunc_round_pack32__69__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__69__adjusted)));
    }
    __Vfunc_round_pack32__69__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__69__rounded)) {
        __Vfunc_round_pack32__69__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__69__adjusted)));
    }
    __Vfunc_round_pack32__69__Vfuncout = (((0U == __Vfunc_round_pack32__69__significand) 
                                           | (0U == __Vfunc_round_pack32__69__rounded))
                                           ? 0ULL : 
                                          (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__69__adjusted))
                                            ? 0x100000000ULL
                                            : (QData)((IData)(
                                                              (((IData)(__Vfunc_round_pack32__69__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & __Vfunc_round_pack32__69__rounded))))));
    __Vfunc_unsigned32_to_fp32__67__packed_value = __Vfunc_round_pack32__69__Vfuncout;
    __Vfunc_unsigned32_to_fp32__67__Vfuncout = ((0U 
                                                 == __Vfunc_unsigned32_to_fp32__67__value)
                                                 ? 0U
                                                 : (IData)(__Vfunc_unsigned32_to_fp32__67__packed_value));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order32 
        = __Vfunc_unsigned32_to_fp32__67__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__clamped 
        = ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum 
            >> 0x1fU) ? 0U : (([&]() {
                    vlSelf->__Vfunc_fp32_greater__71__a 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum;
                    vlSelf->__Vfunc_fp32_greater__71__Vfuncout 
                        = (1U & ((vlSelf->__Vfunc_fp32_greater__71__a 
                                  >> 0x1fU) ? (~ (vlSelf->__Vfunc_fp32_greater__71__a 
                                                  >> 0x1fU))
                                  : ((vlSelf->__Vfunc_fp32_greater__71__a 
                                      >> 0x1fU) ? (0x3f800000U 
                                                   > 
                                                   (0x7fffffffU 
                                                    & vlSelf->__Vfunc_fp32_greater__71__a))
                                      : (0x3f800000U 
                                         < (0x7fffffffU 
                                            & vlSelf->__Vfunc_fp32_greater__71__a)))));
                }(), (IData)(vlSelf->__Vfunc_fp32_greater__71__Vfuncout))
                               ? 0x3f800000U : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum));
    __Vfunc_unsigned32_to_fp32__63__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent;
    __Vfunc_leading_zero32__64__value = __Vfunc_unsigned32_to_fp32__63__value;
    __Vfunc_leading_zero32__64__part = __Vfunc_leading_zero32__64__value;
    __Vfunc_leading_zero32__64__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__64__part >> 0x10U))) {
        __Vfunc_leading_zero32__64__count = (0x3fU 
                                             & ((IData)(0x10U) 
                                                + (IData)(__Vfunc_leading_zero32__64__count)));
        __Vfunc_leading_zero32__64__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__64__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__64__part >> 0x18U))) {
        __Vfunc_leading_zero32__64__count = (0x3fU 
                                             & ((IData)(8U) 
                                                + (IData)(__Vfunc_leading_zero32__64__count)));
        __Vfunc_leading_zero32__64__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__64__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__64__part >> 0x1cU))) {
        __Vfunc_leading_zero32__64__count = (0x3fU 
                                             & ((IData)(4U) 
                                                + (IData)(__Vfunc_leading_zero32__64__count)));
        __Vfunc_leading_zero32__64__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__64__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__64__part >> 0x1eU))) {
        __Vfunc_leading_zero32__64__count = (0x3fU 
                                             & ((IData)(2U) 
                                                + (IData)(__Vfunc_leading_zero32__64__count)));
        __Vfunc_leading_zero32__64__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__64__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__64__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__64__count = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_leading_zero32__64__count)));
    }
    __Vfunc_leading_zero32__64__Vfuncout = ((0U == __Vfunc_leading_zero32__64__value)
                                             ? 0x20U
                                             : (IData)(__Vfunc_leading_zero32__64__count));
    __Vfunc_unsigned32_to_fp32__63__shift = __Vfunc_leading_zero32__64__Vfuncout;
    __Vfunc_unsigned32_to_fp32__63__normalized = VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__63__value, (IData)(__Vfunc_unsigned32_to_fp32__63__shift));
    __Vfunc_round_pack32__65__significand = ((0x7fffffeU 
                                              & (__Vfunc_unsigned32_to_fp32__63__normalized 
                                                 >> 5U)) 
                                             | (0U 
                                                != 
                                                (0x3fU 
                                                 & __Vfunc_unsigned32_to_fp32__63__normalized)));
    __Vfunc_round_pack32__65__exponent = (0xfffU & 
                                          ((IData)(0x1fU) 
                                           - (IData)(__Vfunc_unsigned32_to_fp32__63__shift)));
    __Vfunc_round_pack32__65__adjusted = __Vfunc_round_pack32__65__exponent;
    __Vfunc_round_pack32__65__shifted = __Vfunc_round_pack32__65__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__65__exponent))) {
        vlSelf->__Vfunc_shift_jam27__66__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__65__exponent)));
        vlSelf->__Vfunc_shift_jam27__66__value = __Vfunc_round_pack32__65__significand;
        __Vfunc_round_pack32__65__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__66__distance))) {
            vlSelf->__Vfunc_shift_jam27__66__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__66__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__66__distance))) {
            vlSelf->__Vfunc_shift_jam27__66__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__66__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__66__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__66__value, (IData)(vlSelf->__Vfunc_shift_jam27__66__distance)));
            vlSelf->__Vfunc_shift_jam27__66__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__66__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__66__distance)))));
            vlSelf->__Vfunc_shift_jam27__66__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__66__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__66__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__66__discarded))));
        }
        __Vfunc_round_pack32__65__shifted = vlSelf->__Vfunc_shift_jam27__66__Vfuncout;
    }
    __Vfunc_round_pack32__65__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__65__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__65__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__65__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__65__rounded)) {
        __Vfunc_round_pack32__65__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__65__rounded, 1U));
        __Vfunc_round_pack32__65__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__65__adjusted)));
    }
    __Vfunc_round_pack32__65__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__65__rounded)) {
        __Vfunc_round_pack32__65__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__65__adjusted)));
    }
    __Vfunc_round_pack32__65__Vfuncout = (((0U == __Vfunc_round_pack32__65__significand) 
                                           | (0U == __Vfunc_round_pack32__65__rounded))
                                           ? 0ULL : 
                                          (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__65__adjusted))
                                            ? 0x100000000ULL
                                            : (QData)((IData)(
                                                              (((IData)(__Vfunc_round_pack32__65__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & __Vfunc_round_pack32__65__rounded))))));
    __Vfunc_unsigned32_to_fp32__63__packed_value = __Vfunc_round_pack32__65__Vfuncout;
    __Vfunc_unsigned32_to_fp32__63__Vfuncout = ((0U 
                                                 == __Vfunc_unsigned32_to_fp32__63__value)
                                                 ? 0U
                                                 : (IData)(__Vfunc_unsigned32_to_fp32__63__packed_value));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent32 
        = __Vfunc_unsigned32_to_fp32__63__Vfuncout;
    __Vfunc_scale32__72__power = (0xfffU & (- (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent)));
    __Vfunc_scale32__72__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__clamped;
    __Vfunc_scale32__72__raw = (((0U != (0xffU & (__Vfunc_scale32__72__value 
                                                  >> 0x17U))) 
                                 << 0x17U) | (0x7fffffU 
                                              & __Vfunc_scale32__72__value));
    __Vfunc_scale32__72__shift = ((0U == __Vfunc_scale32__72__raw)
                                   ? 0U : (0x3fU & 
                                           (([&]() {
                        vlSelf->__Vfunc_leading_zero32__73__value 
                            = __Vfunc_scale32__72__raw;
                        vlSelf->__Vfunc_leading_zero32__73__part 
                            = vlSelf->__Vfunc_leading_zero32__73__value;
                        vlSelf->__Vfunc_leading_zero32__73__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__73__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__73__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__73__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__73__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__73__Vfuncout)) 
                                            - (IData)(8U))));
    __Vfunc_scale32__72__normalized = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,6, __Vfunc_scale32__72__raw, (IData)(__Vfunc_scale32__72__shift)));
    __Vfunc_scale32__72__exponent = (0xfffU & ((((0U 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_scale32__72__value 
                                                      >> 0x17U)))
                                                  ? 0xf82U
                                                  : 
                                                 ((0xffU 
                                                   & (__Vfunc_scale32__72__value 
                                                      >> 0x17U)) 
                                                  - (IData)(0x7fU))) 
                                                - (IData)(__Vfunc_scale32__72__shift)) 
                                               + (IData)(__Vfunc_scale32__72__power)));
    __Vfunc_scale32__72__Vfuncout = (([&]() {
                vlSelf->__Vfunc_fp32_invalid__74__value 
                    = __Vfunc_scale32__72__value;
                vlSelf->__Vfunc_fp32_invalid__74__Vfuncout 
                    = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__74__value 
                                          >> 0x17U)));
            }(), (IData)(vlSelf->__Vfunc_fp32_invalid__74__Vfuncout))
                                      ? 0x100000000ULL
                                      : ([&]() {
                vlSelf->__Vfunc_round_pack32__75__significand 
                    = (__Vfunc_scale32__72__normalized 
                       << 3U);
                vlSelf->__Vfunc_round_pack32__75__exponent 
                    = __Vfunc_scale32__72__exponent;
                vlSelf->__Vfunc_round_pack32__75__negative 
                    = (__Vfunc_scale32__72__value >> 0x1fU);
                vlSelf->__Vfunc_round_pack32__75__adjusted 
                    = vlSelf->__Vfunc_round_pack32__75__exponent;
                vlSelf->__Vfunc_round_pack32__75__shifted 
                    = vlSelf->__Vfunc_round_pack32__75__significand;
                if (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->__Vfunc_round_pack32__75__exponent))) {
                    vlSelf->__Vfunc_shift_jam27__76__distance 
                        = (0xfffU & ((IData)(0xf82U) 
                                     - (IData)(vlSelf->__Vfunc_round_pack32__75__exponent)));
                    vlSelf->__Vfunc_shift_jam27__76__value 
                        = vlSelf->__Vfunc_round_pack32__75__significand;
                    vlSelf->__Vfunc_round_pack32__75__adjusted = 0xf82U;
                    if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__76__distance))) {
                        vlSelf->__Vfunc_shift_jam27__76__Vfuncout 
                            = vlSelf->__Vfunc_shift_jam27__76__value;
                    } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__76__distance))) {
                        vlSelf->__Vfunc_shift_jam27__76__Vfuncout 
                            = (0U != vlSelf->__Vfunc_shift_jam27__76__value);
                    } else {
                        vlSelf->__Vfunc_shift_jam27__76__shifted 
                            = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__76__value, (IData)(vlSelf->__Vfunc_shift_jam27__76__distance)));
                        vlSelf->__Vfunc_shift_jam27__76__discarded 
                            = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__76__value, 
                                                          (0xfffU 
                                                           & ((IData)(0x1bU) 
                                                              - (IData)(vlSelf->__Vfunc_shift_jam27__76__distance)))));
                        vlSelf->__Vfunc_shift_jam27__76__Vfuncout 
                            = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__76__shifted) 
                               | (1U & (vlSelf->__Vfunc_shift_jam27__76__shifted 
                                        | (0U != vlSelf->__Vfunc_shift_jam27__76__discarded))));
                    }
                    vlSelf->__Vfunc_round_pack32__75__shifted 
                        = vlSelf->__Vfunc_shift_jam27__76__Vfuncout;
                }
                vlSelf->__Vfunc_round_pack32__75__rounded 
                    = (0x1ffffffU & ((0xffffffU & (vlSelf->__Vfunc_round_pack32__75__shifted 
                                                   >> 3U)) 
                                     + (1U & ((vlSelf->__Vfunc_round_pack32__75__shifted 
                                               >> 2U) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xbU 
                                                          & vlSelf->__Vfunc_round_pack32__75__shifted)))))));
                if ((0x1000000U & vlSelf->__Vfunc_round_pack32__75__rounded)) {
                    vlSelf->__Vfunc_round_pack32__75__rounded 
                        = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__75__rounded, 1U));
                    vlSelf->__Vfunc_round_pack32__75__adjusted 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__75__adjusted)));
                }
                vlSelf->__Vfunc_round_pack32__75__biased = 0U;
                if ((0x800000U & vlSelf->__Vfunc_round_pack32__75__rounded)) {
                    vlSelf->__Vfunc_round_pack32__75__biased 
                        = (0xffU & ((IData)(0x7fU) 
                                    + (IData)(vlSelf->__Vfunc_round_pack32__75__adjusted)));
                }
                vlSelf->__Vfunc_round_pack32__75__Vfuncout 
                    = (((0U == vlSelf->__Vfunc_round_pack32__75__significand) 
                        | (0U == vlSelf->__Vfunc_round_pack32__75__rounded))
                        ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__75__negative)) 
                           << 0x1fU) : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__75__adjusted))
                                         ? 0x100000000ULL
                                         : (((QData)((IData)(vlSelf->__Vfunc_round_pack32__75__negative)) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->__Vfunc_round_pack32__75__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & vlSelf->__Vfunc_round_pack32__75__rounded)))))));
            }(), vlSelf->__Vfunc_round_pack32__75__Vfuncout));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__scaled 
        = __Vfunc_scale32__72__Vfuncout;
}
