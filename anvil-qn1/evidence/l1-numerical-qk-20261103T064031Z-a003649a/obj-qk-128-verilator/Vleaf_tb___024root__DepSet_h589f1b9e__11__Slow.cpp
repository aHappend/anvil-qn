// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__11(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__11\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2723__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2723__part 
                            = vlSelf->__Vfunc_leading_zero32__2723__value;
                        vlSelf->__Vfunc_leading_zero32__2723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2735__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2735__part 
                            = vlSelf->__Vfunc_leading_zero32__2735__value;
                        vlSelf->__Vfunc_leading_zero32__2735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2747__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2747__part 
                            = vlSelf->__Vfunc_leading_zero32__2747__value;
                        vlSelf->__Vfunc_leading_zero32__2747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2759__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2759__part 
                            = vlSelf->__Vfunc_leading_zero32__2759__value;
                        vlSelf->__Vfunc_leading_zero32__2759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2771__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2771__part 
                            = vlSelf->__Vfunc_leading_zero32__2771__value;
                        vlSelf->__Vfunc_leading_zero32__2771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2783__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2783__part 
                            = vlSelf->__Vfunc_leading_zero32__2783__value;
                        vlSelf->__Vfunc_leading_zero32__2783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2795__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2795__part 
                            = vlSelf->__Vfunc_leading_zero32__2795__value;
                        vlSelf->__Vfunc_leading_zero32__2795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2807__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2807__part 
                            = vlSelf->__Vfunc_leading_zero32__2807__value;
                        vlSelf->__Vfunc_leading_zero32__2807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2819__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2819__part 
                            = vlSelf->__Vfunc_leading_zero32__2819__value;
                        vlSelf->__Vfunc_leading_zero32__2819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2831__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2831__part 
                            = vlSelf->__Vfunc_leading_zero32__2831__value;
                        vlSelf->__Vfunc_leading_zero32__2831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2843__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2843__part 
                            = vlSelf->__Vfunc_leading_zero32__2843__value;
                        vlSelf->__Vfunc_leading_zero32__2843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2855__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2855__part 
                            = vlSelf->__Vfunc_leading_zero32__2855__value;
                        vlSelf->__Vfunc_leading_zero32__2855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2867__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2867__part 
                            = vlSelf->__Vfunc_leading_zero32__2867__value;
                        vlSelf->__Vfunc_leading_zero32__2867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2879__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2879__part 
                            = vlSelf->__Vfunc_leading_zero32__2879__value;
                        vlSelf->__Vfunc_leading_zero32__2879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2891__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2891__part 
                            = vlSelf->__Vfunc_leading_zero32__2891__value;
                        vlSelf->__Vfunc_leading_zero32__2891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2903__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2903__part 
                            = vlSelf->__Vfunc_leading_zero32__2903__value;
                        vlSelf->__Vfunc_leading_zero32__2903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2915__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2915__part 
                            = vlSelf->__Vfunc_leading_zero32__2915__value;
                        vlSelf->__Vfunc_leading_zero32__2915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2927__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2927__part 
                            = vlSelf->__Vfunc_leading_zero32__2927__value;
                        vlSelf->__Vfunc_leading_zero32__2927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2939__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2939__part 
                            = vlSelf->__Vfunc_leading_zero32__2939__value;
                        vlSelf->__Vfunc_leading_zero32__2939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2951__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2951__part 
                            = vlSelf->__Vfunc_leading_zero32__2951__value;
                        vlSelf->__Vfunc_leading_zero32__2951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2963__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2963__part 
                            = vlSelf->__Vfunc_leading_zero32__2963__value;
                        vlSelf->__Vfunc_leading_zero32__2963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2975__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2975__part 
                            = vlSelf->__Vfunc_leading_zero32__2975__value;
                        vlSelf->__Vfunc_leading_zero32__2975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2987__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2987__part 
                            = vlSelf->__Vfunc_leading_zero32__2987__value;
                        vlSelf->__Vfunc_leading_zero32__2987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2999__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2999__part 
                            = vlSelf->__Vfunc_leading_zero32__2999__value;
                        vlSelf->__Vfunc_leading_zero32__2999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3011__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3011__part 
                            = vlSelf->__Vfunc_leading_zero32__3011__value;
                        vlSelf->__Vfunc_leading_zero32__3011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3023__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3023__part 
                            = vlSelf->__Vfunc_leading_zero32__3023__value;
                        vlSelf->__Vfunc_leading_zero32__3023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3035__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3035__part 
                            = vlSelf->__Vfunc_leading_zero32__3035__value;
                        vlSelf->__Vfunc_leading_zero32__3035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3047__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3047__part 
                            = vlSelf->__Vfunc_leading_zero32__3047__value;
                        vlSelf->__Vfunc_leading_zero32__3047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3059__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3059__part 
                            = vlSelf->__Vfunc_leading_zero32__3059__value;
                        vlSelf->__Vfunc_leading_zero32__3059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3071__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3071__part 
                            = vlSelf->__Vfunc_leading_zero32__3071__value;
                        vlSelf->__Vfunc_leading_zero32__3071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3083__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3083__part 
                            = vlSelf->__Vfunc_leading_zero32__3083__value;
                        vlSelf->__Vfunc_leading_zero32__3083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3095__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3095__part 
                            = vlSelf->__Vfunc_leading_zero32__3095__value;
                        vlSelf->__Vfunc_leading_zero32__3095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3107__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3107__part 
                            = vlSelf->__Vfunc_leading_zero32__3107__value;
                        vlSelf->__Vfunc_leading_zero32__3107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3119__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3119__part 
                            = vlSelf->__Vfunc_leading_zero32__3119__value;
                        vlSelf->__Vfunc_leading_zero32__3119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3131__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3131__part 
                            = vlSelf->__Vfunc_leading_zero32__3131__value;
                        vlSelf->__Vfunc_leading_zero32__3131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3143__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3143__part 
                            = vlSelf->__Vfunc_leading_zero32__3143__value;
                        vlSelf->__Vfunc_leading_zero32__3143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3155__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3155__part 
                            = vlSelf->__Vfunc_leading_zero32__3155__value;
                        vlSelf->__Vfunc_leading_zero32__3155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3167__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3167__part 
                            = vlSelf->__Vfunc_leading_zero32__3167__value;
                        vlSelf->__Vfunc_leading_zero32__3167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3179__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3179__part 
                            = vlSelf->__Vfunc_leading_zero32__3179__value;
                        vlSelf->__Vfunc_leading_zero32__3179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3191__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3191__part 
                            = vlSelf->__Vfunc_leading_zero32__3191__value;
                        vlSelf->__Vfunc_leading_zero32__3191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3203__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3203__part 
                            = vlSelf->__Vfunc_leading_zero32__3203__value;
                        vlSelf->__Vfunc_leading_zero32__3203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3215__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3215__part 
                            = vlSelf->__Vfunc_leading_zero32__3215__value;
                        vlSelf->__Vfunc_leading_zero32__3215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3227__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3227__part 
                            = vlSelf->__Vfunc_leading_zero32__3227__value;
                        vlSelf->__Vfunc_leading_zero32__3227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3239__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3239__part 
                            = vlSelf->__Vfunc_leading_zero32__3239__value;
                        vlSelf->__Vfunc_leading_zero32__3239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3251__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3251__part 
                            = vlSelf->__Vfunc_leading_zero32__3251__value;
                        vlSelf->__Vfunc_leading_zero32__3251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3263__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3263__part 
                            = vlSelf->__Vfunc_leading_zero32__3263__value;
                        vlSelf->__Vfunc_leading_zero32__3263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3275__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3275__part 
                            = vlSelf->__Vfunc_leading_zero32__3275__value;
                        vlSelf->__Vfunc_leading_zero32__3275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3287__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3287__part 
                            = vlSelf->__Vfunc_leading_zero32__3287__value;
                        vlSelf->__Vfunc_leading_zero32__3287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3299__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3299__part 
                            = vlSelf->__Vfunc_leading_zero32__3299__value;
                        vlSelf->__Vfunc_leading_zero32__3299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3311__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3311__part 
                            = vlSelf->__Vfunc_leading_zero32__3311__value;
                        vlSelf->__Vfunc_leading_zero32__3311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3323__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3323__part 
                            = vlSelf->__Vfunc_leading_zero32__3323__value;
                        vlSelf->__Vfunc_leading_zero32__3323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3335__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3335__part 
                            = vlSelf->__Vfunc_leading_zero32__3335__value;
                        vlSelf->__Vfunc_leading_zero32__3335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3347__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3347__part 
                            = vlSelf->__Vfunc_leading_zero32__3347__value;
                        vlSelf->__Vfunc_leading_zero32__3347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3359__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3359__part 
                            = vlSelf->__Vfunc_leading_zero32__3359__value;
                        vlSelf->__Vfunc_leading_zero32__3359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3371__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3371__part 
                            = vlSelf->__Vfunc_leading_zero32__3371__value;
                        vlSelf->__Vfunc_leading_zero32__3371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3383__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3383__part 
                            = vlSelf->__Vfunc_leading_zero32__3383__value;
                        vlSelf->__Vfunc_leading_zero32__3383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3395__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3395__part 
                            = vlSelf->__Vfunc_leading_zero32__3395__value;
                        vlSelf->__Vfunc_leading_zero32__3395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3407__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3407__part 
                            = vlSelf->__Vfunc_leading_zero32__3407__value;
                        vlSelf->__Vfunc_leading_zero32__3407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3419__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3419__part 
                            = vlSelf->__Vfunc_leading_zero32__3419__value;
                        vlSelf->__Vfunc_leading_zero32__3419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3431__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3431__part 
                            = vlSelf->__Vfunc_leading_zero32__3431__value;
                        vlSelf->__Vfunc_leading_zero32__3431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3443__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3443__part 
                            = vlSelf->__Vfunc_leading_zero32__3443__value;
                        vlSelf->__Vfunc_leading_zero32__3443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3455__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3455__part 
                            = vlSelf->__Vfunc_leading_zero32__3455__value;
                        vlSelf->__Vfunc_leading_zero32__3455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3467__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3467__part 
                            = vlSelf->__Vfunc_leading_zero32__3467__value;
                        vlSelf->__Vfunc_leading_zero32__3467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3479__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3479__part 
                            = vlSelf->__Vfunc_leading_zero32__3479__value;
                        vlSelf->__Vfunc_leading_zero32__3479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3491__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3491__part 
                            = vlSelf->__Vfunc_leading_zero32__3491__value;
                        vlSelf->__Vfunc_leading_zero32__3491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3503__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3503__part 
                            = vlSelf->__Vfunc_leading_zero32__3503__value;
                        vlSelf->__Vfunc_leading_zero32__3503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3515__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3515__part 
                            = vlSelf->__Vfunc_leading_zero32__3515__value;
                        vlSelf->__Vfunc_leading_zero32__3515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3527__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3527__part 
                            = vlSelf->__Vfunc_leading_zero32__3527__value;
                        vlSelf->__Vfunc_leading_zero32__3527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3539__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3539__part 
                            = vlSelf->__Vfunc_leading_zero32__3539__value;
                        vlSelf->__Vfunc_leading_zero32__3539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3551__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3551__part 
                            = vlSelf->__Vfunc_leading_zero32__3551__value;
                        vlSelf->__Vfunc_leading_zero32__3551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3563__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3563__part 
                            = vlSelf->__Vfunc_leading_zero32__3563__value;
                        vlSelf->__Vfunc_leading_zero32__3563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3575__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3575__part 
                            = vlSelf->__Vfunc_leading_zero32__3575__value;
                        vlSelf->__Vfunc_leading_zero32__3575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3587__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3587__part 
                            = vlSelf->__Vfunc_leading_zero32__3587__value;
                        vlSelf->__Vfunc_leading_zero32__3587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3599__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3599__part 
                            = vlSelf->__Vfunc_leading_zero32__3599__value;
                        vlSelf->__Vfunc_leading_zero32__3599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3611__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3611__part 
                            = vlSelf->__Vfunc_leading_zero32__3611__value;
                        vlSelf->__Vfunc_leading_zero32__3611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3623__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3623__part 
                            = vlSelf->__Vfunc_leading_zero32__3623__value;
                        vlSelf->__Vfunc_leading_zero32__3623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3635__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3635__part 
                            = vlSelf->__Vfunc_leading_zero32__3635__value;
                        vlSelf->__Vfunc_leading_zero32__3635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3647__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3647__part 
                            = vlSelf->__Vfunc_leading_zero32__3647__value;
                        vlSelf->__Vfunc_leading_zero32__3647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3659__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3659__part 
                            = vlSelf->__Vfunc_leading_zero32__3659__value;
                        vlSelf->__Vfunc_leading_zero32__3659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3671__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3671__part 
                            = vlSelf->__Vfunc_leading_zero32__3671__value;
                        vlSelf->__Vfunc_leading_zero32__3671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3683__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3683__part 
                            = vlSelf->__Vfunc_leading_zero32__3683__value;
                        vlSelf->__Vfunc_leading_zero32__3683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3695__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3695__part 
                            = vlSelf->__Vfunc_leading_zero32__3695__value;
                        vlSelf->__Vfunc_leading_zero32__3695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3707__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3707__part 
                            = vlSelf->__Vfunc_leading_zero32__3707__value;
                        vlSelf->__Vfunc_leading_zero32__3707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3707__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3719__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3719__part 
                            = vlSelf->__Vfunc_leading_zero32__3719__value;
                        vlSelf->__Vfunc_leading_zero32__3719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3719__Vfuncout)) 
                             - (IData)(8U))));
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__take_bit 
        = (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
           >= (1U | (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__root 
                     << 2U)));
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
}
