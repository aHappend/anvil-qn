// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__6(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__6\n"); );
    // Init
    QData/*32:0*/ __Vfunc_round_pack32__80__Vfuncout;
    __Vfunc_round_pack32__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__80__negative;
    __Vfunc_round_pack32__80__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__80__exponent;
    __Vfunc_round_pack32__80__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__80__significand;
    __Vfunc_round_pack32__80__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__80__shifted;
    __Vfunc_round_pack32__80__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__80__rounded;
    __Vfunc_round_pack32__80__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__80__adjusted;
    __Vfunc_round_pack32__80__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__80__biased;
    __Vfunc_round_pack32__80__biased = 0;
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__119__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__119__part 
                            = vlSelf->__Vfunc_leading_zero32__119__value;
                        vlSelf->__Vfunc_leading_zero32__119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__120__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__120__part 
                            = vlSelf->__Vfunc_leading_zero32__120__value;
                        vlSelf->__Vfunc_leading_zero32__120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__953__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__953__part 
                            = vlSelf->__Vfunc_leading_zero32__953__value;
                        vlSelf->__Vfunc_leading_zero32__953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__953__count)));
                            vlSelf->__Vfunc_leading_zero32__953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__953__count)));
                            vlSelf->__Vfunc_leading_zero32__953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__953__count)));
                            vlSelf->__Vfunc_leading_zero32__953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__953__count)));
                            vlSelf->__Vfunc_leading_zero32__953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__953__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__125__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__125__part 
                            = vlSelf->__Vfunc_leading_zero32__125__value;
                        vlSelf->__Vfunc_leading_zero32__125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__126__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__126__part 
                            = vlSelf->__Vfunc_leading_zero32__126__value;
                        vlSelf->__Vfunc_leading_zero32__126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__965__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__965__part 
                            = vlSelf->__Vfunc_leading_zero32__965__value;
                        vlSelf->__Vfunc_leading_zero32__965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__965__count)));
                            vlSelf->__Vfunc_leading_zero32__965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__965__count)));
                            vlSelf->__Vfunc_leading_zero32__965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__965__count)));
                            vlSelf->__Vfunc_leading_zero32__965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__965__count)));
                            vlSelf->__Vfunc_leading_zero32__965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__965__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__131__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__131__part 
                            = vlSelf->__Vfunc_leading_zero32__131__value;
                        vlSelf->__Vfunc_leading_zero32__131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__131__count)));
                            vlSelf->__Vfunc_leading_zero32__131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__131__count)));
                            vlSelf->__Vfunc_leading_zero32__131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__131__count)));
                            vlSelf->__Vfunc_leading_zero32__131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__131__count)));
                            vlSelf->__Vfunc_leading_zero32__131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__132__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__132__part 
                            = vlSelf->__Vfunc_leading_zero32__132__value;
                        vlSelf->__Vfunc_leading_zero32__132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__977__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__977__part 
                            = vlSelf->__Vfunc_leading_zero32__977__value;
                        vlSelf->__Vfunc_leading_zero32__977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__977__count)));
                            vlSelf->__Vfunc_leading_zero32__977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__977__count)));
                            vlSelf->__Vfunc_leading_zero32__977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__977__count)));
                            vlSelf->__Vfunc_leading_zero32__977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__977__count)));
                            vlSelf->__Vfunc_leading_zero32__977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__977__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__137__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__137__part 
                            = vlSelf->__Vfunc_leading_zero32__137__value;
                        vlSelf->__Vfunc_leading_zero32__137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__137__count)));
                            vlSelf->__Vfunc_leading_zero32__137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__137__count)));
                            vlSelf->__Vfunc_leading_zero32__137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__137__count)));
                            vlSelf->__Vfunc_leading_zero32__137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__137__count)));
                            vlSelf->__Vfunc_leading_zero32__137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__138__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__138__part 
                            = vlSelf->__Vfunc_leading_zero32__138__value;
                        vlSelf->__Vfunc_leading_zero32__138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__989__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__989__part 
                            = vlSelf->__Vfunc_leading_zero32__989__value;
                        vlSelf->__Vfunc_leading_zero32__989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__989__count)));
                            vlSelf->__Vfunc_leading_zero32__989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__989__count)));
                            vlSelf->__Vfunc_leading_zero32__989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__989__count)));
                            vlSelf->__Vfunc_leading_zero32__989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__989__count)));
                            vlSelf->__Vfunc_leading_zero32__989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__989__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__912__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__912__part 
                            = vlSelf->__Vfunc_leading_zero32__912__value;
                        vlSelf->__Vfunc_leading_zero32__912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__924__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__924__part 
                            = vlSelf->__Vfunc_leading_zero32__924__value;
                        vlSelf->__Vfunc_leading_zero32__924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__924__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__936__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__936__part 
                            = vlSelf->__Vfunc_leading_zero32__936__value;
                        vlSelf->__Vfunc_leading_zero32__936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__948__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__948__part 
                            = vlSelf->__Vfunc_leading_zero32__948__value;
                        vlSelf->__Vfunc_leading_zero32__948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__960__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__960__part 
                            = vlSelf->__Vfunc_leading_zero32__960__value;
                        vlSelf->__Vfunc_leading_zero32__960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__960__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__972__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__972__part 
                            = vlSelf->__Vfunc_leading_zero32__972__value;
                        vlSelf->__Vfunc_leading_zero32__972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__984__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__984__part 
                            = vlSelf->__Vfunc_leading_zero32__984__value;
                        vlSelf->__Vfunc_leading_zero32__984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__996__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__996__part 
                            = vlSelf->__Vfunc_leading_zero32__996__value;
                        vlSelf->__Vfunc_leading_zero32__996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__996__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__911__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__911__part 
                            = vlSelf->__Vfunc_leading_zero32__911__value;
                        vlSelf->__Vfunc_leading_zero32__911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__911__count)));
                            vlSelf->__Vfunc_leading_zero32__911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__911__count)));
                            vlSelf->__Vfunc_leading_zero32__911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__911__count)));
                            vlSelf->__Vfunc_leading_zero32__911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__911__count)));
                            vlSelf->__Vfunc_leading_zero32__911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__923__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__923__part 
                            = vlSelf->__Vfunc_leading_zero32__923__value;
                        vlSelf->__Vfunc_leading_zero32__923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__923__count)));
                            vlSelf->__Vfunc_leading_zero32__923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__923__count)));
                            vlSelf->__Vfunc_leading_zero32__923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__923__count)));
                            vlSelf->__Vfunc_leading_zero32__923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__923__count)));
                            vlSelf->__Vfunc_leading_zero32__923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__923__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__935__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__935__part 
                            = vlSelf->__Vfunc_leading_zero32__935__value;
                        vlSelf->__Vfunc_leading_zero32__935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__935__count)));
                            vlSelf->__Vfunc_leading_zero32__935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__935__count)));
                            vlSelf->__Vfunc_leading_zero32__935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__935__count)));
                            vlSelf->__Vfunc_leading_zero32__935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__935__count)));
                            vlSelf->__Vfunc_leading_zero32__935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__947__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__947__part 
                            = vlSelf->__Vfunc_leading_zero32__947__value;
                        vlSelf->__Vfunc_leading_zero32__947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__947__count)));
                            vlSelf->__Vfunc_leading_zero32__947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__947__count)));
                            vlSelf->__Vfunc_leading_zero32__947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__947__count)));
                            vlSelf->__Vfunc_leading_zero32__947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__947__count)));
                            vlSelf->__Vfunc_leading_zero32__947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__959__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__959__part 
                            = vlSelf->__Vfunc_leading_zero32__959__value;
                        vlSelf->__Vfunc_leading_zero32__959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__959__count)));
                            vlSelf->__Vfunc_leading_zero32__959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__959__count)));
                            vlSelf->__Vfunc_leading_zero32__959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__959__count)));
                            vlSelf->__Vfunc_leading_zero32__959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__959__count)));
                            vlSelf->__Vfunc_leading_zero32__959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__959__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__971__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__971__part 
                            = vlSelf->__Vfunc_leading_zero32__971__value;
                        vlSelf->__Vfunc_leading_zero32__971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__971__count)));
                            vlSelf->__Vfunc_leading_zero32__971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__971__count)));
                            vlSelf->__Vfunc_leading_zero32__971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__971__count)));
                            vlSelf->__Vfunc_leading_zero32__971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__971__count)));
                            vlSelf->__Vfunc_leading_zero32__971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__983__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__983__part 
                            = vlSelf->__Vfunc_leading_zero32__983__value;
                        vlSelf->__Vfunc_leading_zero32__983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__983__count)));
                            vlSelf->__Vfunc_leading_zero32__983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__983__count)));
                            vlSelf->__Vfunc_leading_zero32__983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__983__count)));
                            vlSelf->__Vfunc_leading_zero32__983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__983__count)));
                            vlSelf->__Vfunc_leading_zero32__983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__995__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__995__part 
                            = vlSelf->__Vfunc_leading_zero32__995__value;
                        vlSelf->__Vfunc_leading_zero32__995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__995__count)));
                            vlSelf->__Vfunc_leading_zero32__995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__995__count)));
                            vlSelf->__Vfunc_leading_zero32__995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__995__count)));
                            vlSelf->__Vfunc_leading_zero32__995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__995__count)));
                            vlSelf->__Vfunc_leading_zero32__995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__995__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__take_bit 
        = (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
           >= (1U | (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__root 
                     << 2U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large1 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large1;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small1 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small1;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__distance1 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__distance1;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent1 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent1;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent2 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent2;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent3 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent3;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative1 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative1;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative2 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative2;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative3 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative3;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract1 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract1;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__failed 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__failed;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract2 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract2;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__negative1 = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract1 = 0U;
    if (vlSelf->leaf_tb__DOT__rst_n) {
        if (vlSelf->leaf_tb__DOT__flush) {
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__exponent1 = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__exponent1 = 0U;
        } else {
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__exponent1 = 0xf82U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__exponent1 = 0xf82U;
        }
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__exponent1 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__exponent1 = 0U;
    }
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__next_remainder 
        = (0x7fffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__take_bit)
                           ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
                              - (1U | (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__root 
                                       << 2U))) : vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__79__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__79__part 
                            = vlSelf->__Vfunc_leading_zero32__79__value;
                        vlSelf->__Vfunc_leading_zero32__79__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__79__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__79__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__79__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__79__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__79__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__80__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__significand4;
    __Vfunc_round_pack32__80__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent4;
    __Vfunc_round_pack32__80__negative = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative4;
    __Vfunc_round_pack32__80__adjusted = __Vfunc_round_pack32__80__exponent;
    __Vfunc_round_pack32__80__shifted = __Vfunc_round_pack32__80__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__80__exponent))) {
        vlSelf->__Vfunc_shift_jam27__81__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__80__exponent)));
        vlSelf->__Vfunc_shift_jam27__81__value = __Vfunc_round_pack32__80__significand;
        __Vfunc_round_pack32__80__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__81__distance))) {
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__81__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__81__distance))) {
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__81__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__81__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__81__value, (IData)(vlSelf->__Vfunc_shift_jam27__81__distance)));
            vlSelf->__Vfunc_shift_jam27__81__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__81__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__81__distance)))));
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__81__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__81__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__81__discarded))));
        }
        __Vfunc_round_pack32__80__shifted = vlSelf->__Vfunc_shift_jam27__81__Vfuncout;
    }
    __Vfunc_round_pack32__80__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__80__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__80__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__80__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__80__rounded)) {
        __Vfunc_round_pack32__80__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__80__rounded, 1U));
        __Vfunc_round_pack32__80__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__80__adjusted)));
    }
    __Vfunc_round_pack32__80__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__80__rounded)) {
        __Vfunc_round_pack32__80__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__80__adjusted)));
    }
    __Vfunc_round_pack32__80__Vfuncout = (((0U == __Vfunc_round_pack32__80__significand) 
                                           | (0U == __Vfunc_round_pack32__80__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__80__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__80__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__80__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__80__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__80__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__packed5 
        = __Vfunc_round_pack32__80__Vfuncout;
    vlSelf->__VdfgTmp_hf4eab645__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 7U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 7U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd4053547__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 0x17U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 0x17U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h85e0c953__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 0x27U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 0x27U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h922851d8__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 0x37U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 0x37U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 7U)))) << 0x17U) 
           | (0x7f0000U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine) 
                           << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                    >> 0x10U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 0x27U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                    >> 0x20U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 0x37U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                    >> 0x30U)) << 0x10U)));
    vlSelf->__VdfgTmp_h9cae445e__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 7U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 7U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha96271f0__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 0x17U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 0x17U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb3169a5e__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 0x27U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 0x27U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he4d8cc52__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 0x37U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 0x37U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 7U)))) << 0x17U) 
           | (0x7f0000U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine) 
                           << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                    >> 0x10U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 0x27U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                    >> 0x20U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 0x37U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                    >> 0x30U)) << 0x10U)));
    vlSelf->__VdfgTmp_h45e627dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf157bcc7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdcfe23de__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5a759a1d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he7e1c4f5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hed2d9fd6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb63c1596__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hba05e26a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1002__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1002__part 
                            = vlSelf->__Vfunc_leading_zero32__1002__value;
                        vlSelf->__Vfunc_leading_zero32__1002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1002__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1020__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1020__part 
                            = vlSelf->__Vfunc_leading_zero32__1020__value;
                        vlSelf->__Vfunc_leading_zero32__1020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1038__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1038__part 
                            = vlSelf->__Vfunc_leading_zero32__1038__value;
                        vlSelf->__Vfunc_leading_zero32__1038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1038__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1056__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1056__part 
                            = vlSelf->__Vfunc_leading_zero32__1056__value;
                        vlSelf->__Vfunc_leading_zero32__1056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1074__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1074__part 
                            = vlSelf->__Vfunc_leading_zero32__1074__value;
                        vlSelf->__Vfunc_leading_zero32__1074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1074__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1092__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1092__part 
                            = vlSelf->__Vfunc_leading_zero32__1092__value;
                        vlSelf->__Vfunc_leading_zero32__1092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1110__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1110__part 
                            = vlSelf->__Vfunc_leading_zero32__1110__value;
                        vlSelf->__Vfunc_leading_zero32__1110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1110__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1128__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1128__part 
                            = vlSelf->__Vfunc_leading_zero32__1128__value;
                        vlSelf->__Vfunc_leading_zero32__1128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1008__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1008__part 
                            = vlSelf->__Vfunc_leading_zero32__1008__value;
                        vlSelf->__Vfunc_leading_zero32__1008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1014__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1014__part 
                            = vlSelf->__Vfunc_leading_zero32__1014__value;
                        vlSelf->__Vfunc_leading_zero32__1014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1044__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1044__part 
                            = vlSelf->__Vfunc_leading_zero32__1044__value;
                        vlSelf->__Vfunc_leading_zero32__1044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1050__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1050__part 
                            = vlSelf->__Vfunc_leading_zero32__1050__value;
                        vlSelf->__Vfunc_leading_zero32__1050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1080__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1080__part 
                            = vlSelf->__Vfunc_leading_zero32__1080__value;
                        vlSelf->__Vfunc_leading_zero32__1080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1086__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1086__part 
                            = vlSelf->__Vfunc_leading_zero32__1086__value;
                        vlSelf->__Vfunc_leading_zero32__1086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1116__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1116__part 
                            = vlSelf->__Vfunc_leading_zero32__1116__value;
                        vlSelf->__Vfunc_leading_zero32__1116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1122__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1122__part 
                            = vlSelf->__Vfunc_leading_zero32__1122__value;
                        vlSelf->__Vfunc_leading_zero32__1122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1001__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1001__part 
                            = vlSelf->__Vfunc_leading_zero32__1001__value;
                        vlSelf->__Vfunc_leading_zero32__1001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1001__count)));
                            vlSelf->__Vfunc_leading_zero32__1001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1001__count)));
                            vlSelf->__Vfunc_leading_zero32__1001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1001__count)));
                            vlSelf->__Vfunc_leading_zero32__1001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1001__count)));
                            vlSelf->__Vfunc_leading_zero32__1001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1001__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1013__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1013__part 
                            = vlSelf->__Vfunc_leading_zero32__1013__value;
                        vlSelf->__Vfunc_leading_zero32__1013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1013__count)));
                            vlSelf->__Vfunc_leading_zero32__1013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1013__count)));
                            vlSelf->__Vfunc_leading_zero32__1013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1013__count)));
                            vlSelf->__Vfunc_leading_zero32__1013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1013__count)));
                            vlSelf->__Vfunc_leading_zero32__1013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1013__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1007__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1007__part 
                            = vlSelf->__Vfunc_leading_zero32__1007__value;
                        vlSelf->__Vfunc_leading_zero32__1007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1007__count)));
                            vlSelf->__Vfunc_leading_zero32__1007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1007__count)));
                            vlSelf->__Vfunc_leading_zero32__1007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1007__count)));
                            vlSelf->__Vfunc_leading_zero32__1007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1007__count)));
                            vlSelf->__Vfunc_leading_zero32__1007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1019__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1019__part 
                            = vlSelf->__Vfunc_leading_zero32__1019__value;
                        vlSelf->__Vfunc_leading_zero32__1019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1019__count)));
                            vlSelf->__Vfunc_leading_zero32__1019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1019__count)));
                            vlSelf->__Vfunc_leading_zero32__1019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1019__count)));
                            vlSelf->__Vfunc_leading_zero32__1019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1019__count)));
                            vlSelf->__Vfunc_leading_zero32__1019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1037__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1037__part 
                            = vlSelf->__Vfunc_leading_zero32__1037__value;
                        vlSelf->__Vfunc_leading_zero32__1037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1037__count)));
                            vlSelf->__Vfunc_leading_zero32__1037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1037__count)));
                            vlSelf->__Vfunc_leading_zero32__1037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1037__count)));
                            vlSelf->__Vfunc_leading_zero32__1037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1037__count)));
                            vlSelf->__Vfunc_leading_zero32__1037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1037__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1049__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1049__part 
                            = vlSelf->__Vfunc_leading_zero32__1049__value;
                        vlSelf->__Vfunc_leading_zero32__1049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1049__count)));
                            vlSelf->__Vfunc_leading_zero32__1049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1049__count)));
                            vlSelf->__Vfunc_leading_zero32__1049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1049__count)));
                            vlSelf->__Vfunc_leading_zero32__1049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1049__count)));
                            vlSelf->__Vfunc_leading_zero32__1049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1049__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1043__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1043__part 
                            = vlSelf->__Vfunc_leading_zero32__1043__value;
                        vlSelf->__Vfunc_leading_zero32__1043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1043__count)));
                            vlSelf->__Vfunc_leading_zero32__1043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1043__count)));
                            vlSelf->__Vfunc_leading_zero32__1043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1043__count)));
                            vlSelf->__Vfunc_leading_zero32__1043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1043__count)));
                            vlSelf->__Vfunc_leading_zero32__1043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1055__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1055__part 
                            = vlSelf->__Vfunc_leading_zero32__1055__value;
                        vlSelf->__Vfunc_leading_zero32__1055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1055__count)));
                            vlSelf->__Vfunc_leading_zero32__1055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1055__count)));
                            vlSelf->__Vfunc_leading_zero32__1055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1055__count)));
                            vlSelf->__Vfunc_leading_zero32__1055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1055__count)));
                            vlSelf->__Vfunc_leading_zero32__1055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1073__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1073__part 
                            = vlSelf->__Vfunc_leading_zero32__1073__value;
                        vlSelf->__Vfunc_leading_zero32__1073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1073__count)));
                            vlSelf->__Vfunc_leading_zero32__1073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1073__count)));
                            vlSelf->__Vfunc_leading_zero32__1073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1073__count)));
                            vlSelf->__Vfunc_leading_zero32__1073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1073__count)));
                            vlSelf->__Vfunc_leading_zero32__1073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1073__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1085__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1085__part 
                            = vlSelf->__Vfunc_leading_zero32__1085__value;
                        vlSelf->__Vfunc_leading_zero32__1085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1085__count)));
                            vlSelf->__Vfunc_leading_zero32__1085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1085__count)));
                            vlSelf->__Vfunc_leading_zero32__1085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1085__count)));
                            vlSelf->__Vfunc_leading_zero32__1085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1085__count)));
                            vlSelf->__Vfunc_leading_zero32__1085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1085__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1079__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1079__part 
                            = vlSelf->__Vfunc_leading_zero32__1079__value;
                        vlSelf->__Vfunc_leading_zero32__1079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1079__count)));
                            vlSelf->__Vfunc_leading_zero32__1079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1079__count)));
                            vlSelf->__Vfunc_leading_zero32__1079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1079__count)));
                            vlSelf->__Vfunc_leading_zero32__1079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1079__count)));
                            vlSelf->__Vfunc_leading_zero32__1079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1091__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1091__part 
                            = vlSelf->__Vfunc_leading_zero32__1091__value;
                        vlSelf->__Vfunc_leading_zero32__1091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1091__count)));
                            vlSelf->__Vfunc_leading_zero32__1091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1091__count)));
                            vlSelf->__Vfunc_leading_zero32__1091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1091__count)));
                            vlSelf->__Vfunc_leading_zero32__1091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1091__count)));
                            vlSelf->__Vfunc_leading_zero32__1091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1109__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1109__part 
                            = vlSelf->__Vfunc_leading_zero32__1109__value;
                        vlSelf->__Vfunc_leading_zero32__1109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1109__count)));
                            vlSelf->__Vfunc_leading_zero32__1109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1109__count)));
                            vlSelf->__Vfunc_leading_zero32__1109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1109__count)));
                            vlSelf->__Vfunc_leading_zero32__1109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1109__count)));
                            vlSelf->__Vfunc_leading_zero32__1109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1109__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1121__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1121__part 
                            = vlSelf->__Vfunc_leading_zero32__1121__value;
                        vlSelf->__Vfunc_leading_zero32__1121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1121__count)));
                            vlSelf->__Vfunc_leading_zero32__1121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1121__count)));
                            vlSelf->__Vfunc_leading_zero32__1121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1121__count)));
                            vlSelf->__Vfunc_leading_zero32__1121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1121__count)));
                            vlSelf->__Vfunc_leading_zero32__1121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1121__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1115__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1115__part 
                            = vlSelf->__Vfunc_leading_zero32__1115__value;
                        vlSelf->__Vfunc_leading_zero32__1115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1115__count)));
                            vlSelf->__Vfunc_leading_zero32__1115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1115__count)));
                            vlSelf->__Vfunc_leading_zero32__1115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1115__count)));
                            vlSelf->__Vfunc_leading_zero32__1115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1115__count)));
                            vlSelf->__Vfunc_leading_zero32__1115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1127__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1127__part 
                            = vlSelf->__Vfunc_leading_zero32__1127__value;
                        vlSelf->__Vfunc_leading_zero32__1127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1127__count)));
                            vlSelf->__Vfunc_leading_zero32__1127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1127__count)));
                            vlSelf->__Vfunc_leading_zero32__1127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1127__count)));
                            vlSelf->__Vfunc_leading_zero32__1127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1127__count)));
                            vlSelf->__Vfunc_leading_zero32__1127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1127__Vfuncout)) 
                             - (IData)(8U))));
}

VL_INLINE_OPT void Vleaf_tb___024root___nba_comb__TOP__0(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSelf->leaf_tb__DOT__flush)) 
           & (IData)(vlSelf->leaf_tb__DOT__rst_n));
}

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__8(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__8\n"); );
    // Body
    if (vlSelf->leaf_tb__DOT__rst_n) {
        if ((1U & (~ (IData)(vlSelf->leaf_tb__DOT__flush)))) {
            if (((IData)(vlSelf->leaf_tb__DOT__in_valid) 
                 & (IData)(vlSelf->leaf_tb__DOT__in_ready))) {
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector 
                    = vlSelf->leaf_tb__DOT__in_is_key;
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head 
                    = vlSelf->leaf_tb__DOT__in_head;
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer 
                    = vlSelf->leaf_tb__DOT__in_layer;
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position 
                    = vlSelf->leaf_tb__DOT__in_pos;
            }
        }
        if (vlSelf->leaf_tb__DOT__flush) {
            vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed = 0U;
            vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__age = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U] = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U] = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U] = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U] = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_failed = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__owned = 0U;
            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head_failed = 0U;
        } else {
            if (((IData)(vlSelf->leaf_tb__DOT__in_valid) 
                 & (IData)(vlSelf->leaf_tb__DOT__in_ready))) {
                vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__age = 0U;
            }
            if (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__owned) 
                 & (~ (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid)))) {
                vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__age 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__age)));
                if ((0x27U == (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__age))) {
                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        = ((1U & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_packed 
                                          >> 0x20U)))
                            ? 0U : (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_packed));
                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_failed 
                        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[0U] 
                                  | (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_packed 
                                             >> 0x20U))) 
                                 | (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head_failed)));
                }
                if ((0x84U == (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__age))) {
                    vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid = 1U;
                    if (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head_failed) 
                         | (0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__rotated_failed)))) {
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed = 1U;
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U] = 0U;
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U] = 0U;
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U] = 0U;
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U] = 0U;
                    } else {
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed = 0U;
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U] 
                            = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_x 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_x));
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U] 
                            = ((0xffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_x) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x)))))) 
                                  << 0x10U));
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U] 
                            = (((IData)((((QData)((IData)(
                                                          ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x)))))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                                           << 0x10U) 
                                                                          | (0xffffU 
                                                                             & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x))))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U] 
                            = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_y 
                                << 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                                           << 0x10U) 
                                                                          | (0xffffU 
                                                                             & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x))))) 
                                                      >> 0x20U)) 
                                             >> 0x10U));
                    }
                }
            }
            if (((IData)(vlSelf->leaf_tb__DOT__in_valid) 
                 & (IData)(vlSelf->leaf_tb__DOT__in_ready))) {
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__owned = 1U;
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head_failed 
                    = ((0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element)) 
                       | ((0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_coefficient)) 
                          | ((0x24U <= vlSelf->leaf_tb__DOT__in_layer) 
                             | ((0xa000U <= vlSelf->leaf_tb__DOT__in_pos) 
                                | ((IData)(vlSelf->leaf_tb__DOT__in_is_key)
                                    ? (8U <= (IData)(vlSelf->leaf_tb__DOT__in_head))
                                    : (0x20U <= (IData)(vlSelf->leaf_tb__DOT__in_head)))))));
            }
            if (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                 & (IData)(vlSelf->leaf_tb__DOT__out_ready))) {
                vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid = 0U;
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed = 0U;
                vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__age = 0U;
                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__owned = 0U;
            }
        }
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position = 0U;
        vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__age = 0U;
        vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_failed = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__owned = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head_failed = 0U;
    }
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__age 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__age;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid 
        = vlSelf->__Vdly__leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid;
    if ((0x358637bdU <= (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean))) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small_value = 0x358637bdU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 = 0x6bU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        >> 0x17U));
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_value = 0x358637bdU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        >> 0x17U));
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 = 0x6bU;
    }
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_exponent 
        = ((0U == (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0))
            ? 0xf82U : (0xfffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0) 
                                  - (IData)(0x7fU))));
}

VL_INLINE_OPT void Vleaf_tb___024root___nba_comb__TOP__1(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*23:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw = 0;
    CData/*5:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger = 0;
    CData/*0:0*/ leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger;
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger = 0;
    QData/*32:0*/ __Vfunc_round_pack32__5__Vfuncout;
    __Vfunc_round_pack32__5__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__5__exponent;
    __Vfunc_round_pack32__5__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__5__significand;
    __Vfunc_round_pack32__5__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__5__shifted;
    __Vfunc_round_pack32__5__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__5__rounded;
    __Vfunc_round_pack32__5__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__5__adjusted;
    __Vfunc_round_pack32__5__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__5__biased;
    __Vfunc_round_pack32__5__biased = 0;
    IData/*16:0*/ __Vfunc_round_bf16__23__Vfuncout;
    __Vfunc_round_bf16__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__23__value;
    __Vfunc_round_bf16__23__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__23__rounded;
    __Vfunc_round_bf16__23__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__25__Vfuncout;
    __Vfunc_round_bf16__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__25__value;
    __Vfunc_round_bf16__25__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__25__rounded;
    __Vfunc_round_bf16__25__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__27__Vfuncout;
    __Vfunc_round_bf16__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__27__value;
    __Vfunc_round_bf16__27__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__27__rounded;
    __Vfunc_round_bf16__27__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__29__Vfuncout;
    __Vfunc_round_bf16__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__29__value;
    __Vfunc_round_bf16__29__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__29__rounded;
    __Vfunc_round_bf16__29__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__31__Vfuncout;
    __Vfunc_round_bf16__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__31__value;
    __Vfunc_round_bf16__31__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__31__rounded;
    __Vfunc_round_bf16__31__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__33__Vfuncout;
    __Vfunc_round_bf16__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__33__value;
    __Vfunc_round_bf16__33__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__33__rounded;
    __Vfunc_round_bf16__33__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__35__Vfuncout;
    __Vfunc_round_bf16__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__35__value;
    __Vfunc_round_bf16__35__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__35__rounded;
    __Vfunc_round_bf16__35__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__37__Vfuncout;
    __Vfunc_round_bf16__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__37__value;
    __Vfunc_round_bf16__37__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__37__rounded;
    __Vfunc_round_bf16__37__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__39__Vfuncout;
    __Vfunc_round_bf16__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__39__value;
    __Vfunc_round_bf16__39__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__39__rounded;
    __Vfunc_round_bf16__39__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__41__Vfuncout;
    __Vfunc_round_bf16__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__41__value;
    __Vfunc_round_bf16__41__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__41__rounded;
    __Vfunc_round_bf16__41__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__43__Vfuncout;
    __Vfunc_round_bf16__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__43__value;
    __Vfunc_round_bf16__43__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__43__rounded;
    __Vfunc_round_bf16__43__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__45__Vfuncout;
    __Vfunc_round_bf16__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__45__value;
    __Vfunc_round_bf16__45__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__45__rounded;
    __Vfunc_round_bf16__45__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__47__Vfuncout;
    __Vfunc_round_bf16__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__47__value;
    __Vfunc_round_bf16__47__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__47__rounded;
    __Vfunc_round_bf16__47__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__49__Vfuncout;
    __Vfunc_round_bf16__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__49__value;
    __Vfunc_round_bf16__49__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__49__rounded;
    __Vfunc_round_bf16__49__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__51__Vfuncout;
    __Vfunc_round_bf16__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__51__value;
    __Vfunc_round_bf16__51__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__51__rounded;
    __Vfunc_round_bf16__51__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__53__Vfuncout;
    __Vfunc_round_bf16__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__53__value;
    __Vfunc_round_bf16__53__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__53__rounded;
    __Vfunc_round_bf16__53__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__57__Vfuncout;
    __Vfunc_round_bf16__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__57__value;
    __Vfunc_round_bf16__57__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__57__rounded;
    __Vfunc_round_bf16__57__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__59__Vfuncout;
    __Vfunc_round_bf16__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__59__value;
    __Vfunc_round_bf16__59__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__59__rounded;
    __Vfunc_round_bf16__59__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__63__Vfuncout;
    __Vfunc_round_bf16__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__63__value;
    __Vfunc_round_bf16__63__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__63__rounded;
    __Vfunc_round_bf16__63__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__65__Vfuncout;
    __Vfunc_round_bf16__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__65__value;
    __Vfunc_round_bf16__65__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__65__rounded;
    __Vfunc_round_bf16__65__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__69__Vfuncout;
    __Vfunc_round_bf16__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__69__value;
    __Vfunc_round_bf16__69__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__69__rounded;
    __Vfunc_round_bf16__69__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__71__Vfuncout;
    __Vfunc_round_bf16__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__71__value;
    __Vfunc_round_bf16__71__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__71__rounded;
    __Vfunc_round_bf16__71__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__75__Vfuncout;
    __Vfunc_round_bf16__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__75__value;
    __Vfunc_round_bf16__75__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__75__rounded;
    __Vfunc_round_bf16__75__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__77__Vfuncout;
    __Vfunc_round_bf16__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__77__value;
    __Vfunc_round_bf16__77__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__77__rounded;
    __Vfunc_round_bf16__77__rounded = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_49;
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__root_ready 
        = ((~ (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__active)) 
           & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__reciprocal_ready 
        = ((~ (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__active)) 
           & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__reciprocal_failed 
        = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
           & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__result_failed));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scale_failed 
        = ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
             & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__error4)) 
            << 7U) | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__error4)) 
                       << 6U) | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                   & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__error4)) 
                                  << 5U) | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                              & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__error4)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                 & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__error4)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                    & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__error4)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__error4)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__error4)))))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_failed 
        = ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
             & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__error4)) 
            << 7U) | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__error4)) 
                       << 6U) | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                   & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__error4)) 
                                  << 5U) | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                              & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__error4)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                 & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__error4)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                    & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__error4)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__error4)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__error4)))))))));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__value4)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__value4)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__value4)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__value4)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__value5)
                        : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__value4)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__value4)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__value4)
                        : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__value4)
             : 0U) >= ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                        ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__value4)
                        : 0U));
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) {
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__error4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__root 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__value;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__reciprocal 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__value;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__result 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xs 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__yc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xs 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__yc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xs 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__yc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xs 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__yc 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT____VdfgTmp_h2107896c__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__value 
                        >> 0x17U));
        vlSelf->__VdfgTmp_hec2e5904__0 = (0x7fffffffU 
                                          & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__value4);
        vlSelf->__VdfgTmp_hdc73d3de__0 = (0x7fffffffU 
                                          & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__value4);
        vlSelf->__VdfgTmp_h8430f6a7__0 = (0x7fffffffU 
                                          & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__value4);
        vlSelf->__VdfgTmp_ha859bedd__0 = (0x7fffffffU 
                                          & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__value4);
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT____VdfgTmp_hf7005d7d__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__value 
                        >> 0x17U));
        vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5 
                        >> 0x17U));
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[0U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[1U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[2U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[3U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[4U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[5U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[6U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[7U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[0U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[1U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[2U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[3U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[4U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[5U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[6U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[7U] 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__value4;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_sum 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__value5;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__value5 
                        >> 0x17U));
        __Vfunc_round_bf16__77__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__value5;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__root = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__reciprocal = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__result = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xs = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__yc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xs = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__yc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xs = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__yc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xs = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__yc = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT____VdfgTmp_h2107896c__0 = 0U;
        vlSelf->__VdfgTmp_hec2e5904__0 = 0U;
        vlSelf->__VdfgTmp_hdc73d3de__0 = 0U;
        vlSelf->__VdfgTmp_h8430f6a7__0 = 0U;
        vlSelf->__VdfgTmp_ha859bedd__0 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT____VdfgTmp_hf7005d7d__0 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0 = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[0U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[1U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[2U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[3U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[4U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[5U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[6U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled[7U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[0U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[1U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[2U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[3U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[4U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[5U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[6U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product[7U] = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_sum = 0U;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0 = 0U;
        __Vfunc_round_bf16__77__value = 0U;
    }
    __Vfunc_round_bf16__77__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__77__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__77__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__77__value)))))));
    __Vfunc_round_bf16__77__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__78__value 
                        = __Vfunc_round_bf16__77__value;
                    vlSelf->__Vfunc_fp32_invalid__78__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__78__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__78__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__77__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__77__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_y 
        = __Vfunc_round_bf16__77__Vfuncout;
    __Vfunc_round_bf16__71__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__value5
                                      : 0U);
    __Vfunc_round_bf16__71__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__71__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__71__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__71__value)))))));
    __Vfunc_round_bf16__71__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__72__value 
                        = __Vfunc_round_bf16__71__value;
                    vlSelf->__Vfunc_fp32_invalid__72__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__72__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__72__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__71__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__71__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
        = __Vfunc_round_bf16__71__Vfuncout;
    __Vfunc_round_bf16__65__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__value5
                                      : 0U);
    __Vfunc_round_bf16__65__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__65__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__65__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__65__value)))))));
    __Vfunc_round_bf16__65__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__66__value 
                        = __Vfunc_round_bf16__65__value;
                    vlSelf->__Vfunc_fp32_invalid__66__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__66__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__66__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__65__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__65__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y 
        = __Vfunc_round_bf16__65__Vfuncout;
    __Vfunc_round_bf16__59__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__value5
                                      : 0U);
    __Vfunc_round_bf16__59__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__59__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__59__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__59__value)))))));
    __Vfunc_round_bf16__59__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__60__value 
                        = __Vfunc_round_bf16__59__value;
                    vlSelf->__Vfunc_fp32_invalid__60__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__60__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__60__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__59__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__59__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
        = __Vfunc_round_bf16__59__Vfuncout;
    __Vfunc_round_bf16__75__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__value5
                                      : 0U);
    __Vfunc_round_bf16__75__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__75__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__75__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__75__value)))))));
    __Vfunc_round_bf16__75__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__76__value 
                        = __Vfunc_round_bf16__75__value;
                    vlSelf->__Vfunc_fp32_invalid__76__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__76__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__76__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__75__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__75__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x 
        = __Vfunc_round_bf16__75__Vfuncout;
    __Vfunc_round_bf16__69__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__value5
                                      : 0U);
    __Vfunc_round_bf16__69__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__69__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__69__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__69__value)))))));
    __Vfunc_round_bf16__69__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__70__value 
                        = __Vfunc_round_bf16__69__value;
                    vlSelf->__Vfunc_fp32_invalid__70__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__70__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__70__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__69__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__69__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_x 
        = __Vfunc_round_bf16__69__Vfuncout;
    __Vfunc_round_bf16__63__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__value5
                                      : 0U);
    __Vfunc_round_bf16__63__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__63__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__63__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__63__value)))))));
    __Vfunc_round_bf16__63__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__64__value 
                        = __Vfunc_round_bf16__63__value;
                    vlSelf->__Vfunc_fp32_invalid__64__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__64__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__64__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__63__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__63__rounded));
    __Vfunc_round_bf16__57__value = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__value5
                                      : 0U);
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_x 
        = __Vfunc_round_bf16__63__Vfuncout;
    __Vfunc_round_bf16__57__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__57__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__57__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__57__value)))))));
    __Vfunc_round_bf16__57__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__58__value 
                        = __Vfunc_round_bf16__57__value;
                    vlSelf->__Vfunc_fp32_invalid__58__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__58__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__58__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__57__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__57__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_x 
        = __Vfunc_round_bf16__57__Vfuncout;
    vlSelf->leaf_tb__DOT__out_valid = ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_valid));
    vlSelf->leaf_tb__DOT__in_ready = ((~ (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__owned)) 
                                      & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0));
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__result;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__result;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__result;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__result;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__result;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__result;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__result;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__result;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__result;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__a;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__b;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__yc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xs;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xs;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__yc;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__yc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xs;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xs;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__yc;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__yc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xs;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xs;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__yc;
    }
    if (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__yc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xs;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xs;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__yc;
    }
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__raw_b 
        = (((0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT____VdfgTmp_h2107896c__0)) 
            << 0x17U) | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                          ? (0x7fffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__value)
                          : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b 
        = (((~ ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__value4 
                   >> 0x1fU))) << 0x1fU) | vlSelf->__VdfgTmp_hec2e5904__0);
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__value4)
             : 0U) >= vlSelf->__VdfgTmp_hec2e5904__0);
    vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b 
        = (((~ ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__value4 
                   >> 0x1fU))) << 0x1fU) | vlSelf->__VdfgTmp_hdc73d3de__0);
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__value4)
             : 0U) >= vlSelf->__VdfgTmp_hdc73d3de__0);
    vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b 
        = (((~ ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__value4 
                   >> 0x1fU))) << 0x1fU) | vlSelf->__VdfgTmp_h8430f6a7__0);
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__value4)
             : 0U) >= vlSelf->__VdfgTmp_h8430f6a7__0);
    vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b 
        = (((~ ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__value4 
                   >> 0x1fU))) << 0x1fU) | vlSelf->__VdfgTmp_ha859bedd__0);
    leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
             ? (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__value4)
             : 0U) >= vlSelf->__VdfgTmp_ha859bedd__0);
    vlSelf->__VdfgTmp_h4be3044c__0 = ((0U == (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT____VdfgTmp_hf7005d7d__0))
                                       ? 0xf82U : (0xfffU 
                                                   & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT____VdfgTmp_hf7005d7d__0) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b 
        = (((0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT____VdfgTmp_hf7005d7d__0)) 
            << 0x17U) | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                          ? (0x7fffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__value)
                          : 0U));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw 
        = (((0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0)) 
            << 0x17U) | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                          ? (0x7fffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__value5)
                          : 0U));
    __Vfunc_round_bf16__23__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [0U];
    __Vfunc_round_bf16__23__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__23__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__23__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__23__value)))))));
    __Vfunc_round_bf16__23__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__24__value 
                        = __Vfunc_round_bf16__23__value;
                    vlSelf->__Vfunc_fp32_invalid__24__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__24__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__24__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__23__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__23__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__23__Vfuncout;
    __Vfunc_round_bf16__27__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [1U];
    __Vfunc_round_bf16__27__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__27__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__27__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__27__value)))))));
    __Vfunc_round_bf16__27__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__28__value 
                        = __Vfunc_round_bf16__27__value;
                    vlSelf->__Vfunc_fp32_invalid__28__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__28__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__28__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__27__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__27__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__27__Vfuncout;
    __Vfunc_round_bf16__31__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [2U];
    __Vfunc_round_bf16__31__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__31__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__31__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__31__value)))))));
    __Vfunc_round_bf16__31__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__32__value 
                        = __Vfunc_round_bf16__31__value;
                    vlSelf->__Vfunc_fp32_invalid__32__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__32__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__32__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__31__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__31__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__31__Vfuncout;
    __Vfunc_round_bf16__35__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [3U];
    __Vfunc_round_bf16__35__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__35__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__35__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__35__value)))))));
    __Vfunc_round_bf16__35__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__36__value 
                        = __Vfunc_round_bf16__35__value;
                    vlSelf->__Vfunc_fp32_invalid__36__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__36__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__36__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__35__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__35__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__35__Vfuncout;
    __Vfunc_round_bf16__39__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [4U];
    __Vfunc_round_bf16__39__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__39__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__39__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__39__value)))))));
    __Vfunc_round_bf16__39__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__40__value 
                        = __Vfunc_round_bf16__39__value;
                    vlSelf->__Vfunc_fp32_invalid__40__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__40__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__40__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__39__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__39__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__39__Vfuncout;
    __Vfunc_round_bf16__43__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [5U];
    __Vfunc_round_bf16__43__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__43__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__43__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__43__value)))))));
    __Vfunc_round_bf16__43__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__44__value 
                        = __Vfunc_round_bf16__43__value;
                    vlSelf->__Vfunc_fp32_invalid__44__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__44__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__44__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__43__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__43__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__43__Vfuncout;
    __Vfunc_round_bf16__47__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [6U];
    __Vfunc_round_bf16__47__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__47__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__47__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__47__value)))))));
    __Vfunc_round_bf16__47__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__48__value 
                        = __Vfunc_round_bf16__47__value;
                    vlSelf->__Vfunc_fp32_invalid__48__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__48__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__48__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__47__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__47__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__47__Vfuncout;
    __Vfunc_round_bf16__51__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__scaled
        [7U];
    __Vfunc_round_bf16__51__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__51__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__51__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__51__value)))))));
    __Vfunc_round_bf16__51__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__52__value 
                        = __Vfunc_round_bf16__51__value;
                    vlSelf->__Vfunc_fp32_invalid__52__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__52__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__52__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__51__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__51__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__unit_rounded 
        = __Vfunc_round_bf16__51__Vfuncout;
    __Vfunc_round_bf16__25__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [0U];
    __Vfunc_round_bf16__25__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__25__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__25__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__25__value)))))));
    __Vfunc_round_bf16__25__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__26__value 
                        = __Vfunc_round_bf16__25__value;
                    vlSelf->__Vfunc_fp32_invalid__26__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__26__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__26__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__25__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__25__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__25__Vfuncout;
    __Vfunc_round_bf16__29__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [1U];
    __Vfunc_round_bf16__29__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__29__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__29__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__29__value)))))));
    __Vfunc_round_bf16__29__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__30__value 
                        = __Vfunc_round_bf16__29__value;
                    vlSelf->__Vfunc_fp32_invalid__30__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__30__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__30__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__29__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__29__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__29__Vfuncout;
    __Vfunc_round_bf16__33__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [2U];
    __Vfunc_round_bf16__33__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__33__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__33__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__33__value)))))));
    __Vfunc_round_bf16__33__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__34__value 
                        = __Vfunc_round_bf16__33__value;
                    vlSelf->__Vfunc_fp32_invalid__34__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__34__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__34__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__33__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__33__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__33__Vfuncout;
    __Vfunc_round_bf16__37__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [3U];
    __Vfunc_round_bf16__37__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__37__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__37__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__37__value)))))));
    __Vfunc_round_bf16__37__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__38__value 
                        = __Vfunc_round_bf16__37__value;
                    vlSelf->__Vfunc_fp32_invalid__38__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__38__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__38__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__37__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__37__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__37__Vfuncout;
    __Vfunc_round_bf16__41__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [4U];
    __Vfunc_round_bf16__41__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__41__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__41__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__41__value)))))));
    __Vfunc_round_bf16__41__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__42__value 
                        = __Vfunc_round_bf16__41__value;
                    vlSelf->__Vfunc_fp32_invalid__42__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__42__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__42__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__41__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__41__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__41__Vfuncout;
    __Vfunc_round_bf16__45__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [5U];
    __Vfunc_round_bf16__45__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__45__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__45__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__45__value)))))));
    __Vfunc_round_bf16__45__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__46__value 
                        = __Vfunc_round_bf16__45__value;
                    vlSelf->__Vfunc_fp32_invalid__46__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__46__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__46__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__45__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__45__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__45__Vfuncout;
    __Vfunc_round_bf16__49__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [6U];
    __Vfunc_round_bf16__49__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__49__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__49__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__49__value)))))));
    __Vfunc_round_bf16__49__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__50__value 
                        = __Vfunc_round_bf16__49__value;
                    vlSelf->__Vfunc_fp32_invalid__50__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__50__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__50__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__49__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__49__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__49__Vfuncout;
    __Vfunc_round_bf16__53__value = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma_product
        [7U];
    __Vfunc_round_bf16__53__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__53__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__53__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__53__value)))))));
    __Vfunc_round_bf16__53__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__54__value 
                        = __Vfunc_round_bf16__53__value;
                    vlSelf->__Vfunc_fp32_invalid__54__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__54__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__54__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__53__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__53__rounded));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_rounded 
        = __Vfunc_round_bf16__53__Vfuncout;
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error)) 
                              << 0x3fU) | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error)) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__out_error) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                                                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__error5))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_17[2U] = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__out_error) 
                       << 0x10U) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__out_error) 
                                     << 0xfU) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__out_error) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__out_error) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__out_error) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__out_error) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__out_error) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__out_error) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__out_error) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__out_error) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__out_error) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__out_error) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__out_error) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__out_error) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__out_error) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__out_error) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__out_error)))))))))))))))));
    __Vtemp_49[3U] = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__out_error) 
                       << 0x10U) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__out_error) 
                                     << 0xfU) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__out_error) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__out_error) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__out_error) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__out_error) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__out_error) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__out_error) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__out_error) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__out_error) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__out_error) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__out_error) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__out_error) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__out_error) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__out_error) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__out_error) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__out_error)))))))))))))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[0U] 
        = __Vtemp_1[0U];
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[1U] 
        = __Vtemp_1[1U];
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[2U] 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__out_error) 
            << 0x1fU) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__out_error) 
                          << 0x1eU) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__out_error) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__out_error) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__out_error) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__out_error) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__out_error) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__out_error) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__out_error) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__out_error) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__out_error) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__out_error) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__out_error) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__out_error) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__out_error) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_17[2U])))))))))))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[3U] 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__out_error) 
            << 0x1fU) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__out_error) 
                          << 0x1eU) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__out_error) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__out_error) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__out_error) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__out_error) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__out_error) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__out_error) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__out_error) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__out_error) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__out_error) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__out_error) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__out_error) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__out_error) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__out_error) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_49[3U])))))))))))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[4U] 
        = (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__out_error) 
            << 6U) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__out_error) 
                       << 5U) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__out_error) 
                                  << 4U) | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__out_error) 
                                             << 3U) 
                                            | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__out_error) 
                                                << 2U) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__out_error) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->leaf_tb__DOT__dut__DOT____Vcellout__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__out_error)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[5U] = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[6U] = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__tree_failed[7U] = 0U;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__raw 
        = (((0U != (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0)) 
            << 0x17U) | ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0)
                          ? (0x7fffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__value5)
                          : 0U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__rotated_failed 
        = ((0x80U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__error5)) 
                      << 7U) | (0x7fff80U & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_y 
                                             >> 9U)))) 
           | ((0x40U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                          & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__error5)) 
                         << 6U) | (0x3fffc0U & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                >> 0xaU)))) 
              | ((0x20U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                             & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__error5)) 
                            << 5U) | (0x1fffe0U & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y 
                                                   >> 0xbU)))) 
                 | ((0x10U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__error5)) 
                               << 4U) | (0xffff0U & 
                                         (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                          >> 0xcU)))) 
                    | ((8U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__error5)) 
                               << 3U) | (0x7fff8U & 
                                         (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x 
                                          >> 0xdU)))) 
                       | ((4U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                   & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__error5)) 
                                  << 2U) | (0x3fffcU 
                                            & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_x 
                                               >> 0xeU)))) 
                          | ((2U & ((((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                      & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__error5)) 
                                     << 1U) | (0x1fffeU 
                                               & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_x 
                                                  >> 0xfU)))) 
                             | (1U & (((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT____VdfgTmp_h0890133b__0) 
                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__error5)) 
                                      | (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_x 
                                         >> 0x10U))))))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__90__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__90__part 
                            = vlSelf->__Vfunc_leading_zero32__90__value;
                        vlSelf->__Vfunc_leading_zero32__90__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__90__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__90__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__90__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__90__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__90__Vfuncout)) 
                             - (IData)(8U))));
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
    }
    if (leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
    }
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__906__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__906__part 
                            = vlSelf->__Vfunc_leading_zero32__906__value;
                        vlSelf->__Vfunc_leading_zero32__906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__918__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__918__part 
                            = vlSelf->__Vfunc_leading_zero32__918__value;
                        vlSelf->__Vfunc_leading_zero32__918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__930__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__930__part 
                            = vlSelf->__Vfunc_leading_zero32__930__value;
                        vlSelf->__Vfunc_leading_zero32__930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__930__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__942__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__942__part 
                            = vlSelf->__Vfunc_leading_zero32__942__value;
                        vlSelf->__Vfunc_leading_zero32__942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__954__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__954__part 
                            = vlSelf->__Vfunc_leading_zero32__954__value;
                        vlSelf->__Vfunc_leading_zero32__954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__966__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__966__part 
                            = vlSelf->__Vfunc_leading_zero32__966__value;
                        vlSelf->__Vfunc_leading_zero32__966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__966__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__978__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__978__part 
                            = vlSelf->__Vfunc_leading_zero32__978__value;
                        vlSelf->__Vfunc_leading_zero32__978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__990__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__990__part 
                            = vlSelf->__Vfunc_leading_zero32__990__value;
                        vlSelf->__Vfunc_leading_zero32__990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__990__Vfuncout)) 
                             - (IData)(8U))));
    leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift 
        = ((0U == leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4__value 
                            = leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw;
                        vlSelf->__Vfunc_leading_zero32__4__part 
                            = vlSelf->__Vfunc_leading_zero32__4__value;
                        vlSelf->__Vfunc_leading_zero32__4__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4__count)));
                            vlSelf->__Vfunc_leading_zero32__4__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4__count)));
                            vlSelf->__Vfunc_leading_zero32__4__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4__count)));
                            vlSelf->__Vfunc_leading_zero32__4__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4__count)));
                            vlSelf->__Vfunc_leading_zero32__4__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__85__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__raw;
                        vlSelf->__Vfunc_leading_zero32__85__part 
                            = vlSelf->__Vfunc_leading_zero32__85__value;
                        vlSelf->__Vfunc_leading_zero32__85__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__85__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__85__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__85__count)));
                            vlSelf->__Vfunc_leading_zero32__85__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__85__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__85__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__85__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__85__count)));
                            vlSelf->__Vfunc_leading_zero32__85__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__85__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__85__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__85__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__85__count)));
                            vlSelf->__Vfunc_leading_zero32__85__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__85__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__85__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__85__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__85__count)));
                            vlSelf->__Vfunc_leading_zero32__85__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__85__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__85__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__85__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__85__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__85__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__85__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__85__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__85__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__normalized_b 
        = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__raw_b, (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__shift_b)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    __Vfunc_round_pack32__5__significand = (0x7fffff8U 
                                            & (VL_SHIFTL_III(24,24,6, leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw, (IData)(leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift)) 
                                               << 3U));
    __Vfunc_round_pack32__5__exponent = (0xfffU & (
                                                   (((0U 
                                                      == (IData)(vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0))
                                                      ? 0xf82U
                                                      : 
                                                     ((IData)(vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0) 
                                                      - (IData)(0x7fU))) 
                                                    - (IData)(leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift)) 
                                                   - (IData)(3U)));
    __Vfunc_round_pack32__5__adjusted = __Vfunc_round_pack32__5__exponent;
    __Vfunc_round_pack32__5__shifted = __Vfunc_round_pack32__5__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__5__exponent))) {
        vlSelf->__Vfunc_shift_jam27__6__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__5__exponent)));
        vlSelf->__Vfunc_shift_jam27__6__value = __Vfunc_round_pack32__5__significand;
        __Vfunc_round_pack32__5__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__6__distance))) {
            vlSelf->__Vfunc_shift_jam27__6__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__6__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__6__distance))) {
            vlSelf->__Vfunc_shift_jam27__6__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__6__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__6__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6__value, (IData)(vlSelf->__Vfunc_shift_jam27__6__distance)));
            vlSelf->__Vfunc_shift_jam27__6__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__6__distance)))));
            vlSelf->__Vfunc_shift_jam27__6__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__6__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__6__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__6__discarded))));
        }
        __Vfunc_round_pack32__5__shifted = vlSelf->__Vfunc_shift_jam27__6__Vfuncout;
    }
    __Vfunc_round_pack32__5__rounded = (0x1ffffffU 
                                        & ((0xffffffU 
                                            & (__Vfunc_round_pack32__5__shifted 
                                               >> 3U)) 
                                           + (1U & 
                                              ((__Vfunc_round_pack32__5__shifted 
                                                >> 2U) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xbU 
                                                           & __Vfunc_round_pack32__5__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__5__rounded)) {
        __Vfunc_round_pack32__5__rounded = (0x1ffffffU 
                                            & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__5__rounded, 1U));
        __Vfunc_round_pack32__5__adjusted = (0xfffU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_round_pack32__5__adjusted)));
    }
    __Vfunc_round_pack32__5__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__5__rounded)) {
        __Vfunc_round_pack32__5__biased = (0xffU & 
                                           ((IData)(0x7fU) 
                                            + (IData)(__Vfunc_round_pack32__5__adjusted)));
    }
    __Vfunc_round_pack32__5__Vfuncout = (((0U == __Vfunc_round_pack32__5__significand) 
                                          | (0U == __Vfunc_round_pack32__5__rounded))
                                          ? 0ULL : 
                                         (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__5__adjusted))
                                           ? 0x100000000ULL
                                           : (QData)((IData)(
                                                             (((IData)(__Vfunc_round_pack32__5__biased) 
                                                               << 0x17U) 
                                                              | (0x7fffffU 
                                                                 & __Vfunc_round_pack32__5__rounded))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_packed 
        = __Vfunc_round_pack32__5__Vfuncout;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__input_exponent 
        = (0xfffU & (((0U == (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0))
                       ? 0xf82U : ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0) 
                                   - (IData)(0x7fU))) 
                     - (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shift)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__below_one 
        = ((0xffffffU & VL_SHIFTL_III(24,24,6, (IData)(0x800000U), (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__shift_a))) 
           < vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__normalized_b);
}
