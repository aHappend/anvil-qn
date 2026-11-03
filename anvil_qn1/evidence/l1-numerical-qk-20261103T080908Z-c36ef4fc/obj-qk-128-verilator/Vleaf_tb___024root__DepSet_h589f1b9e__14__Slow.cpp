// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__14(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__14\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5765__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5765__part 
                            = vlSelf->__Vfunc_leading_zero32__5765__value;
                        vlSelf->__Vfunc_leading_zero32__5765__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5765__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5765__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5765__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5765__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5765__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5759__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5759__part 
                            = vlSelf->__Vfunc_leading_zero32__5759__value;
                        vlSelf->__Vfunc_leading_zero32__5759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5771__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5771__part 
                            = vlSelf->__Vfunc_leading_zero32__5771__value;
                        vlSelf->__Vfunc_leading_zero32__5771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5789__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5789__part 
                            = vlSelf->__Vfunc_leading_zero32__5789__value;
                        vlSelf->__Vfunc_leading_zero32__5789__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5789__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5789__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5789__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5789__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5789__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5801__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5801__part 
                            = vlSelf->__Vfunc_leading_zero32__5801__value;
                        vlSelf->__Vfunc_leading_zero32__5801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5795__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5795__part 
                            = vlSelf->__Vfunc_leading_zero32__5795__value;
                        vlSelf->__Vfunc_leading_zero32__5795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5807__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5807__part 
                            = vlSelf->__Vfunc_leading_zero32__5807__value;
                        vlSelf->__Vfunc_leading_zero32__5807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5825__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5825__part 
                            = vlSelf->__Vfunc_leading_zero32__5825__value;
                        vlSelf->__Vfunc_leading_zero32__5825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5837__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5837__part 
                            = vlSelf->__Vfunc_leading_zero32__5837__value;
                        vlSelf->__Vfunc_leading_zero32__5837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5831__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5831__part 
                            = vlSelf->__Vfunc_leading_zero32__5831__value;
                        vlSelf->__Vfunc_leading_zero32__5831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5843__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5843__part 
                            = vlSelf->__Vfunc_leading_zero32__5843__value;
                        vlSelf->__Vfunc_leading_zero32__5843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5861__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5861__part 
                            = vlSelf->__Vfunc_leading_zero32__5861__value;
                        vlSelf->__Vfunc_leading_zero32__5861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5873__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5873__part 
                            = vlSelf->__Vfunc_leading_zero32__5873__value;
                        vlSelf->__Vfunc_leading_zero32__5873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5867__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5867__part 
                            = vlSelf->__Vfunc_leading_zero32__5867__value;
                        vlSelf->__Vfunc_leading_zero32__5867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5879__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5879__part 
                            = vlSelf->__Vfunc_leading_zero32__5879__value;
                        vlSelf->__Vfunc_leading_zero32__5879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5897__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5897__part 
                            = vlSelf->__Vfunc_leading_zero32__5897__value;
                        vlSelf->__Vfunc_leading_zero32__5897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5909__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5909__part 
                            = vlSelf->__Vfunc_leading_zero32__5909__value;
                        vlSelf->__Vfunc_leading_zero32__5909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5903__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5903__part 
                            = vlSelf->__Vfunc_leading_zero32__5903__value;
                        vlSelf->__Vfunc_leading_zero32__5903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5915__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5915__part 
                            = vlSelf->__Vfunc_leading_zero32__5915__value;
                        vlSelf->__Vfunc_leading_zero32__5915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5933__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5933__part 
                            = vlSelf->__Vfunc_leading_zero32__5933__value;
                        vlSelf->__Vfunc_leading_zero32__5933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5945__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5945__part 
                            = vlSelf->__Vfunc_leading_zero32__5945__value;
                        vlSelf->__Vfunc_leading_zero32__5945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5939__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5939__part 
                            = vlSelf->__Vfunc_leading_zero32__5939__value;
                        vlSelf->__Vfunc_leading_zero32__5939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5951__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5951__part 
                            = vlSelf->__Vfunc_leading_zero32__5951__value;
                        vlSelf->__Vfunc_leading_zero32__5951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5969__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5969__part 
                            = vlSelf->__Vfunc_leading_zero32__5969__value;
                        vlSelf->__Vfunc_leading_zero32__5969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5981__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5981__part 
                            = vlSelf->__Vfunc_leading_zero32__5981__value;
                        vlSelf->__Vfunc_leading_zero32__5981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5975__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5975__part 
                            = vlSelf->__Vfunc_leading_zero32__5975__value;
                        vlSelf->__Vfunc_leading_zero32__5975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5987__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5987__part 
                            = vlSelf->__Vfunc_leading_zero32__5987__value;
                        vlSelf->__Vfunc_leading_zero32__5987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6005__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6005__part 
                            = vlSelf->__Vfunc_leading_zero32__6005__value;
                        vlSelf->__Vfunc_leading_zero32__6005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6017__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6017__part 
                            = vlSelf->__Vfunc_leading_zero32__6017__value;
                        vlSelf->__Vfunc_leading_zero32__6017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6011__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6011__part 
                            = vlSelf->__Vfunc_leading_zero32__6011__value;
                        vlSelf->__Vfunc_leading_zero32__6011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6023__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6023__part 
                            = vlSelf->__Vfunc_leading_zero32__6023__value;
                        vlSelf->__Vfunc_leading_zero32__6023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6041__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6041__part 
                            = vlSelf->__Vfunc_leading_zero32__6041__value;
                        vlSelf->__Vfunc_leading_zero32__6041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6053__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6053__part 
                            = vlSelf->__Vfunc_leading_zero32__6053__value;
                        vlSelf->__Vfunc_leading_zero32__6053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6047__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6047__part 
                            = vlSelf->__Vfunc_leading_zero32__6047__value;
                        vlSelf->__Vfunc_leading_zero32__6047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6059__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6059__part 
                            = vlSelf->__Vfunc_leading_zero32__6059__value;
                        vlSelf->__Vfunc_leading_zero32__6059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6077__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6077__part 
                            = vlSelf->__Vfunc_leading_zero32__6077__value;
                        vlSelf->__Vfunc_leading_zero32__6077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6089__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6089__part 
                            = vlSelf->__Vfunc_leading_zero32__6089__value;
                        vlSelf->__Vfunc_leading_zero32__6089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6083__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6083__part 
                            = vlSelf->__Vfunc_leading_zero32__6083__value;
                        vlSelf->__Vfunc_leading_zero32__6083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6095__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6095__part 
                            = vlSelf->__Vfunc_leading_zero32__6095__value;
                        vlSelf->__Vfunc_leading_zero32__6095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6113__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6113__part 
                            = vlSelf->__Vfunc_leading_zero32__6113__value;
                        vlSelf->__Vfunc_leading_zero32__6113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6125__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6125__part 
                            = vlSelf->__Vfunc_leading_zero32__6125__value;
                        vlSelf->__Vfunc_leading_zero32__6125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6119__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6119__part 
                            = vlSelf->__Vfunc_leading_zero32__6119__value;
                        vlSelf->__Vfunc_leading_zero32__6119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6131__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6131__part 
                            = vlSelf->__Vfunc_leading_zero32__6131__value;
                        vlSelf->__Vfunc_leading_zero32__6131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6149__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6149__part 
                            = vlSelf->__Vfunc_leading_zero32__6149__value;
                        vlSelf->__Vfunc_leading_zero32__6149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6161__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6161__part 
                            = vlSelf->__Vfunc_leading_zero32__6161__value;
                        vlSelf->__Vfunc_leading_zero32__6161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6155__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6155__part 
                            = vlSelf->__Vfunc_leading_zero32__6155__value;
                        vlSelf->__Vfunc_leading_zero32__6155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6167__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6167__part 
                            = vlSelf->__Vfunc_leading_zero32__6167__value;
                        vlSelf->__Vfunc_leading_zero32__6167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6185__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6185__part 
                            = vlSelf->__Vfunc_leading_zero32__6185__value;
                        vlSelf->__Vfunc_leading_zero32__6185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6197__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6197__part 
                            = vlSelf->__Vfunc_leading_zero32__6197__value;
                        vlSelf->__Vfunc_leading_zero32__6197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6197__count)));
                            vlSelf->__Vfunc_leading_zero32__6197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6197__count)));
                            vlSelf->__Vfunc_leading_zero32__6197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6197__count)));
                            vlSelf->__Vfunc_leading_zero32__6197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6197__count)));
                            vlSelf->__Vfunc_leading_zero32__6197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6191__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6191__part 
                            = vlSelf->__Vfunc_leading_zero32__6191__value;
                        vlSelf->__Vfunc_leading_zero32__6191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6203__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6203__part 
                            = vlSelf->__Vfunc_leading_zero32__6203__value;
                        vlSelf->__Vfunc_leading_zero32__6203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6203__count)));
                            vlSelf->__Vfunc_leading_zero32__6203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6203__count)));
                            vlSelf->__Vfunc_leading_zero32__6203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6203__count)));
                            vlSelf->__Vfunc_leading_zero32__6203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6203__count)));
                            vlSelf->__Vfunc_leading_zero32__6203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6221__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6221__part 
                            = vlSelf->__Vfunc_leading_zero32__6221__value;
                        vlSelf->__Vfunc_leading_zero32__6221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6221__count)));
                            vlSelf->__Vfunc_leading_zero32__6221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6221__count)));
                            vlSelf->__Vfunc_leading_zero32__6221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6221__count)));
                            vlSelf->__Vfunc_leading_zero32__6221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6221__count)));
                            vlSelf->__Vfunc_leading_zero32__6221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6233__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6233__part 
                            = vlSelf->__Vfunc_leading_zero32__6233__value;
                        vlSelf->__Vfunc_leading_zero32__6233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6233__count)));
                            vlSelf->__Vfunc_leading_zero32__6233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6233__count)));
                            vlSelf->__Vfunc_leading_zero32__6233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6233__count)));
                            vlSelf->__Vfunc_leading_zero32__6233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6233__count)));
                            vlSelf->__Vfunc_leading_zero32__6233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6227__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6227__part 
                            = vlSelf->__Vfunc_leading_zero32__6227__value;
                        vlSelf->__Vfunc_leading_zero32__6227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6227__count)));
                            vlSelf->__Vfunc_leading_zero32__6227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6227__count)));
                            vlSelf->__Vfunc_leading_zero32__6227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6227__count)));
                            vlSelf->__Vfunc_leading_zero32__6227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6227__count)));
                            vlSelf->__Vfunc_leading_zero32__6227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6239__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6239__part 
                            = vlSelf->__Vfunc_leading_zero32__6239__value;
                        vlSelf->__Vfunc_leading_zero32__6239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6239__count)));
                            vlSelf->__Vfunc_leading_zero32__6239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6239__count)));
                            vlSelf->__Vfunc_leading_zero32__6239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6239__count)));
                            vlSelf->__Vfunc_leading_zero32__6239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6239__count)));
                            vlSelf->__Vfunc_leading_zero32__6239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6257__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6257__part 
                            = vlSelf->__Vfunc_leading_zero32__6257__value;
                        vlSelf->__Vfunc_leading_zero32__6257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6257__count)));
                            vlSelf->__Vfunc_leading_zero32__6257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6257__count)));
                            vlSelf->__Vfunc_leading_zero32__6257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6257__count)));
                            vlSelf->__Vfunc_leading_zero32__6257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6257__count)));
                            vlSelf->__Vfunc_leading_zero32__6257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6269__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6269__part 
                            = vlSelf->__Vfunc_leading_zero32__6269__value;
                        vlSelf->__Vfunc_leading_zero32__6269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6269__count)));
                            vlSelf->__Vfunc_leading_zero32__6269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6269__count)));
                            vlSelf->__Vfunc_leading_zero32__6269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6269__count)));
                            vlSelf->__Vfunc_leading_zero32__6269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6269__count)));
                            vlSelf->__Vfunc_leading_zero32__6269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6263__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6263__part 
                            = vlSelf->__Vfunc_leading_zero32__6263__value;
                        vlSelf->__Vfunc_leading_zero32__6263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6263__count)));
                            vlSelf->__Vfunc_leading_zero32__6263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6263__count)));
                            vlSelf->__Vfunc_leading_zero32__6263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6263__count)));
                            vlSelf->__Vfunc_leading_zero32__6263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6263__count)));
                            vlSelf->__Vfunc_leading_zero32__6263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6275__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6275__part 
                            = vlSelf->__Vfunc_leading_zero32__6275__value;
                        vlSelf->__Vfunc_leading_zero32__6275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6275__count)));
                            vlSelf->__Vfunc_leading_zero32__6275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6275__count)));
                            vlSelf->__Vfunc_leading_zero32__6275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6275__count)));
                            vlSelf->__Vfunc_leading_zero32__6275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6275__count)));
                            vlSelf->__Vfunc_leading_zero32__6275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6293__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6293__part 
                            = vlSelf->__Vfunc_leading_zero32__6293__value;
                        vlSelf->__Vfunc_leading_zero32__6293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6293__count)));
                            vlSelf->__Vfunc_leading_zero32__6293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6293__count)));
                            vlSelf->__Vfunc_leading_zero32__6293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6293__count)));
                            vlSelf->__Vfunc_leading_zero32__6293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6293__count)));
                            vlSelf->__Vfunc_leading_zero32__6293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6305__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6305__part 
                            = vlSelf->__Vfunc_leading_zero32__6305__value;
                        vlSelf->__Vfunc_leading_zero32__6305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6305__count)));
                            vlSelf->__Vfunc_leading_zero32__6305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6305__count)));
                            vlSelf->__Vfunc_leading_zero32__6305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6305__count)));
                            vlSelf->__Vfunc_leading_zero32__6305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6305__count)));
                            vlSelf->__Vfunc_leading_zero32__6305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6299__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6299__part 
                            = vlSelf->__Vfunc_leading_zero32__6299__value;
                        vlSelf->__Vfunc_leading_zero32__6299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6299__count)));
                            vlSelf->__Vfunc_leading_zero32__6299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6299__count)));
                            vlSelf->__Vfunc_leading_zero32__6299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6299__count)));
                            vlSelf->__Vfunc_leading_zero32__6299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6299__count)));
                            vlSelf->__Vfunc_leading_zero32__6299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6311__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6311__part 
                            = vlSelf->__Vfunc_leading_zero32__6311__value;
                        vlSelf->__Vfunc_leading_zero32__6311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6311__count)));
                            vlSelf->__Vfunc_leading_zero32__6311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6311__count)));
                            vlSelf->__Vfunc_leading_zero32__6311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6311__count)));
                            vlSelf->__Vfunc_leading_zero32__6311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6311__count)));
                            vlSelf->__Vfunc_leading_zero32__6311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6329__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6329__part 
                            = vlSelf->__Vfunc_leading_zero32__6329__value;
                        vlSelf->__Vfunc_leading_zero32__6329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6329__count)));
                            vlSelf->__Vfunc_leading_zero32__6329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6329__count)));
                            vlSelf->__Vfunc_leading_zero32__6329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6329__count)));
                            vlSelf->__Vfunc_leading_zero32__6329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6329__count)));
                            vlSelf->__Vfunc_leading_zero32__6329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6341__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6341__part 
                            = vlSelf->__Vfunc_leading_zero32__6341__value;
                        vlSelf->__Vfunc_leading_zero32__6341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6341__count)));
                            vlSelf->__Vfunc_leading_zero32__6341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6341__count)));
                            vlSelf->__Vfunc_leading_zero32__6341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6341__count)));
                            vlSelf->__Vfunc_leading_zero32__6341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6341__count)));
                            vlSelf->__Vfunc_leading_zero32__6341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6335__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6335__part 
                            = vlSelf->__Vfunc_leading_zero32__6335__value;
                        vlSelf->__Vfunc_leading_zero32__6335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6335__count)));
                            vlSelf->__Vfunc_leading_zero32__6335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6335__count)));
                            vlSelf->__Vfunc_leading_zero32__6335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6335__count)));
                            vlSelf->__Vfunc_leading_zero32__6335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6335__count)));
                            vlSelf->__Vfunc_leading_zero32__6335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6347__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6347__part 
                            = vlSelf->__Vfunc_leading_zero32__6347__value;
                        vlSelf->__Vfunc_leading_zero32__6347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6347__count)));
                            vlSelf->__Vfunc_leading_zero32__6347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6347__count)));
                            vlSelf->__Vfunc_leading_zero32__6347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6347__count)));
                            vlSelf->__Vfunc_leading_zero32__6347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6347__count)));
                            vlSelf->__Vfunc_leading_zero32__6347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6365__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6365__part 
                            = vlSelf->__Vfunc_leading_zero32__6365__value;
                        vlSelf->__Vfunc_leading_zero32__6365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6365__count)));
                            vlSelf->__Vfunc_leading_zero32__6365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6365__count)));
                            vlSelf->__Vfunc_leading_zero32__6365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6365__count)));
                            vlSelf->__Vfunc_leading_zero32__6365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6365__count)));
                            vlSelf->__Vfunc_leading_zero32__6365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6377__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6377__part 
                            = vlSelf->__Vfunc_leading_zero32__6377__value;
                        vlSelf->__Vfunc_leading_zero32__6377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6377__count)));
                            vlSelf->__Vfunc_leading_zero32__6377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6377__count)));
                            vlSelf->__Vfunc_leading_zero32__6377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6377__count)));
                            vlSelf->__Vfunc_leading_zero32__6377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6377__count)));
                            vlSelf->__Vfunc_leading_zero32__6377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6371__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6371__part 
                            = vlSelf->__Vfunc_leading_zero32__6371__value;
                        vlSelf->__Vfunc_leading_zero32__6371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6371__count)));
                            vlSelf->__Vfunc_leading_zero32__6371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6371__count)));
                            vlSelf->__Vfunc_leading_zero32__6371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6371__count)));
                            vlSelf->__Vfunc_leading_zero32__6371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6371__count)));
                            vlSelf->__Vfunc_leading_zero32__6371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6383__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6383__part 
                            = vlSelf->__Vfunc_leading_zero32__6383__value;
                        vlSelf->__Vfunc_leading_zero32__6383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6383__count)));
                            vlSelf->__Vfunc_leading_zero32__6383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6383__count)));
                            vlSelf->__Vfunc_leading_zero32__6383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6383__count)));
                            vlSelf->__Vfunc_leading_zero32__6383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6383__count)));
                            vlSelf->__Vfunc_leading_zero32__6383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6401__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6401__part 
                            = vlSelf->__Vfunc_leading_zero32__6401__value;
                        vlSelf->__Vfunc_leading_zero32__6401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6401__count)));
                            vlSelf->__Vfunc_leading_zero32__6401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6401__count)));
                            vlSelf->__Vfunc_leading_zero32__6401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6401__count)));
                            vlSelf->__Vfunc_leading_zero32__6401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6401__count)));
                            vlSelf->__Vfunc_leading_zero32__6401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6413__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6413__part 
                            = vlSelf->__Vfunc_leading_zero32__6413__value;
                        vlSelf->__Vfunc_leading_zero32__6413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6413__count)));
                            vlSelf->__Vfunc_leading_zero32__6413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6413__count)));
                            vlSelf->__Vfunc_leading_zero32__6413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6413__count)));
                            vlSelf->__Vfunc_leading_zero32__6413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6413__count)));
                            vlSelf->__Vfunc_leading_zero32__6413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6407__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6407__part 
                            = vlSelf->__Vfunc_leading_zero32__6407__value;
                        vlSelf->__Vfunc_leading_zero32__6407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6407__count)));
                            vlSelf->__Vfunc_leading_zero32__6407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6407__count)));
                            vlSelf->__Vfunc_leading_zero32__6407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6407__count)));
                            vlSelf->__Vfunc_leading_zero32__6407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6407__count)));
                            vlSelf->__Vfunc_leading_zero32__6407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6419__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6419__part 
                            = vlSelf->__Vfunc_leading_zero32__6419__value;
                        vlSelf->__Vfunc_leading_zero32__6419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6437__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6437__part 
                            = vlSelf->__Vfunc_leading_zero32__6437__value;
                        vlSelf->__Vfunc_leading_zero32__6437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6437__count)));
                            vlSelf->__Vfunc_leading_zero32__6437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6437__count)));
                            vlSelf->__Vfunc_leading_zero32__6437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6437__count)));
                            vlSelf->__Vfunc_leading_zero32__6437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6437__count)));
                            vlSelf->__Vfunc_leading_zero32__6437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6449__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6449__part 
                            = vlSelf->__Vfunc_leading_zero32__6449__value;
                        vlSelf->__Vfunc_leading_zero32__6449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6449__count)));
                            vlSelf->__Vfunc_leading_zero32__6449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6449__count)));
                            vlSelf->__Vfunc_leading_zero32__6449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6449__count)));
                            vlSelf->__Vfunc_leading_zero32__6449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6449__count)));
                            vlSelf->__Vfunc_leading_zero32__6449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6443__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6443__part 
                            = vlSelf->__Vfunc_leading_zero32__6443__value;
                        vlSelf->__Vfunc_leading_zero32__6443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6443__count)));
                            vlSelf->__Vfunc_leading_zero32__6443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6443__count)));
                            vlSelf->__Vfunc_leading_zero32__6443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6443__count)));
                            vlSelf->__Vfunc_leading_zero32__6443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6443__count)));
                            vlSelf->__Vfunc_leading_zero32__6443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6455__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6455__part 
                            = vlSelf->__Vfunc_leading_zero32__6455__value;
                        vlSelf->__Vfunc_leading_zero32__6455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6455__count)));
                            vlSelf->__Vfunc_leading_zero32__6455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6455__count)));
                            vlSelf->__Vfunc_leading_zero32__6455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6455__count)));
                            vlSelf->__Vfunc_leading_zero32__6455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6455__count)));
                            vlSelf->__Vfunc_leading_zero32__6455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6473__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6473__part 
                            = vlSelf->__Vfunc_leading_zero32__6473__value;
                        vlSelf->__Vfunc_leading_zero32__6473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6473__count)));
                            vlSelf->__Vfunc_leading_zero32__6473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6473__count)));
                            vlSelf->__Vfunc_leading_zero32__6473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6473__count)));
                            vlSelf->__Vfunc_leading_zero32__6473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6473__count)));
                            vlSelf->__Vfunc_leading_zero32__6473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6485__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6485__part 
                            = vlSelf->__Vfunc_leading_zero32__6485__value;
                        vlSelf->__Vfunc_leading_zero32__6485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6485__count)));
                            vlSelf->__Vfunc_leading_zero32__6485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6485__count)));
                            vlSelf->__Vfunc_leading_zero32__6485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6485__count)));
                            vlSelf->__Vfunc_leading_zero32__6485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6485__count)));
                            vlSelf->__Vfunc_leading_zero32__6485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6479__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6479__part 
                            = vlSelf->__Vfunc_leading_zero32__6479__value;
                        vlSelf->__Vfunc_leading_zero32__6479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6479__count)));
                            vlSelf->__Vfunc_leading_zero32__6479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6479__count)));
                            vlSelf->__Vfunc_leading_zero32__6479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6479__count)));
                            vlSelf->__Vfunc_leading_zero32__6479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6479__count)));
                            vlSelf->__Vfunc_leading_zero32__6479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6491__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6491__part 
                            = vlSelf->__Vfunc_leading_zero32__6491__value;
                        vlSelf->__Vfunc_leading_zero32__6491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6491__count)));
                            vlSelf->__Vfunc_leading_zero32__6491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6491__count)));
                            vlSelf->__Vfunc_leading_zero32__6491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6491__count)));
                            vlSelf->__Vfunc_leading_zero32__6491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6491__count)));
                            vlSelf->__Vfunc_leading_zero32__6491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6509__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6509__part 
                            = vlSelf->__Vfunc_leading_zero32__6509__value;
                        vlSelf->__Vfunc_leading_zero32__6509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6509__count)));
                            vlSelf->__Vfunc_leading_zero32__6509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6509__count)));
                            vlSelf->__Vfunc_leading_zero32__6509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6509__count)));
                            vlSelf->__Vfunc_leading_zero32__6509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6509__count)));
                            vlSelf->__Vfunc_leading_zero32__6509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6521__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6521__part 
                            = vlSelf->__Vfunc_leading_zero32__6521__value;
                        vlSelf->__Vfunc_leading_zero32__6521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6521__count)));
                            vlSelf->__Vfunc_leading_zero32__6521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6521__count)));
                            vlSelf->__Vfunc_leading_zero32__6521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6521__count)));
                            vlSelf->__Vfunc_leading_zero32__6521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6521__count)));
                            vlSelf->__Vfunc_leading_zero32__6521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6515__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6515__part 
                            = vlSelf->__Vfunc_leading_zero32__6515__value;
                        vlSelf->__Vfunc_leading_zero32__6515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6515__count)));
                            vlSelf->__Vfunc_leading_zero32__6515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6515__count)));
                            vlSelf->__Vfunc_leading_zero32__6515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6515__count)));
                            vlSelf->__Vfunc_leading_zero32__6515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6515__count)));
                            vlSelf->__Vfunc_leading_zero32__6515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6527__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6527__part 
                            = vlSelf->__Vfunc_leading_zero32__6527__value;
                        vlSelf->__Vfunc_leading_zero32__6527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6527__count)));
                            vlSelf->__Vfunc_leading_zero32__6527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6527__count)));
                            vlSelf->__Vfunc_leading_zero32__6527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6527__count)));
                            vlSelf->__Vfunc_leading_zero32__6527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6527__count)));
                            vlSelf->__Vfunc_leading_zero32__6527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1175__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1175__part 
                            = vlSelf->__Vfunc_leading_zero32__1175__value;
                        vlSelf->__Vfunc_leading_zero32__1175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1175__count)));
                            vlSelf->__Vfunc_leading_zero32__1175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1175__count)));
                            vlSelf->__Vfunc_leading_zero32__1175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1175__count)));
                            vlSelf->__Vfunc_leading_zero32__1175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1175__count)));
                            vlSelf->__Vfunc_leading_zero32__1175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1176__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1176__part 
                            = vlSelf->__Vfunc_leading_zero32__1176__value;
                        vlSelf->__Vfunc_leading_zero32__1176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1176__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2705__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2705__part 
                            = vlSelf->__Vfunc_leading_zero32__2705__value;
                        vlSelf->__Vfunc_leading_zero32__2705__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2705__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2705__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2705__count)));
                            vlSelf->__Vfunc_leading_zero32__2705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2705__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2705__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2705__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2705__count)));
                            vlSelf->__Vfunc_leading_zero32__2705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2705__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2705__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2705__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2705__count)));
                            vlSelf->__Vfunc_leading_zero32__2705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2705__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2705__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2705__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2705__count)));
                            vlSelf->__Vfunc_leading_zero32__2705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2705__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2705__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2705__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2705__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2705__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2705__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2705__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2705__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1181__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1181__part 
                            = vlSelf->__Vfunc_leading_zero32__1181__value;
                        vlSelf->__Vfunc_leading_zero32__1181__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1181__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1181__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1181__count)));
                            vlSelf->__Vfunc_leading_zero32__1181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1181__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1181__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1181__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1181__count)));
                            vlSelf->__Vfunc_leading_zero32__1181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1181__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1181__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1181__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1181__count)));
                            vlSelf->__Vfunc_leading_zero32__1181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1181__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1181__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1181__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1181__count)));
                            vlSelf->__Vfunc_leading_zero32__1181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1181__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1181__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1181__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1181__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1181__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1181__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1181__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1181__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1182__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1182__part 
                            = vlSelf->__Vfunc_leading_zero32__1182__value;
                        vlSelf->__Vfunc_leading_zero32__1182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1182__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2717__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2717__part 
                            = vlSelf->__Vfunc_leading_zero32__2717__value;
                        vlSelf->__Vfunc_leading_zero32__2717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2717__count)));
                            vlSelf->__Vfunc_leading_zero32__2717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2717__count)));
                            vlSelf->__Vfunc_leading_zero32__2717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2717__count)));
                            vlSelf->__Vfunc_leading_zero32__2717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2717__count)));
                            vlSelf->__Vfunc_leading_zero32__2717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1187__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1187__part 
                            = vlSelf->__Vfunc_leading_zero32__1187__value;
                        vlSelf->__Vfunc_leading_zero32__1187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1187__count)));
                            vlSelf->__Vfunc_leading_zero32__1187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1187__count)));
                            vlSelf->__Vfunc_leading_zero32__1187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1187__count)));
                            vlSelf->__Vfunc_leading_zero32__1187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1187__count)));
                            vlSelf->__Vfunc_leading_zero32__1187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1188__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1188__part 
                            = vlSelf->__Vfunc_leading_zero32__1188__value;
                        vlSelf->__Vfunc_leading_zero32__1188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2729__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2729__part 
                            = vlSelf->__Vfunc_leading_zero32__2729__value;
                        vlSelf->__Vfunc_leading_zero32__2729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2729__count)));
                            vlSelf->__Vfunc_leading_zero32__2729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2729__count)));
                            vlSelf->__Vfunc_leading_zero32__2729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2729__count)));
                            vlSelf->__Vfunc_leading_zero32__2729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2729__count)));
                            vlSelf->__Vfunc_leading_zero32__2729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1193__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1193__part 
                            = vlSelf->__Vfunc_leading_zero32__1193__value;
                        vlSelf->__Vfunc_leading_zero32__1193__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1193__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1193__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1193__count)));
                            vlSelf->__Vfunc_leading_zero32__1193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1193__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1193__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1193__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1193__count)));
                            vlSelf->__Vfunc_leading_zero32__1193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1193__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1193__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1193__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1193__count)));
                            vlSelf->__Vfunc_leading_zero32__1193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1193__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1193__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1193__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1193__count)));
                            vlSelf->__Vfunc_leading_zero32__1193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1193__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1193__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1193__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1193__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1193__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1193__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1193__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1193__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1194__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1194__part 
                            = vlSelf->__Vfunc_leading_zero32__1194__value;
                        vlSelf->__Vfunc_leading_zero32__1194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2741__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2741__part 
                            = vlSelf->__Vfunc_leading_zero32__2741__value;
                        vlSelf->__Vfunc_leading_zero32__2741__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2741__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2741__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2741__count)));
                            vlSelf->__Vfunc_leading_zero32__2741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2741__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2741__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2741__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2741__count)));
                            vlSelf->__Vfunc_leading_zero32__2741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2741__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2741__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2741__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2741__count)));
                            vlSelf->__Vfunc_leading_zero32__2741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2741__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2741__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2741__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2741__count)));
                            vlSelf->__Vfunc_leading_zero32__2741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2741__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2741__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2741__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2741__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2741__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2741__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2741__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2741__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1199__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1199__part 
                            = vlSelf->__Vfunc_leading_zero32__1199__value;
                        vlSelf->__Vfunc_leading_zero32__1199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1199__count)));
                            vlSelf->__Vfunc_leading_zero32__1199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1199__count)));
                            vlSelf->__Vfunc_leading_zero32__1199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1199__count)));
                            vlSelf->__Vfunc_leading_zero32__1199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1199__count)));
                            vlSelf->__Vfunc_leading_zero32__1199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1200__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1200__part 
                            = vlSelf->__Vfunc_leading_zero32__1200__value;
                        vlSelf->__Vfunc_leading_zero32__1200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2753__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2753__part 
                            = vlSelf->__Vfunc_leading_zero32__2753__value;
                        vlSelf->__Vfunc_leading_zero32__2753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2753__count)));
                            vlSelf->__Vfunc_leading_zero32__2753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2753__count)));
                            vlSelf->__Vfunc_leading_zero32__2753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2753__count)));
                            vlSelf->__Vfunc_leading_zero32__2753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2753__count)));
                            vlSelf->__Vfunc_leading_zero32__2753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2753__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1205__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1205__part 
                            = vlSelf->__Vfunc_leading_zero32__1205__value;
                        vlSelf->__Vfunc_leading_zero32__1205__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1205__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1205__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1205__count)));
                            vlSelf->__Vfunc_leading_zero32__1205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1205__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1205__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1205__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1205__count)));
                            vlSelf->__Vfunc_leading_zero32__1205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1205__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1205__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1205__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1205__count)));
                            vlSelf->__Vfunc_leading_zero32__1205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1205__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1205__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1205__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1205__count)));
                            vlSelf->__Vfunc_leading_zero32__1205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1205__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1205__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1205__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1205__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1205__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1205__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1205__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1205__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1206__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1206__part 
                            = vlSelf->__Vfunc_leading_zero32__1206__value;
                        vlSelf->__Vfunc_leading_zero32__1206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2765__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2765__part 
                            = vlSelf->__Vfunc_leading_zero32__2765__value;
                        vlSelf->__Vfunc_leading_zero32__2765__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2765__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2765__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2765__count)));
                            vlSelf->__Vfunc_leading_zero32__2765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2765__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2765__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2765__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2765__count)));
                            vlSelf->__Vfunc_leading_zero32__2765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2765__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2765__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2765__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2765__count)));
                            vlSelf->__Vfunc_leading_zero32__2765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2765__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2765__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2765__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2765__count)));
                            vlSelf->__Vfunc_leading_zero32__2765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2765__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2765__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2765__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2765__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2765__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2765__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2765__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2765__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1211__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1211__part 
                            = vlSelf->__Vfunc_leading_zero32__1211__value;
                        vlSelf->__Vfunc_leading_zero32__1211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1211__count)));
                            vlSelf->__Vfunc_leading_zero32__1211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1211__count)));
                            vlSelf->__Vfunc_leading_zero32__1211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1211__count)));
                            vlSelf->__Vfunc_leading_zero32__1211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1211__count)));
                            vlSelf->__Vfunc_leading_zero32__1211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1212__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1212__part 
                            = vlSelf->__Vfunc_leading_zero32__1212__value;
                        vlSelf->__Vfunc_leading_zero32__1212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1212__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2777__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2777__part 
                            = vlSelf->__Vfunc_leading_zero32__2777__value;
                        vlSelf->__Vfunc_leading_zero32__2777__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2777__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2777__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2777__count)));
                            vlSelf->__Vfunc_leading_zero32__2777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2777__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2777__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2777__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2777__count)));
                            vlSelf->__Vfunc_leading_zero32__2777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2777__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2777__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2777__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2777__count)));
                            vlSelf->__Vfunc_leading_zero32__2777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2777__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2777__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2777__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2777__count)));
                            vlSelf->__Vfunc_leading_zero32__2777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2777__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2777__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2777__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2777__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2777__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2777__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2777__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2777__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1217__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1217__part 
                            = vlSelf->__Vfunc_leading_zero32__1217__value;
                        vlSelf->__Vfunc_leading_zero32__1217__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1217__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1217__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1217__count)));
                            vlSelf->__Vfunc_leading_zero32__1217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1217__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1217__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1217__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1217__count)));
                            vlSelf->__Vfunc_leading_zero32__1217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1217__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1217__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1217__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1217__count)));
                            vlSelf->__Vfunc_leading_zero32__1217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1217__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1217__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1217__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1217__count)));
                            vlSelf->__Vfunc_leading_zero32__1217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1217__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1217__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1217__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1217__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1217__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1217__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1217__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1217__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1218__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1218__part 
                            = vlSelf->__Vfunc_leading_zero32__1218__value;
                        vlSelf->__Vfunc_leading_zero32__1218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1218__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2789__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2789__part 
                            = vlSelf->__Vfunc_leading_zero32__2789__value;
                        vlSelf->__Vfunc_leading_zero32__2789__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2789__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2789__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2789__count)));
                            vlSelf->__Vfunc_leading_zero32__2789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2789__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2789__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2789__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2789__count)));
                            vlSelf->__Vfunc_leading_zero32__2789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2789__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2789__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2789__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2789__count)));
                            vlSelf->__Vfunc_leading_zero32__2789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2789__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2789__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2789__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2789__count)));
                            vlSelf->__Vfunc_leading_zero32__2789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2789__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2789__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2789__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2789__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2789__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2789__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2789__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2789__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1223__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1223__part 
                            = vlSelf->__Vfunc_leading_zero32__1223__value;
                        vlSelf->__Vfunc_leading_zero32__1223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1223__count)));
                            vlSelf->__Vfunc_leading_zero32__1223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1223__count)));
                            vlSelf->__Vfunc_leading_zero32__1223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1223__count)));
                            vlSelf->__Vfunc_leading_zero32__1223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1223__count)));
                            vlSelf->__Vfunc_leading_zero32__1223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1224__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1224__part 
                            = vlSelf->__Vfunc_leading_zero32__1224__value;
                        vlSelf->__Vfunc_leading_zero32__1224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2801__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2801__part 
                            = vlSelf->__Vfunc_leading_zero32__2801__value;
                        vlSelf->__Vfunc_leading_zero32__2801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2801__count)));
                            vlSelf->__Vfunc_leading_zero32__2801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2801__count)));
                            vlSelf->__Vfunc_leading_zero32__2801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2801__count)));
                            vlSelf->__Vfunc_leading_zero32__2801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2801__count)));
                            vlSelf->__Vfunc_leading_zero32__2801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1229__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1229__part 
                            = vlSelf->__Vfunc_leading_zero32__1229__value;
                        vlSelf->__Vfunc_leading_zero32__1229__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1229__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1229__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1229__count)));
                            vlSelf->__Vfunc_leading_zero32__1229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1229__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1229__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1229__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1229__count)));
                            vlSelf->__Vfunc_leading_zero32__1229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1229__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1229__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1229__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1229__count)));
                            vlSelf->__Vfunc_leading_zero32__1229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1229__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1229__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1229__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1229__count)));
                            vlSelf->__Vfunc_leading_zero32__1229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1229__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1229__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1229__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1229__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1229__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1229__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1229__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1229__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1230__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1230__part 
                            = vlSelf->__Vfunc_leading_zero32__1230__value;
                        vlSelf->__Vfunc_leading_zero32__1230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2813__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2813__part 
                            = vlSelf->__Vfunc_leading_zero32__2813__value;
                        vlSelf->__Vfunc_leading_zero32__2813__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2813__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2813__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2813__count)));
                            vlSelf->__Vfunc_leading_zero32__2813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2813__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2813__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2813__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2813__count)));
                            vlSelf->__Vfunc_leading_zero32__2813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2813__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2813__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2813__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2813__count)));
                            vlSelf->__Vfunc_leading_zero32__2813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2813__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2813__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2813__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2813__count)));
                            vlSelf->__Vfunc_leading_zero32__2813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2813__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2813__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2813__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2813__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2813__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2813__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2813__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2813__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1235__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1235__part 
                            = vlSelf->__Vfunc_leading_zero32__1235__value;
                        vlSelf->__Vfunc_leading_zero32__1235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1235__count)));
                            vlSelf->__Vfunc_leading_zero32__1235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1235__count)));
                            vlSelf->__Vfunc_leading_zero32__1235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1235__count)));
                            vlSelf->__Vfunc_leading_zero32__1235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1235__count)));
                            vlSelf->__Vfunc_leading_zero32__1235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1236__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1236__part 
                            = vlSelf->__Vfunc_leading_zero32__1236__value;
                        vlSelf->__Vfunc_leading_zero32__1236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2825__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2825__part 
                            = vlSelf->__Vfunc_leading_zero32__2825__value;
                        vlSelf->__Vfunc_leading_zero32__2825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2825__count)));
                            vlSelf->__Vfunc_leading_zero32__2825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2825__count)));
                            vlSelf->__Vfunc_leading_zero32__2825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2825__count)));
                            vlSelf->__Vfunc_leading_zero32__2825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2825__count)));
                            vlSelf->__Vfunc_leading_zero32__2825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1241__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1241__part 
                            = vlSelf->__Vfunc_leading_zero32__1241__value;
                        vlSelf->__Vfunc_leading_zero32__1241__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1241__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1241__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1241__count)));
                            vlSelf->__Vfunc_leading_zero32__1241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1241__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1241__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1241__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1241__count)));
                            vlSelf->__Vfunc_leading_zero32__1241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1241__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1241__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1241__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1241__count)));
                            vlSelf->__Vfunc_leading_zero32__1241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1241__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1241__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1241__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1241__count)));
                            vlSelf->__Vfunc_leading_zero32__1241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1241__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1241__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1241__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1241__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1241__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1241__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1241__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1241__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1242__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1242__part 
                            = vlSelf->__Vfunc_leading_zero32__1242__value;
                        vlSelf->__Vfunc_leading_zero32__1242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2837__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2837__part 
                            = vlSelf->__Vfunc_leading_zero32__2837__value;
                        vlSelf->__Vfunc_leading_zero32__2837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2837__count)));
                            vlSelf->__Vfunc_leading_zero32__2837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2837__count)));
                            vlSelf->__Vfunc_leading_zero32__2837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2837__count)));
                            vlSelf->__Vfunc_leading_zero32__2837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2837__count)));
                            vlSelf->__Vfunc_leading_zero32__2837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1247__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1247__part 
                            = vlSelf->__Vfunc_leading_zero32__1247__value;
                        vlSelf->__Vfunc_leading_zero32__1247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1247__count)));
                            vlSelf->__Vfunc_leading_zero32__1247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1247__count)));
                            vlSelf->__Vfunc_leading_zero32__1247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1247__count)));
                            vlSelf->__Vfunc_leading_zero32__1247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1247__count)));
                            vlSelf->__Vfunc_leading_zero32__1247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1248__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1248__part 
                            = vlSelf->__Vfunc_leading_zero32__1248__value;
                        vlSelf->__Vfunc_leading_zero32__1248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1248__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2849__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2849__part 
                            = vlSelf->__Vfunc_leading_zero32__2849__value;
                        vlSelf->__Vfunc_leading_zero32__2849__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2849__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2849__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2849__count)));
                            vlSelf->__Vfunc_leading_zero32__2849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2849__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2849__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2849__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2849__count)));
                            vlSelf->__Vfunc_leading_zero32__2849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2849__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2849__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2849__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2849__count)));
                            vlSelf->__Vfunc_leading_zero32__2849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2849__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2849__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2849__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2849__count)));
                            vlSelf->__Vfunc_leading_zero32__2849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2849__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2849__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2849__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2849__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2849__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2849__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2849__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2849__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1253__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1253__part 
                            = vlSelf->__Vfunc_leading_zero32__1253__value;
                        vlSelf->__Vfunc_leading_zero32__1253__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1253__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1253__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1253__count)));
                            vlSelf->__Vfunc_leading_zero32__1253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1253__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1253__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1253__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1253__count)));
                            vlSelf->__Vfunc_leading_zero32__1253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1253__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1253__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1253__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1253__count)));
                            vlSelf->__Vfunc_leading_zero32__1253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1253__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1253__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1253__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1253__count)));
                            vlSelf->__Vfunc_leading_zero32__1253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1253__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1253__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1253__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1253__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1253__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1253__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1253__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1253__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1254__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1254__part 
                            = vlSelf->__Vfunc_leading_zero32__1254__value;
                        vlSelf->__Vfunc_leading_zero32__1254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1254__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2861__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2861__part 
                            = vlSelf->__Vfunc_leading_zero32__2861__value;
                        vlSelf->__Vfunc_leading_zero32__2861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2861__count)));
                            vlSelf->__Vfunc_leading_zero32__2861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2861__count)));
                            vlSelf->__Vfunc_leading_zero32__2861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2861__count)));
                            vlSelf->__Vfunc_leading_zero32__2861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2861__count)));
                            vlSelf->__Vfunc_leading_zero32__2861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1259__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1259__part 
                            = vlSelf->__Vfunc_leading_zero32__1259__value;
                        vlSelf->__Vfunc_leading_zero32__1259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1259__count)));
                            vlSelf->__Vfunc_leading_zero32__1259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1259__count)));
                            vlSelf->__Vfunc_leading_zero32__1259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1259__count)));
                            vlSelf->__Vfunc_leading_zero32__1259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1259__count)));
                            vlSelf->__Vfunc_leading_zero32__1259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1260__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1260__part 
                            = vlSelf->__Vfunc_leading_zero32__1260__value;
                        vlSelf->__Vfunc_leading_zero32__1260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1260__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2873__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2873__part 
                            = vlSelf->__Vfunc_leading_zero32__2873__value;
                        vlSelf->__Vfunc_leading_zero32__2873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2873__count)));
                            vlSelf->__Vfunc_leading_zero32__2873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2873__count)));
                            vlSelf->__Vfunc_leading_zero32__2873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2873__count)));
                            vlSelf->__Vfunc_leading_zero32__2873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2873__count)));
                            vlSelf->__Vfunc_leading_zero32__2873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1265__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1265__part 
                            = vlSelf->__Vfunc_leading_zero32__1265__value;
                        vlSelf->__Vfunc_leading_zero32__1265__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1265__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1265__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1265__count)));
                            vlSelf->__Vfunc_leading_zero32__1265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1265__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1265__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1265__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1265__count)));
                            vlSelf->__Vfunc_leading_zero32__1265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1265__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1265__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1265__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1265__count)));
                            vlSelf->__Vfunc_leading_zero32__1265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1265__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1265__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1265__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1265__count)));
                            vlSelf->__Vfunc_leading_zero32__1265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1265__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1265__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1265__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1265__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1265__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1265__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1265__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1265__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1266__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1266__part 
                            = vlSelf->__Vfunc_leading_zero32__1266__value;
                        vlSelf->__Vfunc_leading_zero32__1266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2885__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2885__part 
                            = vlSelf->__Vfunc_leading_zero32__2885__value;
                        vlSelf->__Vfunc_leading_zero32__2885__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2885__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2885__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2885__count)));
                            vlSelf->__Vfunc_leading_zero32__2885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2885__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2885__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2885__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2885__count)));
                            vlSelf->__Vfunc_leading_zero32__2885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2885__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2885__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2885__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2885__count)));
                            vlSelf->__Vfunc_leading_zero32__2885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2885__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2885__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2885__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2885__count)));
                            vlSelf->__Vfunc_leading_zero32__2885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2885__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2885__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2885__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2885__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2885__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2885__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2885__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2885__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1271__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1271__part 
                            = vlSelf->__Vfunc_leading_zero32__1271__value;
                        vlSelf->__Vfunc_leading_zero32__1271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1271__count)));
                            vlSelf->__Vfunc_leading_zero32__1271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1271__count)));
                            vlSelf->__Vfunc_leading_zero32__1271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1271__count)));
                            vlSelf->__Vfunc_leading_zero32__1271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1271__count)));
                            vlSelf->__Vfunc_leading_zero32__1271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1272__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1272__part 
                            = vlSelf->__Vfunc_leading_zero32__1272__value;
                        vlSelf->__Vfunc_leading_zero32__1272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1272__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2897__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2897__part 
                            = vlSelf->__Vfunc_leading_zero32__2897__value;
                        vlSelf->__Vfunc_leading_zero32__2897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2897__count)));
                            vlSelf->__Vfunc_leading_zero32__2897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2897__count)));
                            vlSelf->__Vfunc_leading_zero32__2897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2897__count)));
                            vlSelf->__Vfunc_leading_zero32__2897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2897__count)));
                            vlSelf->__Vfunc_leading_zero32__2897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1277__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1277__part 
                            = vlSelf->__Vfunc_leading_zero32__1277__value;
                        vlSelf->__Vfunc_leading_zero32__1277__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1277__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1277__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1277__count)));
                            vlSelf->__Vfunc_leading_zero32__1277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1277__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1277__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1277__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1277__count)));
                            vlSelf->__Vfunc_leading_zero32__1277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1277__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1277__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1277__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1277__count)));
                            vlSelf->__Vfunc_leading_zero32__1277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1277__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1277__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1277__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1277__count)));
                            vlSelf->__Vfunc_leading_zero32__1277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1277__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1277__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1277__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1277__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1277__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1277__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1277__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1277__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1278__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1278__part 
                            = vlSelf->__Vfunc_leading_zero32__1278__value;
                        vlSelf->__Vfunc_leading_zero32__1278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2909__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2909__part 
                            = vlSelf->__Vfunc_leading_zero32__2909__value;
                        vlSelf->__Vfunc_leading_zero32__2909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2909__count)));
                            vlSelf->__Vfunc_leading_zero32__2909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2909__count)));
                            vlSelf->__Vfunc_leading_zero32__2909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2909__count)));
                            vlSelf->__Vfunc_leading_zero32__2909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2909__count)));
                            vlSelf->__Vfunc_leading_zero32__2909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1283__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1283__part 
                            = vlSelf->__Vfunc_leading_zero32__1283__value;
                        vlSelf->__Vfunc_leading_zero32__1283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1283__count)));
                            vlSelf->__Vfunc_leading_zero32__1283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1283__count)));
                            vlSelf->__Vfunc_leading_zero32__1283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1283__count)));
                            vlSelf->__Vfunc_leading_zero32__1283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1283__count)));
                            vlSelf->__Vfunc_leading_zero32__1283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1284__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1284__part 
                            = vlSelf->__Vfunc_leading_zero32__1284__value;
                        vlSelf->__Vfunc_leading_zero32__1284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1284__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2921__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2921__part 
                            = vlSelf->__Vfunc_leading_zero32__2921__value;
                        vlSelf->__Vfunc_leading_zero32__2921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2921__count)));
                            vlSelf->__Vfunc_leading_zero32__2921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2921__count)));
                            vlSelf->__Vfunc_leading_zero32__2921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2921__count)));
                            vlSelf->__Vfunc_leading_zero32__2921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2921__count)));
                            vlSelf->__Vfunc_leading_zero32__2921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2921__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1289__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1289__part 
                            = vlSelf->__Vfunc_leading_zero32__1289__value;
                        vlSelf->__Vfunc_leading_zero32__1289__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1289__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1289__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1289__count)));
                            vlSelf->__Vfunc_leading_zero32__1289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1289__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1289__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1289__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1289__count)));
                            vlSelf->__Vfunc_leading_zero32__1289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1289__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1289__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1289__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1289__count)));
                            vlSelf->__Vfunc_leading_zero32__1289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1289__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1289__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1289__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1289__count)));
                            vlSelf->__Vfunc_leading_zero32__1289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1289__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1289__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1289__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1289__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1289__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1289__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1289__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1289__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1290__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1290__part 
                            = vlSelf->__Vfunc_leading_zero32__1290__value;
                        vlSelf->__Vfunc_leading_zero32__1290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2933__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2933__part 
                            = vlSelf->__Vfunc_leading_zero32__2933__value;
                        vlSelf->__Vfunc_leading_zero32__2933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2933__count)));
                            vlSelf->__Vfunc_leading_zero32__2933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2933__count)));
                            vlSelf->__Vfunc_leading_zero32__2933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2933__count)));
                            vlSelf->__Vfunc_leading_zero32__2933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2933__count)));
                            vlSelf->__Vfunc_leading_zero32__2933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1295__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1295__part 
                            = vlSelf->__Vfunc_leading_zero32__1295__value;
                        vlSelf->__Vfunc_leading_zero32__1295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1295__count)));
                            vlSelf->__Vfunc_leading_zero32__1295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1295__count)));
                            vlSelf->__Vfunc_leading_zero32__1295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1295__count)));
                            vlSelf->__Vfunc_leading_zero32__1295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1295__count)));
                            vlSelf->__Vfunc_leading_zero32__1295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1296__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1296__part 
                            = vlSelf->__Vfunc_leading_zero32__1296__value;
                        vlSelf->__Vfunc_leading_zero32__1296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1296__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2945__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2945__part 
                            = vlSelf->__Vfunc_leading_zero32__2945__value;
                        vlSelf->__Vfunc_leading_zero32__2945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2945__count)));
                            vlSelf->__Vfunc_leading_zero32__2945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2945__count)));
                            vlSelf->__Vfunc_leading_zero32__2945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2945__count)));
                            vlSelf->__Vfunc_leading_zero32__2945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2945__count)));
                            vlSelf->__Vfunc_leading_zero32__2945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1301__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1301__part 
                            = vlSelf->__Vfunc_leading_zero32__1301__value;
                        vlSelf->__Vfunc_leading_zero32__1301__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1301__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1301__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1301__count)));
                            vlSelf->__Vfunc_leading_zero32__1301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1301__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1301__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1301__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1301__count)));
                            vlSelf->__Vfunc_leading_zero32__1301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1301__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1301__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1301__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1301__count)));
                            vlSelf->__Vfunc_leading_zero32__1301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1301__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1301__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1301__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1301__count)));
                            vlSelf->__Vfunc_leading_zero32__1301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1301__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1301__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1301__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1301__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1301__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1301__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1301__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1301__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1302__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1302__part 
                            = vlSelf->__Vfunc_leading_zero32__1302__value;
                        vlSelf->__Vfunc_leading_zero32__1302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2957__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2957__part 
                            = vlSelf->__Vfunc_leading_zero32__2957__value;
                        vlSelf->__Vfunc_leading_zero32__2957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2957__count)));
                            vlSelf->__Vfunc_leading_zero32__2957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2957__count)));
                            vlSelf->__Vfunc_leading_zero32__2957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2957__count)));
                            vlSelf->__Vfunc_leading_zero32__2957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2957__count)));
                            vlSelf->__Vfunc_leading_zero32__2957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2957__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1307__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1307__part 
                            = vlSelf->__Vfunc_leading_zero32__1307__value;
                        vlSelf->__Vfunc_leading_zero32__1307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1307__count)));
                            vlSelf->__Vfunc_leading_zero32__1307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1307__count)));
                            vlSelf->__Vfunc_leading_zero32__1307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1307__count)));
                            vlSelf->__Vfunc_leading_zero32__1307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1307__count)));
                            vlSelf->__Vfunc_leading_zero32__1307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1308__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1308__part 
                            = vlSelf->__Vfunc_leading_zero32__1308__value;
                        vlSelf->__Vfunc_leading_zero32__1308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1308__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2969__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2969__part 
                            = vlSelf->__Vfunc_leading_zero32__2969__value;
                        vlSelf->__Vfunc_leading_zero32__2969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2969__count)));
                            vlSelf->__Vfunc_leading_zero32__2969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2969__count)));
                            vlSelf->__Vfunc_leading_zero32__2969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2969__count)));
                            vlSelf->__Vfunc_leading_zero32__2969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2969__count)));
                            vlSelf->__Vfunc_leading_zero32__2969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1313__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1313__part 
                            = vlSelf->__Vfunc_leading_zero32__1313__value;
                        vlSelf->__Vfunc_leading_zero32__1313__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1313__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1313__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1313__count)));
                            vlSelf->__Vfunc_leading_zero32__1313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1313__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1313__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1313__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1313__count)));
                            vlSelf->__Vfunc_leading_zero32__1313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1313__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1313__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1313__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1313__count)));
                            vlSelf->__Vfunc_leading_zero32__1313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1313__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1313__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1313__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1313__count)));
                            vlSelf->__Vfunc_leading_zero32__1313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1313__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1313__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1313__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1313__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1313__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1313__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1313__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1313__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1314__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1314__part 
                            = vlSelf->__Vfunc_leading_zero32__1314__value;
                        vlSelf->__Vfunc_leading_zero32__1314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2981__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2981__part 
                            = vlSelf->__Vfunc_leading_zero32__2981__value;
                        vlSelf->__Vfunc_leading_zero32__2981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2981__count)));
                            vlSelf->__Vfunc_leading_zero32__2981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2981__count)));
                            vlSelf->__Vfunc_leading_zero32__2981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2981__count)));
                            vlSelf->__Vfunc_leading_zero32__2981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2981__count)));
                            vlSelf->__Vfunc_leading_zero32__2981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1319__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1319__part 
                            = vlSelf->__Vfunc_leading_zero32__1319__value;
                        vlSelf->__Vfunc_leading_zero32__1319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1319__count)));
                            vlSelf->__Vfunc_leading_zero32__1319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1319__count)));
                            vlSelf->__Vfunc_leading_zero32__1319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1319__count)));
                            vlSelf->__Vfunc_leading_zero32__1319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1319__count)));
                            vlSelf->__Vfunc_leading_zero32__1319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1320__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1320__part 
                            = vlSelf->__Vfunc_leading_zero32__1320__value;
                        vlSelf->__Vfunc_leading_zero32__1320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1320__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2993__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2993__part 
                            = vlSelf->__Vfunc_leading_zero32__2993__value;
                        vlSelf->__Vfunc_leading_zero32__2993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2993__count)));
                            vlSelf->__Vfunc_leading_zero32__2993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2993__count)));
                            vlSelf->__Vfunc_leading_zero32__2993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2993__count)));
                            vlSelf->__Vfunc_leading_zero32__2993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2993__count)));
                            vlSelf->__Vfunc_leading_zero32__2993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2993__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1325__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1325__part 
                            = vlSelf->__Vfunc_leading_zero32__1325__value;
                        vlSelf->__Vfunc_leading_zero32__1325__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1325__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1325__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1325__count)));
                            vlSelf->__Vfunc_leading_zero32__1325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1325__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1325__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1325__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1325__count)));
                            vlSelf->__Vfunc_leading_zero32__1325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1325__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1325__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1325__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1325__count)));
                            vlSelf->__Vfunc_leading_zero32__1325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1325__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1325__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1325__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1325__count)));
                            vlSelf->__Vfunc_leading_zero32__1325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1325__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1325__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1325__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1325__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1325__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1325__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1325__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1325__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1326__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1326__part 
                            = vlSelf->__Vfunc_leading_zero32__1326__value;
                        vlSelf->__Vfunc_leading_zero32__1326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3005__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3005__part 
                            = vlSelf->__Vfunc_leading_zero32__3005__value;
                        vlSelf->__Vfunc_leading_zero32__3005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3005__count)));
                            vlSelf->__Vfunc_leading_zero32__3005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3005__count)));
                            vlSelf->__Vfunc_leading_zero32__3005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3005__count)));
                            vlSelf->__Vfunc_leading_zero32__3005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3005__count)));
                            vlSelf->__Vfunc_leading_zero32__3005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1331__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1331__part 
                            = vlSelf->__Vfunc_leading_zero32__1331__value;
                        vlSelf->__Vfunc_leading_zero32__1331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1331__count)));
                            vlSelf->__Vfunc_leading_zero32__1331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1331__count)));
                            vlSelf->__Vfunc_leading_zero32__1331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1331__count)));
                            vlSelf->__Vfunc_leading_zero32__1331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1331__count)));
                            vlSelf->__Vfunc_leading_zero32__1331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1332__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1332__part 
                            = vlSelf->__Vfunc_leading_zero32__1332__value;
                        vlSelf->__Vfunc_leading_zero32__1332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1332__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3017__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3017__part 
                            = vlSelf->__Vfunc_leading_zero32__3017__value;
                        vlSelf->__Vfunc_leading_zero32__3017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3017__count)));
                            vlSelf->__Vfunc_leading_zero32__3017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3017__count)));
                            vlSelf->__Vfunc_leading_zero32__3017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3017__count)));
                            vlSelf->__Vfunc_leading_zero32__3017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3017__count)));
                            vlSelf->__Vfunc_leading_zero32__3017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1337__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1337__part 
                            = vlSelf->__Vfunc_leading_zero32__1337__value;
                        vlSelf->__Vfunc_leading_zero32__1337__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1337__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1337__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1337__count)));
                            vlSelf->__Vfunc_leading_zero32__1337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1337__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1337__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1337__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1337__count)));
                            vlSelf->__Vfunc_leading_zero32__1337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1337__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1337__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1337__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1337__count)));
                            vlSelf->__Vfunc_leading_zero32__1337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1337__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1337__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1337__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1337__count)));
                            vlSelf->__Vfunc_leading_zero32__1337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1337__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1337__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1337__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1337__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1337__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1337__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1337__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1337__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1338__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1338__part 
                            = vlSelf->__Vfunc_leading_zero32__1338__value;
                        vlSelf->__Vfunc_leading_zero32__1338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3029__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3029__part 
                            = vlSelf->__Vfunc_leading_zero32__3029__value;
                        vlSelf->__Vfunc_leading_zero32__3029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3029__count)));
                            vlSelf->__Vfunc_leading_zero32__3029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3029__count)));
                            vlSelf->__Vfunc_leading_zero32__3029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3029__count)));
                            vlSelf->__Vfunc_leading_zero32__3029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3029__count)));
                            vlSelf->__Vfunc_leading_zero32__3029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3029__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1343__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1343__part 
                            = vlSelf->__Vfunc_leading_zero32__1343__value;
                        vlSelf->__Vfunc_leading_zero32__1343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1343__count)));
                            vlSelf->__Vfunc_leading_zero32__1343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1343__count)));
                            vlSelf->__Vfunc_leading_zero32__1343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1343__count)));
                            vlSelf->__Vfunc_leading_zero32__1343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1343__count)));
                            vlSelf->__Vfunc_leading_zero32__1343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1344__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1344__part 
                            = vlSelf->__Vfunc_leading_zero32__1344__value;
                        vlSelf->__Vfunc_leading_zero32__1344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1344__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3041__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3041__part 
                            = vlSelf->__Vfunc_leading_zero32__3041__value;
                        vlSelf->__Vfunc_leading_zero32__3041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3041__count)));
                            vlSelf->__Vfunc_leading_zero32__3041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3041__count)));
                            vlSelf->__Vfunc_leading_zero32__3041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3041__count)));
                            vlSelf->__Vfunc_leading_zero32__3041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3041__count)));
                            vlSelf->__Vfunc_leading_zero32__3041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1349__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1349__part 
                            = vlSelf->__Vfunc_leading_zero32__1349__value;
                        vlSelf->__Vfunc_leading_zero32__1349__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1349__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1349__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1349__count)));
                            vlSelf->__Vfunc_leading_zero32__1349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1349__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1349__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1349__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1349__count)));
                            vlSelf->__Vfunc_leading_zero32__1349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1349__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1349__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1349__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1349__count)));
                            vlSelf->__Vfunc_leading_zero32__1349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1349__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1349__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1349__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1349__count)));
                            vlSelf->__Vfunc_leading_zero32__1349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1349__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1349__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1349__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1349__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1349__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1349__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1349__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1349__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1350__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1350__part 
                            = vlSelf->__Vfunc_leading_zero32__1350__value;
                        vlSelf->__Vfunc_leading_zero32__1350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3053__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3053__part 
                            = vlSelf->__Vfunc_leading_zero32__3053__value;
                        vlSelf->__Vfunc_leading_zero32__3053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3053__count)));
                            vlSelf->__Vfunc_leading_zero32__3053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3053__count)));
                            vlSelf->__Vfunc_leading_zero32__3053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3053__count)));
                            vlSelf->__Vfunc_leading_zero32__3053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3053__count)));
                            vlSelf->__Vfunc_leading_zero32__3053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1355__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1355__part 
                            = vlSelf->__Vfunc_leading_zero32__1355__value;
                        vlSelf->__Vfunc_leading_zero32__1355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1355__count)));
                            vlSelf->__Vfunc_leading_zero32__1355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1355__count)));
                            vlSelf->__Vfunc_leading_zero32__1355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1355__count)));
                            vlSelf->__Vfunc_leading_zero32__1355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1355__count)));
                            vlSelf->__Vfunc_leading_zero32__1355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1356__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1356__part 
                            = vlSelf->__Vfunc_leading_zero32__1356__value;
                        vlSelf->__Vfunc_leading_zero32__1356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1356__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3065__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3065__part 
                            = vlSelf->__Vfunc_leading_zero32__3065__value;
                        vlSelf->__Vfunc_leading_zero32__3065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3065__count)));
                            vlSelf->__Vfunc_leading_zero32__3065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3065__count)));
                            vlSelf->__Vfunc_leading_zero32__3065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3065__count)));
                            vlSelf->__Vfunc_leading_zero32__3065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3065__count)));
                            vlSelf->__Vfunc_leading_zero32__3065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3065__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1361__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1361__part 
                            = vlSelf->__Vfunc_leading_zero32__1361__value;
                        vlSelf->__Vfunc_leading_zero32__1361__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1361__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1361__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1361__count)));
                            vlSelf->__Vfunc_leading_zero32__1361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1361__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1361__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1361__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1361__count)));
                            vlSelf->__Vfunc_leading_zero32__1361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1361__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1361__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1361__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1361__count)));
                            vlSelf->__Vfunc_leading_zero32__1361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1361__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1361__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1361__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1361__count)));
                            vlSelf->__Vfunc_leading_zero32__1361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1361__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1361__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1361__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1361__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1361__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1361__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1361__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1361__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1362__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1362__part 
                            = vlSelf->__Vfunc_leading_zero32__1362__value;
                        vlSelf->__Vfunc_leading_zero32__1362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3077__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3077__part 
                            = vlSelf->__Vfunc_leading_zero32__3077__value;
                        vlSelf->__Vfunc_leading_zero32__3077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3077__count)));
                            vlSelf->__Vfunc_leading_zero32__3077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3077__count)));
                            vlSelf->__Vfunc_leading_zero32__3077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3077__count)));
                            vlSelf->__Vfunc_leading_zero32__3077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3077__count)));
                            vlSelf->__Vfunc_leading_zero32__3077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1367__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1367__part 
                            = vlSelf->__Vfunc_leading_zero32__1367__value;
                        vlSelf->__Vfunc_leading_zero32__1367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1367__count)));
                            vlSelf->__Vfunc_leading_zero32__1367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1367__count)));
                            vlSelf->__Vfunc_leading_zero32__1367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1367__count)));
                            vlSelf->__Vfunc_leading_zero32__1367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1367__count)));
                            vlSelf->__Vfunc_leading_zero32__1367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1367__Vfuncout)) 
                             - (IData)(8U))));
}
