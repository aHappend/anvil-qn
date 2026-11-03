// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__13(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__13\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6270__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6270__part 
                            = vlSelf->__Vfunc_leading_zero32__6270__value;
                        vlSelf->__Vfunc_leading_zero32__6270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6270__count)));
                            vlSelf->__Vfunc_leading_zero32__6270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6270__count)));
                            vlSelf->__Vfunc_leading_zero32__6270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6270__count)));
                            vlSelf->__Vfunc_leading_zero32__6270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6270__count)));
                            vlSelf->__Vfunc_leading_zero32__6270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6300__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6300__part 
                            = vlSelf->__Vfunc_leading_zero32__6300__value;
                        vlSelf->__Vfunc_leading_zero32__6300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6300__count)));
                            vlSelf->__Vfunc_leading_zero32__6300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6300__count)));
                            vlSelf->__Vfunc_leading_zero32__6300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6300__count)));
                            vlSelf->__Vfunc_leading_zero32__6300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6300__count)));
                            vlSelf->__Vfunc_leading_zero32__6300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6306__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6306__part 
                            = vlSelf->__Vfunc_leading_zero32__6306__value;
                        vlSelf->__Vfunc_leading_zero32__6306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6306__count)));
                            vlSelf->__Vfunc_leading_zero32__6306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6306__count)));
                            vlSelf->__Vfunc_leading_zero32__6306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6306__count)));
                            vlSelf->__Vfunc_leading_zero32__6306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6306__count)));
                            vlSelf->__Vfunc_leading_zero32__6306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6336__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6336__part 
                            = vlSelf->__Vfunc_leading_zero32__6336__value;
                        vlSelf->__Vfunc_leading_zero32__6336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6336__count)));
                            vlSelf->__Vfunc_leading_zero32__6336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6336__count)));
                            vlSelf->__Vfunc_leading_zero32__6336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6336__count)));
                            vlSelf->__Vfunc_leading_zero32__6336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6336__count)));
                            vlSelf->__Vfunc_leading_zero32__6336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6342__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6342__part 
                            = vlSelf->__Vfunc_leading_zero32__6342__value;
                        vlSelf->__Vfunc_leading_zero32__6342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6342__count)));
                            vlSelf->__Vfunc_leading_zero32__6342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6342__count)));
                            vlSelf->__Vfunc_leading_zero32__6342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6342__count)));
                            vlSelf->__Vfunc_leading_zero32__6342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6342__count)));
                            vlSelf->__Vfunc_leading_zero32__6342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6372__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6372__part 
                            = vlSelf->__Vfunc_leading_zero32__6372__value;
                        vlSelf->__Vfunc_leading_zero32__6372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6372__count)));
                            vlSelf->__Vfunc_leading_zero32__6372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6372__count)));
                            vlSelf->__Vfunc_leading_zero32__6372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6372__count)));
                            vlSelf->__Vfunc_leading_zero32__6372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6372__count)));
                            vlSelf->__Vfunc_leading_zero32__6372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6378__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6378__part 
                            = vlSelf->__Vfunc_leading_zero32__6378__value;
                        vlSelf->__Vfunc_leading_zero32__6378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6378__count)));
                            vlSelf->__Vfunc_leading_zero32__6378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6378__count)));
                            vlSelf->__Vfunc_leading_zero32__6378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6378__count)));
                            vlSelf->__Vfunc_leading_zero32__6378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6378__count)));
                            vlSelf->__Vfunc_leading_zero32__6378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6408__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6408__part 
                            = vlSelf->__Vfunc_leading_zero32__6408__value;
                        vlSelf->__Vfunc_leading_zero32__6408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6414__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6414__part 
                            = vlSelf->__Vfunc_leading_zero32__6414__value;
                        vlSelf->__Vfunc_leading_zero32__6414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6444__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6444__part 
                            = vlSelf->__Vfunc_leading_zero32__6444__value;
                        vlSelf->__Vfunc_leading_zero32__6444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6444__count)));
                            vlSelf->__Vfunc_leading_zero32__6444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6444__count)));
                            vlSelf->__Vfunc_leading_zero32__6444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6444__count)));
                            vlSelf->__Vfunc_leading_zero32__6444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6444__count)));
                            vlSelf->__Vfunc_leading_zero32__6444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6450__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6450__part 
                            = vlSelf->__Vfunc_leading_zero32__6450__value;
                        vlSelf->__Vfunc_leading_zero32__6450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6450__count)));
                            vlSelf->__Vfunc_leading_zero32__6450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6450__count)));
                            vlSelf->__Vfunc_leading_zero32__6450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6450__count)));
                            vlSelf->__Vfunc_leading_zero32__6450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6450__count)));
                            vlSelf->__Vfunc_leading_zero32__6450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6480__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6480__part 
                            = vlSelf->__Vfunc_leading_zero32__6480__value;
                        vlSelf->__Vfunc_leading_zero32__6480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6480__count)));
                            vlSelf->__Vfunc_leading_zero32__6480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6480__count)));
                            vlSelf->__Vfunc_leading_zero32__6480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6480__count)));
                            vlSelf->__Vfunc_leading_zero32__6480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6480__count)));
                            vlSelf->__Vfunc_leading_zero32__6480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6486__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6486__part 
                            = vlSelf->__Vfunc_leading_zero32__6486__value;
                        vlSelf->__Vfunc_leading_zero32__6486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6486__count)));
                            vlSelf->__Vfunc_leading_zero32__6486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6486__count)));
                            vlSelf->__Vfunc_leading_zero32__6486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6486__count)));
                            vlSelf->__Vfunc_leading_zero32__6486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6486__count)));
                            vlSelf->__Vfunc_leading_zero32__6486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6516__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6516__part 
                            = vlSelf->__Vfunc_leading_zero32__6516__value;
                        vlSelf->__Vfunc_leading_zero32__6516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6516__count)));
                            vlSelf->__Vfunc_leading_zero32__6516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6516__count)));
                            vlSelf->__Vfunc_leading_zero32__6516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6516__count)));
                            vlSelf->__Vfunc_leading_zero32__6516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6516__count)));
                            vlSelf->__Vfunc_leading_zero32__6516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6522__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6522__part 
                            = vlSelf->__Vfunc_leading_zero32__6522__value;
                        vlSelf->__Vfunc_leading_zero32__6522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6522__count)));
                            vlSelf->__Vfunc_leading_zero32__6522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6522__count)));
                            vlSelf->__Vfunc_leading_zero32__6522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6522__count)));
                            vlSelf->__Vfunc_leading_zero32__6522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6522__count)));
                            vlSelf->__Vfunc_leading_zero32__6522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4241__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4241__part 
                            = vlSelf->__Vfunc_leading_zero32__4241__value;
                        vlSelf->__Vfunc_leading_zero32__4241__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4241__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4241__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4241__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4241__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4241__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4253__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4253__part 
                            = vlSelf->__Vfunc_leading_zero32__4253__value;
                        vlSelf->__Vfunc_leading_zero32__4253__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4253__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4253__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4253__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4253__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4253__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4247__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4247__part 
                            = vlSelf->__Vfunc_leading_zero32__4247__value;
                        vlSelf->__Vfunc_leading_zero32__4247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4259__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4259__part 
                            = vlSelf->__Vfunc_leading_zero32__4259__value;
                        vlSelf->__Vfunc_leading_zero32__4259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4277__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4277__part 
                            = vlSelf->__Vfunc_leading_zero32__4277__value;
                        vlSelf->__Vfunc_leading_zero32__4277__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4277__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4277__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4277__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4277__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4277__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4289__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4289__part 
                            = vlSelf->__Vfunc_leading_zero32__4289__value;
                        vlSelf->__Vfunc_leading_zero32__4289__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4289__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4289__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4289__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4289__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4289__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4283__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4283__part 
                            = vlSelf->__Vfunc_leading_zero32__4283__value;
                        vlSelf->__Vfunc_leading_zero32__4283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4295__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4295__part 
                            = vlSelf->__Vfunc_leading_zero32__4295__value;
                        vlSelf->__Vfunc_leading_zero32__4295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4313__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4313__part 
                            = vlSelf->__Vfunc_leading_zero32__4313__value;
                        vlSelf->__Vfunc_leading_zero32__4313__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4313__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4313__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4313__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4313__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4313__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4325__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4325__part 
                            = vlSelf->__Vfunc_leading_zero32__4325__value;
                        vlSelf->__Vfunc_leading_zero32__4325__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4325__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4325__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4325__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4325__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4325__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4319__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4319__part 
                            = vlSelf->__Vfunc_leading_zero32__4319__value;
                        vlSelf->__Vfunc_leading_zero32__4319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4331__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4331__part 
                            = vlSelf->__Vfunc_leading_zero32__4331__value;
                        vlSelf->__Vfunc_leading_zero32__4331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4349__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4349__part 
                            = vlSelf->__Vfunc_leading_zero32__4349__value;
                        vlSelf->__Vfunc_leading_zero32__4349__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4349__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4349__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4349__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4349__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4349__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4361__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4361__part 
                            = vlSelf->__Vfunc_leading_zero32__4361__value;
                        vlSelf->__Vfunc_leading_zero32__4361__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4361__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4361__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4361__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4361__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4361__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4355__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4355__part 
                            = vlSelf->__Vfunc_leading_zero32__4355__value;
                        vlSelf->__Vfunc_leading_zero32__4355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4367__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4367__part 
                            = vlSelf->__Vfunc_leading_zero32__4367__value;
                        vlSelf->__Vfunc_leading_zero32__4367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4385__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4385__part 
                            = vlSelf->__Vfunc_leading_zero32__4385__value;
                        vlSelf->__Vfunc_leading_zero32__4385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4385__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4397__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4397__part 
                            = vlSelf->__Vfunc_leading_zero32__4397__value;
                        vlSelf->__Vfunc_leading_zero32__4397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4397__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4391__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4391__part 
                            = vlSelf->__Vfunc_leading_zero32__4391__value;
                        vlSelf->__Vfunc_leading_zero32__4391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4403__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4403__part 
                            = vlSelf->__Vfunc_leading_zero32__4403__value;
                        vlSelf->__Vfunc_leading_zero32__4403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4421__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4421__part 
                            = vlSelf->__Vfunc_leading_zero32__4421__value;
                        vlSelf->__Vfunc_leading_zero32__4421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4421__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4433__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4433__part 
                            = vlSelf->__Vfunc_leading_zero32__4433__value;
                        vlSelf->__Vfunc_leading_zero32__4433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4433__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4427__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4427__part 
                            = vlSelf->__Vfunc_leading_zero32__4427__value;
                        vlSelf->__Vfunc_leading_zero32__4427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4439__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4439__part 
                            = vlSelf->__Vfunc_leading_zero32__4439__value;
                        vlSelf->__Vfunc_leading_zero32__4439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4457__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4457__part 
                            = vlSelf->__Vfunc_leading_zero32__4457__value;
                        vlSelf->__Vfunc_leading_zero32__4457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4457__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4469__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4469__part 
                            = vlSelf->__Vfunc_leading_zero32__4469__value;
                        vlSelf->__Vfunc_leading_zero32__4469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4469__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4463__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4463__part 
                            = vlSelf->__Vfunc_leading_zero32__4463__value;
                        vlSelf->__Vfunc_leading_zero32__4463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4475__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4475__part 
                            = vlSelf->__Vfunc_leading_zero32__4475__value;
                        vlSelf->__Vfunc_leading_zero32__4475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4493__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4493__part 
                            = vlSelf->__Vfunc_leading_zero32__4493__value;
                        vlSelf->__Vfunc_leading_zero32__4493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4493__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4505__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4505__part 
                            = vlSelf->__Vfunc_leading_zero32__4505__value;
                        vlSelf->__Vfunc_leading_zero32__4505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4505__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4499__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4499__part 
                            = vlSelf->__Vfunc_leading_zero32__4499__value;
                        vlSelf->__Vfunc_leading_zero32__4499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4511__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4511__part 
                            = vlSelf->__Vfunc_leading_zero32__4511__value;
                        vlSelf->__Vfunc_leading_zero32__4511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4529__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4529__part 
                            = vlSelf->__Vfunc_leading_zero32__4529__value;
                        vlSelf->__Vfunc_leading_zero32__4529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4529__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4541__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4541__part 
                            = vlSelf->__Vfunc_leading_zero32__4541__value;
                        vlSelf->__Vfunc_leading_zero32__4541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4541__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4535__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4535__part 
                            = vlSelf->__Vfunc_leading_zero32__4535__value;
                        vlSelf->__Vfunc_leading_zero32__4535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4547__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4547__part 
                            = vlSelf->__Vfunc_leading_zero32__4547__value;
                        vlSelf->__Vfunc_leading_zero32__4547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4565__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4565__part 
                            = vlSelf->__Vfunc_leading_zero32__4565__value;
                        vlSelf->__Vfunc_leading_zero32__4565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4565__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4577__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4577__part 
                            = vlSelf->__Vfunc_leading_zero32__4577__value;
                        vlSelf->__Vfunc_leading_zero32__4577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4577__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4571__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4571__part 
                            = vlSelf->__Vfunc_leading_zero32__4571__value;
                        vlSelf->__Vfunc_leading_zero32__4571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4583__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4583__part 
                            = vlSelf->__Vfunc_leading_zero32__4583__value;
                        vlSelf->__Vfunc_leading_zero32__4583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4601__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4601__part 
                            = vlSelf->__Vfunc_leading_zero32__4601__value;
                        vlSelf->__Vfunc_leading_zero32__4601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4613__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4613__part 
                            = vlSelf->__Vfunc_leading_zero32__4613__value;
                        vlSelf->__Vfunc_leading_zero32__4613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4613__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4607__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4607__part 
                            = vlSelf->__Vfunc_leading_zero32__4607__value;
                        vlSelf->__Vfunc_leading_zero32__4607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4619__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4619__part 
                            = vlSelf->__Vfunc_leading_zero32__4619__value;
                        vlSelf->__Vfunc_leading_zero32__4619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4637__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4637__part 
                            = vlSelf->__Vfunc_leading_zero32__4637__value;
                        vlSelf->__Vfunc_leading_zero32__4637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4649__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4649__part 
                            = vlSelf->__Vfunc_leading_zero32__4649__value;
                        vlSelf->__Vfunc_leading_zero32__4649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4649__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4643__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4643__part 
                            = vlSelf->__Vfunc_leading_zero32__4643__value;
                        vlSelf->__Vfunc_leading_zero32__4643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4655__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4655__part 
                            = vlSelf->__Vfunc_leading_zero32__4655__value;
                        vlSelf->__Vfunc_leading_zero32__4655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4673__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4673__part 
                            = vlSelf->__Vfunc_leading_zero32__4673__value;
                        vlSelf->__Vfunc_leading_zero32__4673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4685__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4685__part 
                            = vlSelf->__Vfunc_leading_zero32__4685__value;
                        vlSelf->__Vfunc_leading_zero32__4685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4685__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4679__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4679__part 
                            = vlSelf->__Vfunc_leading_zero32__4679__value;
                        vlSelf->__Vfunc_leading_zero32__4679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4691__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4691__part 
                            = vlSelf->__Vfunc_leading_zero32__4691__value;
                        vlSelf->__Vfunc_leading_zero32__4691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4709__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4709__part 
                            = vlSelf->__Vfunc_leading_zero32__4709__value;
                        vlSelf->__Vfunc_leading_zero32__4709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4721__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4721__part 
                            = vlSelf->__Vfunc_leading_zero32__4721__value;
                        vlSelf->__Vfunc_leading_zero32__4721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4721__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4715__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4715__part 
                            = vlSelf->__Vfunc_leading_zero32__4715__value;
                        vlSelf->__Vfunc_leading_zero32__4715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4727__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4727__part 
                            = vlSelf->__Vfunc_leading_zero32__4727__value;
                        vlSelf->__Vfunc_leading_zero32__4727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4745__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4745__part 
                            = vlSelf->__Vfunc_leading_zero32__4745__value;
                        vlSelf->__Vfunc_leading_zero32__4745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4757__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4757__part 
                            = vlSelf->__Vfunc_leading_zero32__4757__value;
                        vlSelf->__Vfunc_leading_zero32__4757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4757__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4751__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4751__part 
                            = vlSelf->__Vfunc_leading_zero32__4751__value;
                        vlSelf->__Vfunc_leading_zero32__4751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4763__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4763__part 
                            = vlSelf->__Vfunc_leading_zero32__4763__value;
                        vlSelf->__Vfunc_leading_zero32__4763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4781__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4781__part 
                            = vlSelf->__Vfunc_leading_zero32__4781__value;
                        vlSelf->__Vfunc_leading_zero32__4781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4793__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4793__part 
                            = vlSelf->__Vfunc_leading_zero32__4793__value;
                        vlSelf->__Vfunc_leading_zero32__4793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4793__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4787__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4787__part 
                            = vlSelf->__Vfunc_leading_zero32__4787__value;
                        vlSelf->__Vfunc_leading_zero32__4787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4799__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4799__part 
                            = vlSelf->__Vfunc_leading_zero32__4799__value;
                        vlSelf->__Vfunc_leading_zero32__4799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4817__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4817__part 
                            = vlSelf->__Vfunc_leading_zero32__4817__value;
                        vlSelf->__Vfunc_leading_zero32__4817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4817__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4829__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4829__part 
                            = vlSelf->__Vfunc_leading_zero32__4829__value;
                        vlSelf->__Vfunc_leading_zero32__4829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4829__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4823__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4823__part 
                            = vlSelf->__Vfunc_leading_zero32__4823__value;
                        vlSelf->__Vfunc_leading_zero32__4823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4835__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4835__part 
                            = vlSelf->__Vfunc_leading_zero32__4835__value;
                        vlSelf->__Vfunc_leading_zero32__4835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4853__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4853__part 
                            = vlSelf->__Vfunc_leading_zero32__4853__value;
                        vlSelf->__Vfunc_leading_zero32__4853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4865__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4865__part 
                            = vlSelf->__Vfunc_leading_zero32__4865__value;
                        vlSelf->__Vfunc_leading_zero32__4865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4865__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4859__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4859__part 
                            = vlSelf->__Vfunc_leading_zero32__4859__value;
                        vlSelf->__Vfunc_leading_zero32__4859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4871__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4871__part 
                            = vlSelf->__Vfunc_leading_zero32__4871__value;
                        vlSelf->__Vfunc_leading_zero32__4871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4889__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4889__part 
                            = vlSelf->__Vfunc_leading_zero32__4889__value;
                        vlSelf->__Vfunc_leading_zero32__4889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4901__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4901__part 
                            = vlSelf->__Vfunc_leading_zero32__4901__value;
                        vlSelf->__Vfunc_leading_zero32__4901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4901__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4895__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4895__part 
                            = vlSelf->__Vfunc_leading_zero32__4895__value;
                        vlSelf->__Vfunc_leading_zero32__4895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4907__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4907__part 
                            = vlSelf->__Vfunc_leading_zero32__4907__value;
                        vlSelf->__Vfunc_leading_zero32__4907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4925__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4925__part 
                            = vlSelf->__Vfunc_leading_zero32__4925__value;
                        vlSelf->__Vfunc_leading_zero32__4925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4937__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4937__part 
                            = vlSelf->__Vfunc_leading_zero32__4937__value;
                        vlSelf->__Vfunc_leading_zero32__4937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4937__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4931__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4931__part 
                            = vlSelf->__Vfunc_leading_zero32__4931__value;
                        vlSelf->__Vfunc_leading_zero32__4931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4943__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4943__part 
                            = vlSelf->__Vfunc_leading_zero32__4943__value;
                        vlSelf->__Vfunc_leading_zero32__4943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4961__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4961__part 
                            = vlSelf->__Vfunc_leading_zero32__4961__value;
                        vlSelf->__Vfunc_leading_zero32__4961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4973__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4973__part 
                            = vlSelf->__Vfunc_leading_zero32__4973__value;
                        vlSelf->__Vfunc_leading_zero32__4973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4973__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4967__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4967__part 
                            = vlSelf->__Vfunc_leading_zero32__4967__value;
                        vlSelf->__Vfunc_leading_zero32__4967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4979__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4979__part 
                            = vlSelf->__Vfunc_leading_zero32__4979__value;
                        vlSelf->__Vfunc_leading_zero32__4979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4997__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4997__part 
                            = vlSelf->__Vfunc_leading_zero32__4997__value;
                        vlSelf->__Vfunc_leading_zero32__4997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5009__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5009__part 
                            = vlSelf->__Vfunc_leading_zero32__5009__value;
                        vlSelf->__Vfunc_leading_zero32__5009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5009__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5003__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5003__part 
                            = vlSelf->__Vfunc_leading_zero32__5003__value;
                        vlSelf->__Vfunc_leading_zero32__5003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5015__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5015__part 
                            = vlSelf->__Vfunc_leading_zero32__5015__value;
                        vlSelf->__Vfunc_leading_zero32__5015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5033__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5033__part 
                            = vlSelf->__Vfunc_leading_zero32__5033__value;
                        vlSelf->__Vfunc_leading_zero32__5033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5045__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5045__part 
                            = vlSelf->__Vfunc_leading_zero32__5045__value;
                        vlSelf->__Vfunc_leading_zero32__5045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5045__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5039__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5039__part 
                            = vlSelf->__Vfunc_leading_zero32__5039__value;
                        vlSelf->__Vfunc_leading_zero32__5039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5051__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5051__part 
                            = vlSelf->__Vfunc_leading_zero32__5051__value;
                        vlSelf->__Vfunc_leading_zero32__5051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5069__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5069__part 
                            = vlSelf->__Vfunc_leading_zero32__5069__value;
                        vlSelf->__Vfunc_leading_zero32__5069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5081__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5081__part 
                            = vlSelf->__Vfunc_leading_zero32__5081__value;
                        vlSelf->__Vfunc_leading_zero32__5081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5081__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5075__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5075__part 
                            = vlSelf->__Vfunc_leading_zero32__5075__value;
                        vlSelf->__Vfunc_leading_zero32__5075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5087__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5087__part 
                            = vlSelf->__Vfunc_leading_zero32__5087__value;
                        vlSelf->__Vfunc_leading_zero32__5087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5105__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5105__part 
                            = vlSelf->__Vfunc_leading_zero32__5105__value;
                        vlSelf->__Vfunc_leading_zero32__5105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5117__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5117__part 
                            = vlSelf->__Vfunc_leading_zero32__5117__value;
                        vlSelf->__Vfunc_leading_zero32__5117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5117__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5111__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5111__part 
                            = vlSelf->__Vfunc_leading_zero32__5111__value;
                        vlSelf->__Vfunc_leading_zero32__5111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5123__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5123__part 
                            = vlSelf->__Vfunc_leading_zero32__5123__value;
                        vlSelf->__Vfunc_leading_zero32__5123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5141__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5141__part 
                            = vlSelf->__Vfunc_leading_zero32__5141__value;
                        vlSelf->__Vfunc_leading_zero32__5141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5153__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5153__part 
                            = vlSelf->__Vfunc_leading_zero32__5153__value;
                        vlSelf->__Vfunc_leading_zero32__5153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5153__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5147__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5147__part 
                            = vlSelf->__Vfunc_leading_zero32__5147__value;
                        vlSelf->__Vfunc_leading_zero32__5147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5159__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5159__part 
                            = vlSelf->__Vfunc_leading_zero32__5159__value;
                        vlSelf->__Vfunc_leading_zero32__5159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5177__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5177__part 
                            = vlSelf->__Vfunc_leading_zero32__5177__value;
                        vlSelf->__Vfunc_leading_zero32__5177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5189__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5189__part 
                            = vlSelf->__Vfunc_leading_zero32__5189__value;
                        vlSelf->__Vfunc_leading_zero32__5189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5189__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5183__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5183__part 
                            = vlSelf->__Vfunc_leading_zero32__5183__value;
                        vlSelf->__Vfunc_leading_zero32__5183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5195__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5195__part 
                            = vlSelf->__Vfunc_leading_zero32__5195__value;
                        vlSelf->__Vfunc_leading_zero32__5195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5213__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5213__part 
                            = vlSelf->__Vfunc_leading_zero32__5213__value;
                        vlSelf->__Vfunc_leading_zero32__5213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5225__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5225__part 
                            = vlSelf->__Vfunc_leading_zero32__5225__value;
                        vlSelf->__Vfunc_leading_zero32__5225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5225__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5219__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5219__part 
                            = vlSelf->__Vfunc_leading_zero32__5219__value;
                        vlSelf->__Vfunc_leading_zero32__5219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5231__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5231__part 
                            = vlSelf->__Vfunc_leading_zero32__5231__value;
                        vlSelf->__Vfunc_leading_zero32__5231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5249__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5249__part 
                            = vlSelf->__Vfunc_leading_zero32__5249__value;
                        vlSelf->__Vfunc_leading_zero32__5249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5249__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5261__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5261__part 
                            = vlSelf->__Vfunc_leading_zero32__5261__value;
                        vlSelf->__Vfunc_leading_zero32__5261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5261__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5255__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5255__part 
                            = vlSelf->__Vfunc_leading_zero32__5255__value;
                        vlSelf->__Vfunc_leading_zero32__5255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5267__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5267__part 
                            = vlSelf->__Vfunc_leading_zero32__5267__value;
                        vlSelf->__Vfunc_leading_zero32__5267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5285__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5285__part 
                            = vlSelf->__Vfunc_leading_zero32__5285__value;
                        vlSelf->__Vfunc_leading_zero32__5285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5285__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5297__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5297__part 
                            = vlSelf->__Vfunc_leading_zero32__5297__value;
                        vlSelf->__Vfunc_leading_zero32__5297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5297__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5291__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5291__part 
                            = vlSelf->__Vfunc_leading_zero32__5291__value;
                        vlSelf->__Vfunc_leading_zero32__5291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5303__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5303__part 
                            = vlSelf->__Vfunc_leading_zero32__5303__value;
                        vlSelf->__Vfunc_leading_zero32__5303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5321__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5321__part 
                            = vlSelf->__Vfunc_leading_zero32__5321__value;
                        vlSelf->__Vfunc_leading_zero32__5321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5321__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5333__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5333__part 
                            = vlSelf->__Vfunc_leading_zero32__5333__value;
                        vlSelf->__Vfunc_leading_zero32__5333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5333__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5327__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5327__part 
                            = vlSelf->__Vfunc_leading_zero32__5327__value;
                        vlSelf->__Vfunc_leading_zero32__5327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5339__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5339__part 
                            = vlSelf->__Vfunc_leading_zero32__5339__value;
                        vlSelf->__Vfunc_leading_zero32__5339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5357__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5357__part 
                            = vlSelf->__Vfunc_leading_zero32__5357__value;
                        vlSelf->__Vfunc_leading_zero32__5357__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5357__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5357__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5357__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5357__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5357__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5369__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5369__part 
                            = vlSelf->__Vfunc_leading_zero32__5369__value;
                        vlSelf->__Vfunc_leading_zero32__5369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5369__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5363__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5363__part 
                            = vlSelf->__Vfunc_leading_zero32__5363__value;
                        vlSelf->__Vfunc_leading_zero32__5363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5375__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5375__part 
                            = vlSelf->__Vfunc_leading_zero32__5375__value;
                        vlSelf->__Vfunc_leading_zero32__5375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5393__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5393__part 
                            = vlSelf->__Vfunc_leading_zero32__5393__value;
                        vlSelf->__Vfunc_leading_zero32__5393__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5393__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5393__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5393__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5393__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5393__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5405__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5405__part 
                            = vlSelf->__Vfunc_leading_zero32__5405__value;
                        vlSelf->__Vfunc_leading_zero32__5405__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5405__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5405__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5405__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5405__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5405__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5399__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5399__part 
                            = vlSelf->__Vfunc_leading_zero32__5399__value;
                        vlSelf->__Vfunc_leading_zero32__5399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5411__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5411__part 
                            = vlSelf->__Vfunc_leading_zero32__5411__value;
                        vlSelf->__Vfunc_leading_zero32__5411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5429__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5429__part 
                            = vlSelf->__Vfunc_leading_zero32__5429__value;
                        vlSelf->__Vfunc_leading_zero32__5429__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5429__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5429__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5429__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5429__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5429__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5441__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5441__part 
                            = vlSelf->__Vfunc_leading_zero32__5441__value;
                        vlSelf->__Vfunc_leading_zero32__5441__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5441__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5441__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5441__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5441__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5441__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5435__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5435__part 
                            = vlSelf->__Vfunc_leading_zero32__5435__value;
                        vlSelf->__Vfunc_leading_zero32__5435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5447__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5447__part 
                            = vlSelf->__Vfunc_leading_zero32__5447__value;
                        vlSelf->__Vfunc_leading_zero32__5447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5465__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5465__part 
                            = vlSelf->__Vfunc_leading_zero32__5465__value;
                        vlSelf->__Vfunc_leading_zero32__5465__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5465__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5465__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5465__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5465__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5465__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5477__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5477__part 
                            = vlSelf->__Vfunc_leading_zero32__5477__value;
                        vlSelf->__Vfunc_leading_zero32__5477__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5477__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5477__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5477__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5477__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5477__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5471__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5471__part 
                            = vlSelf->__Vfunc_leading_zero32__5471__value;
                        vlSelf->__Vfunc_leading_zero32__5471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5483__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5483__part 
                            = vlSelf->__Vfunc_leading_zero32__5483__value;
                        vlSelf->__Vfunc_leading_zero32__5483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5501__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5501__part 
                            = vlSelf->__Vfunc_leading_zero32__5501__value;
                        vlSelf->__Vfunc_leading_zero32__5501__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5501__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5501__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5501__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5501__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5501__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5513__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5513__part 
                            = vlSelf->__Vfunc_leading_zero32__5513__value;
                        vlSelf->__Vfunc_leading_zero32__5513__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5513__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5513__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5513__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5513__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5513__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5507__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5507__part 
                            = vlSelf->__Vfunc_leading_zero32__5507__value;
                        vlSelf->__Vfunc_leading_zero32__5507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5519__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5519__part 
                            = vlSelf->__Vfunc_leading_zero32__5519__value;
                        vlSelf->__Vfunc_leading_zero32__5519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5537__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5537__part 
                            = vlSelf->__Vfunc_leading_zero32__5537__value;
                        vlSelf->__Vfunc_leading_zero32__5537__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5537__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5537__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5537__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5537__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5537__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5549__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5549__part 
                            = vlSelf->__Vfunc_leading_zero32__5549__value;
                        vlSelf->__Vfunc_leading_zero32__5549__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5549__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5549__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5549__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5549__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5549__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5543__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5543__part 
                            = vlSelf->__Vfunc_leading_zero32__5543__value;
                        vlSelf->__Vfunc_leading_zero32__5543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5555__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5555__part 
                            = vlSelf->__Vfunc_leading_zero32__5555__value;
                        vlSelf->__Vfunc_leading_zero32__5555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5573__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5573__part 
                            = vlSelf->__Vfunc_leading_zero32__5573__value;
                        vlSelf->__Vfunc_leading_zero32__5573__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5573__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5573__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5573__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5573__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5573__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5585__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5585__part 
                            = vlSelf->__Vfunc_leading_zero32__5585__value;
                        vlSelf->__Vfunc_leading_zero32__5585__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5585__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5585__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5585__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5585__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5585__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5579__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5579__part 
                            = vlSelf->__Vfunc_leading_zero32__5579__value;
                        vlSelf->__Vfunc_leading_zero32__5579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5591__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5591__part 
                            = vlSelf->__Vfunc_leading_zero32__5591__value;
                        vlSelf->__Vfunc_leading_zero32__5591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5609__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5609__part 
                            = vlSelf->__Vfunc_leading_zero32__5609__value;
                        vlSelf->__Vfunc_leading_zero32__5609__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5609__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5609__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5609__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5609__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5609__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5621__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5621__part 
                            = vlSelf->__Vfunc_leading_zero32__5621__value;
                        vlSelf->__Vfunc_leading_zero32__5621__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5621__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5621__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5621__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5621__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5621__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5615__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5615__part 
                            = vlSelf->__Vfunc_leading_zero32__5615__value;
                        vlSelf->__Vfunc_leading_zero32__5615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5627__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5627__part 
                            = vlSelf->__Vfunc_leading_zero32__5627__value;
                        vlSelf->__Vfunc_leading_zero32__5627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5645__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5645__part 
                            = vlSelf->__Vfunc_leading_zero32__5645__value;
                        vlSelf->__Vfunc_leading_zero32__5645__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5645__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5645__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5645__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5645__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5645__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5657__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5657__part 
                            = vlSelf->__Vfunc_leading_zero32__5657__value;
                        vlSelf->__Vfunc_leading_zero32__5657__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5657__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5657__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5657__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5657__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5657__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5651__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5651__part 
                            = vlSelf->__Vfunc_leading_zero32__5651__value;
                        vlSelf->__Vfunc_leading_zero32__5651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5663__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5663__part 
                            = vlSelf->__Vfunc_leading_zero32__5663__value;
                        vlSelf->__Vfunc_leading_zero32__5663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5681__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5681__part 
                            = vlSelf->__Vfunc_leading_zero32__5681__value;
                        vlSelf->__Vfunc_leading_zero32__5681__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5681__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5681__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5681__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5681__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5681__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5693__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5693__part 
                            = vlSelf->__Vfunc_leading_zero32__5693__value;
                        vlSelf->__Vfunc_leading_zero32__5693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5693__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5687__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5687__part 
                            = vlSelf->__Vfunc_leading_zero32__5687__value;
                        vlSelf->__Vfunc_leading_zero32__5687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5699__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5699__part 
                            = vlSelf->__Vfunc_leading_zero32__5699__value;
                        vlSelf->__Vfunc_leading_zero32__5699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5717__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5717__part 
                            = vlSelf->__Vfunc_leading_zero32__5717__value;
                        vlSelf->__Vfunc_leading_zero32__5717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5729__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5729__part 
                            = vlSelf->__Vfunc_leading_zero32__5729__value;
                        vlSelf->__Vfunc_leading_zero32__5729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5723__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5723__part 
                            = vlSelf->__Vfunc_leading_zero32__5723__value;
                        vlSelf->__Vfunc_leading_zero32__5723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5735__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5735__part 
                            = vlSelf->__Vfunc_leading_zero32__5735__value;
                        vlSelf->__Vfunc_leading_zero32__5735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5753__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5753__part 
                            = vlSelf->__Vfunc_leading_zero32__5753__value;
                        vlSelf->__Vfunc_leading_zero32__5753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5753__Vfuncout)) 
                             - (IData)(8U))));
}
