// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__28(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__28\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3617__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3617__part 
                            = vlSelf->__Vfunc_leading_zero32__3617__value;
                        vlSelf->__Vfunc_leading_zero32__3617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3617__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1637__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1637__part 
                            = vlSelf->__Vfunc_leading_zero32__1637__value;
                        vlSelf->__Vfunc_leading_zero32__1637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1637__count)));
                            vlSelf->__Vfunc_leading_zero32__1637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1637__count)));
                            vlSelf->__Vfunc_leading_zero32__1637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1637__count)));
                            vlSelf->__Vfunc_leading_zero32__1637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1637__count)));
                            vlSelf->__Vfunc_leading_zero32__1637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1638__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1638__part 
                            = vlSelf->__Vfunc_leading_zero32__1638__value;
                        vlSelf->__Vfunc_leading_zero32__1638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1638__count)));
                            vlSelf->__Vfunc_leading_zero32__1638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1638__count)));
                            vlSelf->__Vfunc_leading_zero32__1638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1638__count)));
                            vlSelf->__Vfunc_leading_zero32__1638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1638__count)));
                            vlSelf->__Vfunc_leading_zero32__1638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3629__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3629__part 
                            = vlSelf->__Vfunc_leading_zero32__3629__value;
                        vlSelf->__Vfunc_leading_zero32__3629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3629__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1643__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1643__part 
                            = vlSelf->__Vfunc_leading_zero32__1643__value;
                        vlSelf->__Vfunc_leading_zero32__1643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1643__count)));
                            vlSelf->__Vfunc_leading_zero32__1643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1643__count)));
                            vlSelf->__Vfunc_leading_zero32__1643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1643__count)));
                            vlSelf->__Vfunc_leading_zero32__1643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1643__count)));
                            vlSelf->__Vfunc_leading_zero32__1643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1644__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1644__part 
                            = vlSelf->__Vfunc_leading_zero32__1644__value;
                        vlSelf->__Vfunc_leading_zero32__1644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1644__count)));
                            vlSelf->__Vfunc_leading_zero32__1644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1644__count)));
                            vlSelf->__Vfunc_leading_zero32__1644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1644__count)));
                            vlSelf->__Vfunc_leading_zero32__1644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1644__count)));
                            vlSelf->__Vfunc_leading_zero32__1644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3641__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3641__part 
                            = vlSelf->__Vfunc_leading_zero32__3641__value;
                        vlSelf->__Vfunc_leading_zero32__3641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3641__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1649__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1649__part 
                            = vlSelf->__Vfunc_leading_zero32__1649__value;
                        vlSelf->__Vfunc_leading_zero32__1649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1649__count)));
                            vlSelf->__Vfunc_leading_zero32__1649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1649__count)));
                            vlSelf->__Vfunc_leading_zero32__1649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1649__count)));
                            vlSelf->__Vfunc_leading_zero32__1649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1649__count)));
                            vlSelf->__Vfunc_leading_zero32__1649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1649__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1650__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1650__part 
                            = vlSelf->__Vfunc_leading_zero32__1650__value;
                        vlSelf->__Vfunc_leading_zero32__1650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1650__count)));
                            vlSelf->__Vfunc_leading_zero32__1650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1650__count)));
                            vlSelf->__Vfunc_leading_zero32__1650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1650__count)));
                            vlSelf->__Vfunc_leading_zero32__1650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1650__count)));
                            vlSelf->__Vfunc_leading_zero32__1650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3653__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3653__part 
                            = vlSelf->__Vfunc_leading_zero32__3653__value;
                        vlSelf->__Vfunc_leading_zero32__3653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3653__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1655__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1655__part 
                            = vlSelf->__Vfunc_leading_zero32__1655__value;
                        vlSelf->__Vfunc_leading_zero32__1655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1655__count)));
                            vlSelf->__Vfunc_leading_zero32__1655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1655__count)));
                            vlSelf->__Vfunc_leading_zero32__1655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1655__count)));
                            vlSelf->__Vfunc_leading_zero32__1655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1655__count)));
                            vlSelf->__Vfunc_leading_zero32__1655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1656__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1656__part 
                            = vlSelf->__Vfunc_leading_zero32__1656__value;
                        vlSelf->__Vfunc_leading_zero32__1656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1656__count)));
                            vlSelf->__Vfunc_leading_zero32__1656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1656__count)));
                            vlSelf->__Vfunc_leading_zero32__1656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1656__count)));
                            vlSelf->__Vfunc_leading_zero32__1656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1656__count)));
                            vlSelf->__Vfunc_leading_zero32__1656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3665__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3665__part 
                            = vlSelf->__Vfunc_leading_zero32__3665__value;
                        vlSelf->__Vfunc_leading_zero32__3665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3665__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1661__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1661__part 
                            = vlSelf->__Vfunc_leading_zero32__1661__value;
                        vlSelf->__Vfunc_leading_zero32__1661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1661__count)));
                            vlSelf->__Vfunc_leading_zero32__1661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1661__count)));
                            vlSelf->__Vfunc_leading_zero32__1661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1661__count)));
                            vlSelf->__Vfunc_leading_zero32__1661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1661__count)));
                            vlSelf->__Vfunc_leading_zero32__1661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1661__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1662__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1662__part 
                            = vlSelf->__Vfunc_leading_zero32__1662__value;
                        vlSelf->__Vfunc_leading_zero32__1662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1662__count)));
                            vlSelf->__Vfunc_leading_zero32__1662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1662__count)));
                            vlSelf->__Vfunc_leading_zero32__1662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1662__count)));
                            vlSelf->__Vfunc_leading_zero32__1662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1662__count)));
                            vlSelf->__Vfunc_leading_zero32__1662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3677__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3677__part 
                            = vlSelf->__Vfunc_leading_zero32__3677__value;
                        vlSelf->__Vfunc_leading_zero32__3677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3677__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1667__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1667__part 
                            = vlSelf->__Vfunc_leading_zero32__1667__value;
                        vlSelf->__Vfunc_leading_zero32__1667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1667__count)));
                            vlSelf->__Vfunc_leading_zero32__1667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1667__count)));
                            vlSelf->__Vfunc_leading_zero32__1667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1667__count)));
                            vlSelf->__Vfunc_leading_zero32__1667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1667__count)));
                            vlSelf->__Vfunc_leading_zero32__1667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1668__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1668__part 
                            = vlSelf->__Vfunc_leading_zero32__1668__value;
                        vlSelf->__Vfunc_leading_zero32__1668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1668__count)));
                            vlSelf->__Vfunc_leading_zero32__1668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1668__count)));
                            vlSelf->__Vfunc_leading_zero32__1668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1668__count)));
                            vlSelf->__Vfunc_leading_zero32__1668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1668__count)));
                            vlSelf->__Vfunc_leading_zero32__1668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3689__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3689__part 
                            = vlSelf->__Vfunc_leading_zero32__3689__value;
                        vlSelf->__Vfunc_leading_zero32__3689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3689__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1673__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1673__part 
                            = vlSelf->__Vfunc_leading_zero32__1673__value;
                        vlSelf->__Vfunc_leading_zero32__1673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1673__count)));
                            vlSelf->__Vfunc_leading_zero32__1673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1673__count)));
                            vlSelf->__Vfunc_leading_zero32__1673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1673__count)));
                            vlSelf->__Vfunc_leading_zero32__1673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1673__count)));
                            vlSelf->__Vfunc_leading_zero32__1673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1674__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1674__part 
                            = vlSelf->__Vfunc_leading_zero32__1674__value;
                        vlSelf->__Vfunc_leading_zero32__1674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1674__count)));
                            vlSelf->__Vfunc_leading_zero32__1674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1674__count)));
                            vlSelf->__Vfunc_leading_zero32__1674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1674__count)));
                            vlSelf->__Vfunc_leading_zero32__1674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1674__count)));
                            vlSelf->__Vfunc_leading_zero32__1674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3701__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3701__part 
                            = vlSelf->__Vfunc_leading_zero32__3701__value;
                        vlSelf->__Vfunc_leading_zero32__3701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3701__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1679__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1679__part 
                            = vlSelf->__Vfunc_leading_zero32__1679__value;
                        vlSelf->__Vfunc_leading_zero32__1679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1679__count)));
                            vlSelf->__Vfunc_leading_zero32__1679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1679__count)));
                            vlSelf->__Vfunc_leading_zero32__1679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1679__count)));
                            vlSelf->__Vfunc_leading_zero32__1679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1679__count)));
                            vlSelf->__Vfunc_leading_zero32__1679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1680__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1680__part 
                            = vlSelf->__Vfunc_leading_zero32__1680__value;
                        vlSelf->__Vfunc_leading_zero32__1680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1680__count)));
                            vlSelf->__Vfunc_leading_zero32__1680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1680__count)));
                            vlSelf->__Vfunc_leading_zero32__1680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1680__count)));
                            vlSelf->__Vfunc_leading_zero32__1680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1680__count)));
                            vlSelf->__Vfunc_leading_zero32__1680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3713__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3713__part 
                            = vlSelf->__Vfunc_leading_zero32__3713__value;
                        vlSelf->__Vfunc_leading_zero32__3713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3713__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1685__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1685__part 
                            = vlSelf->__Vfunc_leading_zero32__1685__value;
                        vlSelf->__Vfunc_leading_zero32__1685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1685__count)));
                            vlSelf->__Vfunc_leading_zero32__1685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1685__count)));
                            vlSelf->__Vfunc_leading_zero32__1685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1685__count)));
                            vlSelf->__Vfunc_leading_zero32__1685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1685__count)));
                            vlSelf->__Vfunc_leading_zero32__1685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1685__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1686__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1686__part 
                            = vlSelf->__Vfunc_leading_zero32__1686__value;
                        vlSelf->__Vfunc_leading_zero32__1686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3725__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3725__part 
                            = vlSelf->__Vfunc_leading_zero32__3725__value;
                        vlSelf->__Vfunc_leading_zero32__3725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3725__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1691__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1691__part 
                            = vlSelf->__Vfunc_leading_zero32__1691__value;
                        vlSelf->__Vfunc_leading_zero32__1691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1691__count)));
                            vlSelf->__Vfunc_leading_zero32__1691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1691__count)));
                            vlSelf->__Vfunc_leading_zero32__1691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1691__count)));
                            vlSelf->__Vfunc_leading_zero32__1691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1691__count)));
                            vlSelf->__Vfunc_leading_zero32__1691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1692__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1692__part 
                            = vlSelf->__Vfunc_leading_zero32__1692__value;
                        vlSelf->__Vfunc_leading_zero32__1692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1692__count)));
                            vlSelf->__Vfunc_leading_zero32__1692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1692__count)));
                            vlSelf->__Vfunc_leading_zero32__1692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1692__count)));
                            vlSelf->__Vfunc_leading_zero32__1692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1692__count)));
                            vlSelf->__Vfunc_leading_zero32__1692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3737__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3737__part 
                            = vlSelf->__Vfunc_leading_zero32__3737__value;
                        vlSelf->__Vfunc_leading_zero32__3737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3737__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1697__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1697__part 
                            = vlSelf->__Vfunc_leading_zero32__1697__value;
                        vlSelf->__Vfunc_leading_zero32__1697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1697__count)));
                            vlSelf->__Vfunc_leading_zero32__1697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1697__count)));
                            vlSelf->__Vfunc_leading_zero32__1697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1697__count)));
                            vlSelf->__Vfunc_leading_zero32__1697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1697__count)));
                            vlSelf->__Vfunc_leading_zero32__1697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1697__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1698__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1698__part 
                            = vlSelf->__Vfunc_leading_zero32__1698__value;
                        vlSelf->__Vfunc_leading_zero32__1698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3749__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3749__part 
                            = vlSelf->__Vfunc_leading_zero32__3749__value;
                        vlSelf->__Vfunc_leading_zero32__3749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3749__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1703__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1703__part 
                            = vlSelf->__Vfunc_leading_zero32__1703__value;
                        vlSelf->__Vfunc_leading_zero32__1703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1703__count)));
                            vlSelf->__Vfunc_leading_zero32__1703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1703__count)));
                            vlSelf->__Vfunc_leading_zero32__1703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1703__count)));
                            vlSelf->__Vfunc_leading_zero32__1703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1703__count)));
                            vlSelf->__Vfunc_leading_zero32__1703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1704__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1704__part 
                            = vlSelf->__Vfunc_leading_zero32__1704__value;
                        vlSelf->__Vfunc_leading_zero32__1704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1704__count)));
                            vlSelf->__Vfunc_leading_zero32__1704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1704__count)));
                            vlSelf->__Vfunc_leading_zero32__1704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1704__count)));
                            vlSelf->__Vfunc_leading_zero32__1704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1704__count)));
                            vlSelf->__Vfunc_leading_zero32__1704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3761__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3761__part 
                            = vlSelf->__Vfunc_leading_zero32__3761__value;
                        vlSelf->__Vfunc_leading_zero32__3761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3761__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1709__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1709__part 
                            = vlSelf->__Vfunc_leading_zero32__1709__value;
                        vlSelf->__Vfunc_leading_zero32__1709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1709__count)));
                            vlSelf->__Vfunc_leading_zero32__1709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1709__count)));
                            vlSelf->__Vfunc_leading_zero32__1709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1709__count)));
                            vlSelf->__Vfunc_leading_zero32__1709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1709__count)));
                            vlSelf->__Vfunc_leading_zero32__1709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1710__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1710__part 
                            = vlSelf->__Vfunc_leading_zero32__1710__value;
                        vlSelf->__Vfunc_leading_zero32__1710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3773__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3773__part 
                            = vlSelf->__Vfunc_leading_zero32__3773__value;
                        vlSelf->__Vfunc_leading_zero32__3773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3773__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1715__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1715__part 
                            = vlSelf->__Vfunc_leading_zero32__1715__value;
                        vlSelf->__Vfunc_leading_zero32__1715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1715__count)));
                            vlSelf->__Vfunc_leading_zero32__1715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1715__count)));
                            vlSelf->__Vfunc_leading_zero32__1715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1715__count)));
                            vlSelf->__Vfunc_leading_zero32__1715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1715__count)));
                            vlSelf->__Vfunc_leading_zero32__1715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1716__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1716__part 
                            = vlSelf->__Vfunc_leading_zero32__1716__value;
                        vlSelf->__Vfunc_leading_zero32__1716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1716__count)));
                            vlSelf->__Vfunc_leading_zero32__1716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1716__count)));
                            vlSelf->__Vfunc_leading_zero32__1716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1716__count)));
                            vlSelf->__Vfunc_leading_zero32__1716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1716__count)));
                            vlSelf->__Vfunc_leading_zero32__1716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3785__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3785__part 
                            = vlSelf->__Vfunc_leading_zero32__3785__value;
                        vlSelf->__Vfunc_leading_zero32__3785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3785__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1721__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1721__part 
                            = vlSelf->__Vfunc_leading_zero32__1721__value;
                        vlSelf->__Vfunc_leading_zero32__1721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1721__count)));
                            vlSelf->__Vfunc_leading_zero32__1721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1721__count)));
                            vlSelf->__Vfunc_leading_zero32__1721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1721__count)));
                            vlSelf->__Vfunc_leading_zero32__1721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1721__count)));
                            vlSelf->__Vfunc_leading_zero32__1721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1721__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1722__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1722__part 
                            = vlSelf->__Vfunc_leading_zero32__1722__value;
                        vlSelf->__Vfunc_leading_zero32__1722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3797__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3797__part 
                            = vlSelf->__Vfunc_leading_zero32__3797__value;
                        vlSelf->__Vfunc_leading_zero32__3797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3797__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1727__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1727__part 
                            = vlSelf->__Vfunc_leading_zero32__1727__value;
                        vlSelf->__Vfunc_leading_zero32__1727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1727__count)));
                            vlSelf->__Vfunc_leading_zero32__1727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1727__count)));
                            vlSelf->__Vfunc_leading_zero32__1727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1727__count)));
                            vlSelf->__Vfunc_leading_zero32__1727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1727__count)));
                            vlSelf->__Vfunc_leading_zero32__1727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1728__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1728__part 
                            = vlSelf->__Vfunc_leading_zero32__1728__value;
                        vlSelf->__Vfunc_leading_zero32__1728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1728__count)));
                            vlSelf->__Vfunc_leading_zero32__1728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1728__count)));
                            vlSelf->__Vfunc_leading_zero32__1728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1728__count)));
                            vlSelf->__Vfunc_leading_zero32__1728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1728__count)));
                            vlSelf->__Vfunc_leading_zero32__1728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3809__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3809__part 
                            = vlSelf->__Vfunc_leading_zero32__3809__value;
                        vlSelf->__Vfunc_leading_zero32__3809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3809__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1733__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1733__part 
                            = vlSelf->__Vfunc_leading_zero32__1733__value;
                        vlSelf->__Vfunc_leading_zero32__1733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1733__count)));
                            vlSelf->__Vfunc_leading_zero32__1733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1733__count)));
                            vlSelf->__Vfunc_leading_zero32__1733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1733__count)));
                            vlSelf->__Vfunc_leading_zero32__1733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1733__count)));
                            vlSelf->__Vfunc_leading_zero32__1733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1733__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1734__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1734__part 
                            = vlSelf->__Vfunc_leading_zero32__1734__value;
                        vlSelf->__Vfunc_leading_zero32__1734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3821__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3821__part 
                            = vlSelf->__Vfunc_leading_zero32__3821__value;
                        vlSelf->__Vfunc_leading_zero32__3821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3821__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1739__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1739__part 
                            = vlSelf->__Vfunc_leading_zero32__1739__value;
                        vlSelf->__Vfunc_leading_zero32__1739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1739__count)));
                            vlSelf->__Vfunc_leading_zero32__1739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1739__count)));
                            vlSelf->__Vfunc_leading_zero32__1739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1739__count)));
                            vlSelf->__Vfunc_leading_zero32__1739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1739__count)));
                            vlSelf->__Vfunc_leading_zero32__1739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1740__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1740__part 
                            = vlSelf->__Vfunc_leading_zero32__1740__value;
                        vlSelf->__Vfunc_leading_zero32__1740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1740__count)));
                            vlSelf->__Vfunc_leading_zero32__1740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1740__count)));
                            vlSelf->__Vfunc_leading_zero32__1740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1740__count)));
                            vlSelf->__Vfunc_leading_zero32__1740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1740__count)));
                            vlSelf->__Vfunc_leading_zero32__1740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3833__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3833__part 
                            = vlSelf->__Vfunc_leading_zero32__3833__value;
                        vlSelf->__Vfunc_leading_zero32__3833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3833__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1745__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1745__part 
                            = vlSelf->__Vfunc_leading_zero32__1745__value;
                        vlSelf->__Vfunc_leading_zero32__1745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1745__count)));
                            vlSelf->__Vfunc_leading_zero32__1745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1745__count)));
                            vlSelf->__Vfunc_leading_zero32__1745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1745__count)));
                            vlSelf->__Vfunc_leading_zero32__1745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1745__count)));
                            vlSelf->__Vfunc_leading_zero32__1745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1746__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1746__part 
                            = vlSelf->__Vfunc_leading_zero32__1746__value;
                        vlSelf->__Vfunc_leading_zero32__1746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3845__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3845__part 
                            = vlSelf->__Vfunc_leading_zero32__3845__value;
                        vlSelf->__Vfunc_leading_zero32__3845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3845__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1751__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1751__part 
                            = vlSelf->__Vfunc_leading_zero32__1751__value;
                        vlSelf->__Vfunc_leading_zero32__1751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1751__count)));
                            vlSelf->__Vfunc_leading_zero32__1751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1751__count)));
                            vlSelf->__Vfunc_leading_zero32__1751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1751__count)));
                            vlSelf->__Vfunc_leading_zero32__1751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1751__count)));
                            vlSelf->__Vfunc_leading_zero32__1751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1752__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1752__part 
                            = vlSelf->__Vfunc_leading_zero32__1752__value;
                        vlSelf->__Vfunc_leading_zero32__1752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1752__count)));
                            vlSelf->__Vfunc_leading_zero32__1752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1752__count)));
                            vlSelf->__Vfunc_leading_zero32__1752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1752__count)));
                            vlSelf->__Vfunc_leading_zero32__1752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1752__count)));
                            vlSelf->__Vfunc_leading_zero32__1752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3857__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3857__part 
                            = vlSelf->__Vfunc_leading_zero32__3857__value;
                        vlSelf->__Vfunc_leading_zero32__3857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3857__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1757__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1757__part 
                            = vlSelf->__Vfunc_leading_zero32__1757__value;
                        vlSelf->__Vfunc_leading_zero32__1757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1757__count)));
                            vlSelf->__Vfunc_leading_zero32__1757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1757__count)));
                            vlSelf->__Vfunc_leading_zero32__1757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1757__count)));
                            vlSelf->__Vfunc_leading_zero32__1757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1757__count)));
                            vlSelf->__Vfunc_leading_zero32__1757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1757__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1758__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1758__part 
                            = vlSelf->__Vfunc_leading_zero32__1758__value;
                        vlSelf->__Vfunc_leading_zero32__1758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3869__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3869__part 
                            = vlSelf->__Vfunc_leading_zero32__3869__value;
                        vlSelf->__Vfunc_leading_zero32__3869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3869__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1763__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1763__part 
                            = vlSelf->__Vfunc_leading_zero32__1763__value;
                        vlSelf->__Vfunc_leading_zero32__1763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1763__count)));
                            vlSelf->__Vfunc_leading_zero32__1763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1763__count)));
                            vlSelf->__Vfunc_leading_zero32__1763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1763__count)));
                            vlSelf->__Vfunc_leading_zero32__1763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1763__count)));
                            vlSelf->__Vfunc_leading_zero32__1763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1764__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1764__part 
                            = vlSelf->__Vfunc_leading_zero32__1764__value;
                        vlSelf->__Vfunc_leading_zero32__1764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1764__count)));
                            vlSelf->__Vfunc_leading_zero32__1764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1764__count)));
                            vlSelf->__Vfunc_leading_zero32__1764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1764__count)));
                            vlSelf->__Vfunc_leading_zero32__1764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1764__count)));
                            vlSelf->__Vfunc_leading_zero32__1764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3881__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3881__part 
                            = vlSelf->__Vfunc_leading_zero32__3881__value;
                        vlSelf->__Vfunc_leading_zero32__3881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3881__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1769__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1769__part 
                            = vlSelf->__Vfunc_leading_zero32__1769__value;
                        vlSelf->__Vfunc_leading_zero32__1769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1769__count)));
                            vlSelf->__Vfunc_leading_zero32__1769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1769__count)));
                            vlSelf->__Vfunc_leading_zero32__1769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1769__count)));
                            vlSelf->__Vfunc_leading_zero32__1769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1769__count)));
                            vlSelf->__Vfunc_leading_zero32__1769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1769__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1770__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1770__part 
                            = vlSelf->__Vfunc_leading_zero32__1770__value;
                        vlSelf->__Vfunc_leading_zero32__1770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3893__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3893__part 
                            = vlSelf->__Vfunc_leading_zero32__3893__value;
                        vlSelf->__Vfunc_leading_zero32__3893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3893__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1775__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1775__part 
                            = vlSelf->__Vfunc_leading_zero32__1775__value;
                        vlSelf->__Vfunc_leading_zero32__1775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1775__count)));
                            vlSelf->__Vfunc_leading_zero32__1775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1775__count)));
                            vlSelf->__Vfunc_leading_zero32__1775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1775__count)));
                            vlSelf->__Vfunc_leading_zero32__1775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1775__count)));
                            vlSelf->__Vfunc_leading_zero32__1775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1776__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1776__part 
                            = vlSelf->__Vfunc_leading_zero32__1776__value;
                        vlSelf->__Vfunc_leading_zero32__1776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1776__count)));
                            vlSelf->__Vfunc_leading_zero32__1776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1776__count)));
                            vlSelf->__Vfunc_leading_zero32__1776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1776__count)));
                            vlSelf->__Vfunc_leading_zero32__1776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1776__count)));
                            vlSelf->__Vfunc_leading_zero32__1776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1776__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3905__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3905__part 
                            = vlSelf->__Vfunc_leading_zero32__3905__value;
                        vlSelf->__Vfunc_leading_zero32__3905__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3905__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3905__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3905__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3905__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3905__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1781__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1781__part 
                            = vlSelf->__Vfunc_leading_zero32__1781__value;
                        vlSelf->__Vfunc_leading_zero32__1781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1781__count)));
                            vlSelf->__Vfunc_leading_zero32__1781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1781__count)));
                            vlSelf->__Vfunc_leading_zero32__1781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1781__count)));
                            vlSelf->__Vfunc_leading_zero32__1781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1781__count)));
                            vlSelf->__Vfunc_leading_zero32__1781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1782__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1782__part 
                            = vlSelf->__Vfunc_leading_zero32__1782__value;
                        vlSelf->__Vfunc_leading_zero32__1782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3917__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3917__part 
                            = vlSelf->__Vfunc_leading_zero32__3917__value;
                        vlSelf->__Vfunc_leading_zero32__3917__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3917__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3917__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3917__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3917__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3917__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1787__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1787__part 
                            = vlSelf->__Vfunc_leading_zero32__1787__value;
                        vlSelf->__Vfunc_leading_zero32__1787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1787__count)));
                            vlSelf->__Vfunc_leading_zero32__1787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1787__count)));
                            vlSelf->__Vfunc_leading_zero32__1787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1787__count)));
                            vlSelf->__Vfunc_leading_zero32__1787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1787__count)));
                            vlSelf->__Vfunc_leading_zero32__1787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1788__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1788__part 
                            = vlSelf->__Vfunc_leading_zero32__1788__value;
                        vlSelf->__Vfunc_leading_zero32__1788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1788__count)));
                            vlSelf->__Vfunc_leading_zero32__1788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1788__count)));
                            vlSelf->__Vfunc_leading_zero32__1788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1788__count)));
                            vlSelf->__Vfunc_leading_zero32__1788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1788__count)));
                            vlSelf->__Vfunc_leading_zero32__1788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1788__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3929__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3929__part 
                            = vlSelf->__Vfunc_leading_zero32__3929__value;
                        vlSelf->__Vfunc_leading_zero32__3929__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3929__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3929__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3929__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3929__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3929__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1793__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1793__part 
                            = vlSelf->__Vfunc_leading_zero32__1793__value;
                        vlSelf->__Vfunc_leading_zero32__1793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1793__count)));
                            vlSelf->__Vfunc_leading_zero32__1793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1793__count)));
                            vlSelf->__Vfunc_leading_zero32__1793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1793__count)));
                            vlSelf->__Vfunc_leading_zero32__1793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1793__count)));
                            vlSelf->__Vfunc_leading_zero32__1793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1793__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1794__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1794__part 
                            = vlSelf->__Vfunc_leading_zero32__1794__value;
                        vlSelf->__Vfunc_leading_zero32__1794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3941__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3941__part 
                            = vlSelf->__Vfunc_leading_zero32__3941__value;
                        vlSelf->__Vfunc_leading_zero32__3941__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3941__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3941__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3941__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3941__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3941__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1799__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1799__part 
                            = vlSelf->__Vfunc_leading_zero32__1799__value;
                        vlSelf->__Vfunc_leading_zero32__1799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1799__count)));
                            vlSelf->__Vfunc_leading_zero32__1799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1799__count)));
                            vlSelf->__Vfunc_leading_zero32__1799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1799__count)));
                            vlSelf->__Vfunc_leading_zero32__1799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1799__count)));
                            vlSelf->__Vfunc_leading_zero32__1799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1800__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1800__part 
                            = vlSelf->__Vfunc_leading_zero32__1800__value;
                        vlSelf->__Vfunc_leading_zero32__1800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1800__count)));
                            vlSelf->__Vfunc_leading_zero32__1800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1800__count)));
                            vlSelf->__Vfunc_leading_zero32__1800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1800__count)));
                            vlSelf->__Vfunc_leading_zero32__1800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1800__count)));
                            vlSelf->__Vfunc_leading_zero32__1800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3953__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3953__part 
                            = vlSelf->__Vfunc_leading_zero32__3953__value;
                        vlSelf->__Vfunc_leading_zero32__3953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3953__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1805__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1805__part 
                            = vlSelf->__Vfunc_leading_zero32__1805__value;
                        vlSelf->__Vfunc_leading_zero32__1805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1805__count)));
                            vlSelf->__Vfunc_leading_zero32__1805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1805__count)));
                            vlSelf->__Vfunc_leading_zero32__1805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1805__count)));
                            vlSelf->__Vfunc_leading_zero32__1805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1805__count)));
                            vlSelf->__Vfunc_leading_zero32__1805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1805__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1806__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1806__part 
                            = vlSelf->__Vfunc_leading_zero32__1806__value;
                        vlSelf->__Vfunc_leading_zero32__1806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3965__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3965__part 
                            = vlSelf->__Vfunc_leading_zero32__3965__value;
                        vlSelf->__Vfunc_leading_zero32__3965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3965__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1811__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1811__part 
                            = vlSelf->__Vfunc_leading_zero32__1811__value;
                        vlSelf->__Vfunc_leading_zero32__1811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1811__count)));
                            vlSelf->__Vfunc_leading_zero32__1811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1811__count)));
                            vlSelf->__Vfunc_leading_zero32__1811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1811__count)));
                            vlSelf->__Vfunc_leading_zero32__1811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1811__count)));
                            vlSelf->__Vfunc_leading_zero32__1811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1812__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1812__part 
                            = vlSelf->__Vfunc_leading_zero32__1812__value;
                        vlSelf->__Vfunc_leading_zero32__1812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1812__count)));
                            vlSelf->__Vfunc_leading_zero32__1812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1812__count)));
                            vlSelf->__Vfunc_leading_zero32__1812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1812__count)));
                            vlSelf->__Vfunc_leading_zero32__1812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1812__count)));
                            vlSelf->__Vfunc_leading_zero32__1812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1812__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3977__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3977__part 
                            = vlSelf->__Vfunc_leading_zero32__3977__value;
                        vlSelf->__Vfunc_leading_zero32__3977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3977__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1817__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1817__part 
                            = vlSelf->__Vfunc_leading_zero32__1817__value;
                        vlSelf->__Vfunc_leading_zero32__1817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1817__count)));
                            vlSelf->__Vfunc_leading_zero32__1817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1817__count)));
                            vlSelf->__Vfunc_leading_zero32__1817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1817__count)));
                            vlSelf->__Vfunc_leading_zero32__1817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1817__count)));
                            vlSelf->__Vfunc_leading_zero32__1817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1817__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1818__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1818__part 
                            = vlSelf->__Vfunc_leading_zero32__1818__value;
                        vlSelf->__Vfunc_leading_zero32__1818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3989__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3989__part 
                            = vlSelf->__Vfunc_leading_zero32__3989__value;
                        vlSelf->__Vfunc_leading_zero32__3989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3989__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1823__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1823__part 
                            = vlSelf->__Vfunc_leading_zero32__1823__value;
                        vlSelf->__Vfunc_leading_zero32__1823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1823__count)));
                            vlSelf->__Vfunc_leading_zero32__1823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1823__count)));
                            vlSelf->__Vfunc_leading_zero32__1823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1823__count)));
                            vlSelf->__Vfunc_leading_zero32__1823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1823__count)));
                            vlSelf->__Vfunc_leading_zero32__1823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1824__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1824__part 
                            = vlSelf->__Vfunc_leading_zero32__1824__value;
                        vlSelf->__Vfunc_leading_zero32__1824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1824__count)));
                            vlSelf->__Vfunc_leading_zero32__1824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1824__count)));
                            vlSelf->__Vfunc_leading_zero32__1824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1824__count)));
                            vlSelf->__Vfunc_leading_zero32__1824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1824__count)));
                            vlSelf->__Vfunc_leading_zero32__1824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1824__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4001__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4001__part 
                            = vlSelf->__Vfunc_leading_zero32__4001__value;
                        vlSelf->__Vfunc_leading_zero32__4001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4001__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1829__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1829__part 
                            = vlSelf->__Vfunc_leading_zero32__1829__value;
                        vlSelf->__Vfunc_leading_zero32__1829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1829__count)));
                            vlSelf->__Vfunc_leading_zero32__1829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1829__count)));
                            vlSelf->__Vfunc_leading_zero32__1829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1829__count)));
                            vlSelf->__Vfunc_leading_zero32__1829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1829__count)));
                            vlSelf->__Vfunc_leading_zero32__1829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1829__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1830__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1830__part 
                            = vlSelf->__Vfunc_leading_zero32__1830__value;
                        vlSelf->__Vfunc_leading_zero32__1830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4013__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4013__part 
                            = vlSelf->__Vfunc_leading_zero32__4013__value;
                        vlSelf->__Vfunc_leading_zero32__4013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4013__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1835__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1835__part 
                            = vlSelf->__Vfunc_leading_zero32__1835__value;
                        vlSelf->__Vfunc_leading_zero32__1835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1835__count)));
                            vlSelf->__Vfunc_leading_zero32__1835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1835__count)));
                            vlSelf->__Vfunc_leading_zero32__1835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1835__count)));
                            vlSelf->__Vfunc_leading_zero32__1835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1835__count)));
                            vlSelf->__Vfunc_leading_zero32__1835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1836__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1836__part 
                            = vlSelf->__Vfunc_leading_zero32__1836__value;
                        vlSelf->__Vfunc_leading_zero32__1836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1836__count)));
                            vlSelf->__Vfunc_leading_zero32__1836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1836__count)));
                            vlSelf->__Vfunc_leading_zero32__1836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1836__count)));
                            vlSelf->__Vfunc_leading_zero32__1836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1836__count)));
                            vlSelf->__Vfunc_leading_zero32__1836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4025__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4025__part 
                            = vlSelf->__Vfunc_leading_zero32__4025__value;
                        vlSelf->__Vfunc_leading_zero32__4025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4025__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1841__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1841__part 
                            = vlSelf->__Vfunc_leading_zero32__1841__value;
                        vlSelf->__Vfunc_leading_zero32__1841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1841__count)));
                            vlSelf->__Vfunc_leading_zero32__1841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1841__count)));
                            vlSelf->__Vfunc_leading_zero32__1841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1841__count)));
                            vlSelf->__Vfunc_leading_zero32__1841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1841__count)));
                            vlSelf->__Vfunc_leading_zero32__1841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1841__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1842__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1842__part 
                            = vlSelf->__Vfunc_leading_zero32__1842__value;
                        vlSelf->__Vfunc_leading_zero32__1842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4037__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4037__part 
                            = vlSelf->__Vfunc_leading_zero32__4037__value;
                        vlSelf->__Vfunc_leading_zero32__4037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4037__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1847__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1847__part 
                            = vlSelf->__Vfunc_leading_zero32__1847__value;
                        vlSelf->__Vfunc_leading_zero32__1847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1847__count)));
                            vlSelf->__Vfunc_leading_zero32__1847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1847__count)));
                            vlSelf->__Vfunc_leading_zero32__1847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1847__count)));
                            vlSelf->__Vfunc_leading_zero32__1847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1847__count)));
                            vlSelf->__Vfunc_leading_zero32__1847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1848__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1848__part 
                            = vlSelf->__Vfunc_leading_zero32__1848__value;
                        vlSelf->__Vfunc_leading_zero32__1848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1848__count)));
                            vlSelf->__Vfunc_leading_zero32__1848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1848__count)));
                            vlSelf->__Vfunc_leading_zero32__1848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1848__count)));
                            vlSelf->__Vfunc_leading_zero32__1848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1848__count)));
                            vlSelf->__Vfunc_leading_zero32__1848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1848__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4049__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4049__part 
                            = vlSelf->__Vfunc_leading_zero32__4049__value;
                        vlSelf->__Vfunc_leading_zero32__4049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4049__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1853__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1853__part 
                            = vlSelf->__Vfunc_leading_zero32__1853__value;
                        vlSelf->__Vfunc_leading_zero32__1853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1853__count)));
                            vlSelf->__Vfunc_leading_zero32__1853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1853__count)));
                            vlSelf->__Vfunc_leading_zero32__1853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1853__count)));
                            vlSelf->__Vfunc_leading_zero32__1853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1853__count)));
                            vlSelf->__Vfunc_leading_zero32__1853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1854__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1854__part 
                            = vlSelf->__Vfunc_leading_zero32__1854__value;
                        vlSelf->__Vfunc_leading_zero32__1854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4061__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4061__part 
                            = vlSelf->__Vfunc_leading_zero32__4061__value;
                        vlSelf->__Vfunc_leading_zero32__4061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4061__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1859__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1859__part 
                            = vlSelf->__Vfunc_leading_zero32__1859__value;
                        vlSelf->__Vfunc_leading_zero32__1859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1859__count)));
                            vlSelf->__Vfunc_leading_zero32__1859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1859__count)));
                            vlSelf->__Vfunc_leading_zero32__1859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1859__count)));
                            vlSelf->__Vfunc_leading_zero32__1859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1859__count)));
                            vlSelf->__Vfunc_leading_zero32__1859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1860__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1860__part 
                            = vlSelf->__Vfunc_leading_zero32__1860__value;
                        vlSelf->__Vfunc_leading_zero32__1860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1860__count)));
                            vlSelf->__Vfunc_leading_zero32__1860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1860__count)));
                            vlSelf->__Vfunc_leading_zero32__1860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1860__count)));
                            vlSelf->__Vfunc_leading_zero32__1860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1860__count)));
                            vlSelf->__Vfunc_leading_zero32__1860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1860__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4073__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4073__part 
                            = vlSelf->__Vfunc_leading_zero32__4073__value;
                        vlSelf->__Vfunc_leading_zero32__4073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4073__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1865__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1865__part 
                            = vlSelf->__Vfunc_leading_zero32__1865__value;
                        vlSelf->__Vfunc_leading_zero32__1865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1865__count)));
                            vlSelf->__Vfunc_leading_zero32__1865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1865__count)));
                            vlSelf->__Vfunc_leading_zero32__1865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1865__count)));
                            vlSelf->__Vfunc_leading_zero32__1865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1865__count)));
                            vlSelf->__Vfunc_leading_zero32__1865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1865__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1866__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1866__part 
                            = vlSelf->__Vfunc_leading_zero32__1866__value;
                        vlSelf->__Vfunc_leading_zero32__1866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4085__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4085__part 
                            = vlSelf->__Vfunc_leading_zero32__4085__value;
                        vlSelf->__Vfunc_leading_zero32__4085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4085__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1871__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1871__part 
                            = vlSelf->__Vfunc_leading_zero32__1871__value;
                        vlSelf->__Vfunc_leading_zero32__1871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1871__count)));
                            vlSelf->__Vfunc_leading_zero32__1871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1871__count)));
                            vlSelf->__Vfunc_leading_zero32__1871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1871__count)));
                            vlSelf->__Vfunc_leading_zero32__1871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1871__count)));
                            vlSelf->__Vfunc_leading_zero32__1871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1872__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1872__part 
                            = vlSelf->__Vfunc_leading_zero32__1872__value;
                        vlSelf->__Vfunc_leading_zero32__1872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1872__count)));
                            vlSelf->__Vfunc_leading_zero32__1872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1872__count)));
                            vlSelf->__Vfunc_leading_zero32__1872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1872__count)));
                            vlSelf->__Vfunc_leading_zero32__1872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1872__count)));
                            vlSelf->__Vfunc_leading_zero32__1872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4097__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4097__part 
                            = vlSelf->__Vfunc_leading_zero32__4097__value;
                        vlSelf->__Vfunc_leading_zero32__4097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4097__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1877__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1877__part 
                            = vlSelf->__Vfunc_leading_zero32__1877__value;
                        vlSelf->__Vfunc_leading_zero32__1877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1877__count)));
                            vlSelf->__Vfunc_leading_zero32__1877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1877__count)));
                            vlSelf->__Vfunc_leading_zero32__1877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1877__count)));
                            vlSelf->__Vfunc_leading_zero32__1877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1877__count)));
                            vlSelf->__Vfunc_leading_zero32__1877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1877__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1878__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1878__part 
                            = vlSelf->__Vfunc_leading_zero32__1878__value;
                        vlSelf->__Vfunc_leading_zero32__1878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4109__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4109__part 
                            = vlSelf->__Vfunc_leading_zero32__4109__value;
                        vlSelf->__Vfunc_leading_zero32__4109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4109__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1883__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1883__part 
                            = vlSelf->__Vfunc_leading_zero32__1883__value;
                        vlSelf->__Vfunc_leading_zero32__1883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1883__count)));
                            vlSelf->__Vfunc_leading_zero32__1883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1883__count)));
                            vlSelf->__Vfunc_leading_zero32__1883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1883__count)));
                            vlSelf->__Vfunc_leading_zero32__1883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1883__count)));
                            vlSelf->__Vfunc_leading_zero32__1883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1884__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1884__part 
                            = vlSelf->__Vfunc_leading_zero32__1884__value;
                        vlSelf->__Vfunc_leading_zero32__1884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1884__count)));
                            vlSelf->__Vfunc_leading_zero32__1884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1884__count)));
                            vlSelf->__Vfunc_leading_zero32__1884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1884__count)));
                            vlSelf->__Vfunc_leading_zero32__1884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1884__count)));
                            vlSelf->__Vfunc_leading_zero32__1884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1884__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4121__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4121__part 
                            = vlSelf->__Vfunc_leading_zero32__4121__value;
                        vlSelf->__Vfunc_leading_zero32__4121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4121__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1889__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1889__part 
                            = vlSelf->__Vfunc_leading_zero32__1889__value;
                        vlSelf->__Vfunc_leading_zero32__1889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1889__count)));
                            vlSelf->__Vfunc_leading_zero32__1889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1889__count)));
                            vlSelf->__Vfunc_leading_zero32__1889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1889__count)));
                            vlSelf->__Vfunc_leading_zero32__1889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1889__count)));
                            vlSelf->__Vfunc_leading_zero32__1889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1890__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1890__part 
                            = vlSelf->__Vfunc_leading_zero32__1890__value;
                        vlSelf->__Vfunc_leading_zero32__1890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4133__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4133__part 
                            = vlSelf->__Vfunc_leading_zero32__4133__value;
                        vlSelf->__Vfunc_leading_zero32__4133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4133__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1895__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1895__part 
                            = vlSelf->__Vfunc_leading_zero32__1895__value;
                        vlSelf->__Vfunc_leading_zero32__1895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1895__count)));
                            vlSelf->__Vfunc_leading_zero32__1895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1895__count)));
                            vlSelf->__Vfunc_leading_zero32__1895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1895__count)));
                            vlSelf->__Vfunc_leading_zero32__1895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1895__count)));
                            vlSelf->__Vfunc_leading_zero32__1895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1896__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1896__part 
                            = vlSelf->__Vfunc_leading_zero32__1896__value;
                        vlSelf->__Vfunc_leading_zero32__1896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1896__count)));
                            vlSelf->__Vfunc_leading_zero32__1896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1896__count)));
                            vlSelf->__Vfunc_leading_zero32__1896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1896__count)));
                            vlSelf->__Vfunc_leading_zero32__1896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1896__count)));
                            vlSelf->__Vfunc_leading_zero32__1896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1896__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4145__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4145__part 
                            = vlSelf->__Vfunc_leading_zero32__4145__value;
                        vlSelf->__Vfunc_leading_zero32__4145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4145__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1901__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1901__part 
                            = vlSelf->__Vfunc_leading_zero32__1901__value;
                        vlSelf->__Vfunc_leading_zero32__1901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1901__count)));
                            vlSelf->__Vfunc_leading_zero32__1901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1901__count)));
                            vlSelf->__Vfunc_leading_zero32__1901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1901__count)));
                            vlSelf->__Vfunc_leading_zero32__1901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1901__count)));
                            vlSelf->__Vfunc_leading_zero32__1901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1901__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1902__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1902__part 
                            = vlSelf->__Vfunc_leading_zero32__1902__value;
                        vlSelf->__Vfunc_leading_zero32__1902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4157__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4157__part 
                            = vlSelf->__Vfunc_leading_zero32__4157__value;
                        vlSelf->__Vfunc_leading_zero32__4157__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4157__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4157__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4157__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4157__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4157__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1907__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1907__part 
                            = vlSelf->__Vfunc_leading_zero32__1907__value;
                        vlSelf->__Vfunc_leading_zero32__1907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1907__count)));
                            vlSelf->__Vfunc_leading_zero32__1907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1907__count)));
                            vlSelf->__Vfunc_leading_zero32__1907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1907__count)));
                            vlSelf->__Vfunc_leading_zero32__1907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1907__count)));
                            vlSelf->__Vfunc_leading_zero32__1907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1908__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1908__part 
                            = vlSelf->__Vfunc_leading_zero32__1908__value;
                        vlSelf->__Vfunc_leading_zero32__1908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1908__count)));
                            vlSelf->__Vfunc_leading_zero32__1908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1908__count)));
                            vlSelf->__Vfunc_leading_zero32__1908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1908__count)));
                            vlSelf->__Vfunc_leading_zero32__1908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1908__count)));
                            vlSelf->__Vfunc_leading_zero32__1908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4169__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4169__part 
                            = vlSelf->__Vfunc_leading_zero32__4169__value;
                        vlSelf->__Vfunc_leading_zero32__4169__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4169__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4169__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4169__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4169__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4169__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1913__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1913__part 
                            = vlSelf->__Vfunc_leading_zero32__1913__value;
                        vlSelf->__Vfunc_leading_zero32__1913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1913__count)));
                            vlSelf->__Vfunc_leading_zero32__1913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1913__count)));
                            vlSelf->__Vfunc_leading_zero32__1913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1913__count)));
                            vlSelf->__Vfunc_leading_zero32__1913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1913__count)));
                            vlSelf->__Vfunc_leading_zero32__1913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1913__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1914__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1914__part 
                            = vlSelf->__Vfunc_leading_zero32__1914__value;
                        vlSelf->__Vfunc_leading_zero32__1914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4181__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4181__part 
                            = vlSelf->__Vfunc_leading_zero32__4181__value;
                        vlSelf->__Vfunc_leading_zero32__4181__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4181__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4181__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4181__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4181__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4181__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1919__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1919__part 
                            = vlSelf->__Vfunc_leading_zero32__1919__value;
                        vlSelf->__Vfunc_leading_zero32__1919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1919__count)));
                            vlSelf->__Vfunc_leading_zero32__1919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1919__count)));
                            vlSelf->__Vfunc_leading_zero32__1919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1919__count)));
                            vlSelf->__Vfunc_leading_zero32__1919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1919__count)));
                            vlSelf->__Vfunc_leading_zero32__1919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1920__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1920__part 
                            = vlSelf->__Vfunc_leading_zero32__1920__value;
                        vlSelf->__Vfunc_leading_zero32__1920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1920__count)));
                            vlSelf->__Vfunc_leading_zero32__1920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1920__count)));
                            vlSelf->__Vfunc_leading_zero32__1920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1920__count)));
                            vlSelf->__Vfunc_leading_zero32__1920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1920__count)));
                            vlSelf->__Vfunc_leading_zero32__1920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1920__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4193__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4193__part 
                            = vlSelf->__Vfunc_leading_zero32__4193__value;
                        vlSelf->__Vfunc_leading_zero32__4193__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4193__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4193__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4193__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4193__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4193__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1925__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1925__part 
                            = vlSelf->__Vfunc_leading_zero32__1925__value;
                        vlSelf->__Vfunc_leading_zero32__1925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1925__count)));
                            vlSelf->__Vfunc_leading_zero32__1925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1925__count)));
                            vlSelf->__Vfunc_leading_zero32__1925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1925__count)));
                            vlSelf->__Vfunc_leading_zero32__1925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1925__count)));
                            vlSelf->__Vfunc_leading_zero32__1925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1926__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1926__part 
                            = vlSelf->__Vfunc_leading_zero32__1926__value;
                        vlSelf->__Vfunc_leading_zero32__1926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4205__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4205__part 
                            = vlSelf->__Vfunc_leading_zero32__4205__value;
                        vlSelf->__Vfunc_leading_zero32__4205__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4205__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4205__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4205__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4205__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4205__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1931__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1931__part 
                            = vlSelf->__Vfunc_leading_zero32__1931__value;
                        vlSelf->__Vfunc_leading_zero32__1931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1931__count)));
                            vlSelf->__Vfunc_leading_zero32__1931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1931__count)));
                            vlSelf->__Vfunc_leading_zero32__1931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1931__count)));
                            vlSelf->__Vfunc_leading_zero32__1931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1931__count)));
                            vlSelf->__Vfunc_leading_zero32__1931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1932__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1932__part 
                            = vlSelf->__Vfunc_leading_zero32__1932__value;
                        vlSelf->__Vfunc_leading_zero32__1932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1932__count)));
                            vlSelf->__Vfunc_leading_zero32__1932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1932__count)));
                            vlSelf->__Vfunc_leading_zero32__1932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1932__count)));
                            vlSelf->__Vfunc_leading_zero32__1932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1932__count)));
                            vlSelf->__Vfunc_leading_zero32__1932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1932__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4217__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4217__part 
                            = vlSelf->__Vfunc_leading_zero32__4217__value;
                        vlSelf->__Vfunc_leading_zero32__4217__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4217__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4217__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4217__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4217__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4217__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1937__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1937__part 
                            = vlSelf->__Vfunc_leading_zero32__1937__value;
                        vlSelf->__Vfunc_leading_zero32__1937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1937__count)));
                            vlSelf->__Vfunc_leading_zero32__1937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1937__count)));
                            vlSelf->__Vfunc_leading_zero32__1937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1937__count)));
                            vlSelf->__Vfunc_leading_zero32__1937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1937__count)));
                            vlSelf->__Vfunc_leading_zero32__1937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1937__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1938__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4229__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4229__part 
                            = vlSelf->__Vfunc_leading_zero32__4229__value;
                        vlSelf->__Vfunc_leading_zero32__4229__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4229__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4229__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4229__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4229__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4229__Vfuncout)) 
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2712__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2712__part 
                            = vlSelf->__Vfunc_leading_zero32__2712__value;
                        vlSelf->__Vfunc_leading_zero32__2712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2712__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2724__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2724__part 
                            = vlSelf->__Vfunc_leading_zero32__2724__value;
                        vlSelf->__Vfunc_leading_zero32__2724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2724__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2736__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2736__part 
                            = vlSelf->__Vfunc_leading_zero32__2736__value;
                        vlSelf->__Vfunc_leading_zero32__2736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2736__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2748__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2748__part 
                            = vlSelf->__Vfunc_leading_zero32__2748__value;
                        vlSelf->__Vfunc_leading_zero32__2748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2748__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2760__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2760__part 
                            = vlSelf->__Vfunc_leading_zero32__2760__value;
                        vlSelf->__Vfunc_leading_zero32__2760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2760__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2772__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2772__part 
                            = vlSelf->__Vfunc_leading_zero32__2772__value;
                        vlSelf->__Vfunc_leading_zero32__2772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2772__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2784__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2784__part 
                            = vlSelf->__Vfunc_leading_zero32__2784__value;
                        vlSelf->__Vfunc_leading_zero32__2784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2784__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2796__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2796__part 
                            = vlSelf->__Vfunc_leading_zero32__2796__value;
                        vlSelf->__Vfunc_leading_zero32__2796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2796__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2808__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2808__part 
                            = vlSelf->__Vfunc_leading_zero32__2808__value;
                        vlSelf->__Vfunc_leading_zero32__2808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2808__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2820__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2820__part 
                            = vlSelf->__Vfunc_leading_zero32__2820__value;
                        vlSelf->__Vfunc_leading_zero32__2820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2820__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2832__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2832__part 
                            = vlSelf->__Vfunc_leading_zero32__2832__value;
                        vlSelf->__Vfunc_leading_zero32__2832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2832__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2844__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2844__part 
                            = vlSelf->__Vfunc_leading_zero32__2844__value;
                        vlSelf->__Vfunc_leading_zero32__2844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2844__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2856__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2856__part 
                            = vlSelf->__Vfunc_leading_zero32__2856__value;
                        vlSelf->__Vfunc_leading_zero32__2856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2856__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2868__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2868__part 
                            = vlSelf->__Vfunc_leading_zero32__2868__value;
                        vlSelf->__Vfunc_leading_zero32__2868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2868__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2880__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2880__part 
                            = vlSelf->__Vfunc_leading_zero32__2880__value;
                        vlSelf->__Vfunc_leading_zero32__2880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2880__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2892__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2892__part 
                            = vlSelf->__Vfunc_leading_zero32__2892__value;
                        vlSelf->__Vfunc_leading_zero32__2892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2892__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2904__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2904__part 
                            = vlSelf->__Vfunc_leading_zero32__2904__value;
                        vlSelf->__Vfunc_leading_zero32__2904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2916__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2916__part 
                            = vlSelf->__Vfunc_leading_zero32__2916__value;
                        vlSelf->__Vfunc_leading_zero32__2916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2928__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2928__part 
                            = vlSelf->__Vfunc_leading_zero32__2928__value;
                        vlSelf->__Vfunc_leading_zero32__2928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2940__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2940__part 
                            = vlSelf->__Vfunc_leading_zero32__2940__value;
                        vlSelf->__Vfunc_leading_zero32__2940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2952__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2952__part 
                            = vlSelf->__Vfunc_leading_zero32__2952__value;
                        vlSelf->__Vfunc_leading_zero32__2952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2964__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2964__part 
                            = vlSelf->__Vfunc_leading_zero32__2964__value;
                        vlSelf->__Vfunc_leading_zero32__2964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2976__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2976__part 
                            = vlSelf->__Vfunc_leading_zero32__2976__value;
                        vlSelf->__Vfunc_leading_zero32__2976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2976__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2988__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2988__part 
                            = vlSelf->__Vfunc_leading_zero32__2988__value;
                        vlSelf->__Vfunc_leading_zero32__2988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2988__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3000__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3000__part 
                            = vlSelf->__Vfunc_leading_zero32__3000__value;
                        vlSelf->__Vfunc_leading_zero32__3000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3000__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3012__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3012__part 
                            = vlSelf->__Vfunc_leading_zero32__3012__value;
                        vlSelf->__Vfunc_leading_zero32__3012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3012__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3024__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3024__part 
                            = vlSelf->__Vfunc_leading_zero32__3024__value;
                        vlSelf->__Vfunc_leading_zero32__3024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3024__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3036__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3036__part 
                            = vlSelf->__Vfunc_leading_zero32__3036__value;
                        vlSelf->__Vfunc_leading_zero32__3036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3036__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3048__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3048__part 
                            = vlSelf->__Vfunc_leading_zero32__3048__value;
                        vlSelf->__Vfunc_leading_zero32__3048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3048__Vfuncout)) 
                             - (IData)(8U))));
}
