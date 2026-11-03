// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__15(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__15\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1368__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1368__part 
                            = vlSelf->__Vfunc_leading_zero32__1368__value;
                        vlSelf->__Vfunc_leading_zero32__1368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1368__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3089__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3089__part 
                            = vlSelf->__Vfunc_leading_zero32__3089__value;
                        vlSelf->__Vfunc_leading_zero32__3089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3089__count)));
                            vlSelf->__Vfunc_leading_zero32__3089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3089__count)));
                            vlSelf->__Vfunc_leading_zero32__3089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3089__count)));
                            vlSelf->__Vfunc_leading_zero32__3089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3089__count)));
                            vlSelf->__Vfunc_leading_zero32__3089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1373__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1373__part 
                            = vlSelf->__Vfunc_leading_zero32__1373__value;
                        vlSelf->__Vfunc_leading_zero32__1373__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1373__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1373__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1373__count)));
                            vlSelf->__Vfunc_leading_zero32__1373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1373__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1373__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1373__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1373__count)));
                            vlSelf->__Vfunc_leading_zero32__1373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1373__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1373__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1373__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1373__count)));
                            vlSelf->__Vfunc_leading_zero32__1373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1373__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1373__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1373__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1373__count)));
                            vlSelf->__Vfunc_leading_zero32__1373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1373__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1373__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1373__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1373__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1373__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1373__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1373__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1373__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1374__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1374__part 
                            = vlSelf->__Vfunc_leading_zero32__1374__value;
                        vlSelf->__Vfunc_leading_zero32__1374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3101__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3101__part 
                            = vlSelf->__Vfunc_leading_zero32__3101__value;
                        vlSelf->__Vfunc_leading_zero32__3101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3101__count)));
                            vlSelf->__Vfunc_leading_zero32__3101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3101__count)));
                            vlSelf->__Vfunc_leading_zero32__3101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3101__count)));
                            vlSelf->__Vfunc_leading_zero32__3101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3101__count)));
                            vlSelf->__Vfunc_leading_zero32__3101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1379__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1379__part 
                            = vlSelf->__Vfunc_leading_zero32__1379__value;
                        vlSelf->__Vfunc_leading_zero32__1379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1379__count)));
                            vlSelf->__Vfunc_leading_zero32__1379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1379__count)));
                            vlSelf->__Vfunc_leading_zero32__1379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1379__count)));
                            vlSelf->__Vfunc_leading_zero32__1379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1379__count)));
                            vlSelf->__Vfunc_leading_zero32__1379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1380__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1380__part 
                            = vlSelf->__Vfunc_leading_zero32__1380__value;
                        vlSelf->__Vfunc_leading_zero32__1380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1380__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3113__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3113__part 
                            = vlSelf->__Vfunc_leading_zero32__3113__value;
                        vlSelf->__Vfunc_leading_zero32__3113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3113__count)));
                            vlSelf->__Vfunc_leading_zero32__3113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3113__count)));
                            vlSelf->__Vfunc_leading_zero32__3113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3113__count)));
                            vlSelf->__Vfunc_leading_zero32__3113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3113__count)));
                            vlSelf->__Vfunc_leading_zero32__3113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1385__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1385__part 
                            = vlSelf->__Vfunc_leading_zero32__1385__value;
                        vlSelf->__Vfunc_leading_zero32__1385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1385__count)));
                            vlSelf->__Vfunc_leading_zero32__1385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1385__count)));
                            vlSelf->__Vfunc_leading_zero32__1385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1385__count)));
                            vlSelf->__Vfunc_leading_zero32__1385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1385__count)));
                            vlSelf->__Vfunc_leading_zero32__1385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1385__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1386__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1386__part 
                            = vlSelf->__Vfunc_leading_zero32__1386__value;
                        vlSelf->__Vfunc_leading_zero32__1386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3125__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3125__part 
                            = vlSelf->__Vfunc_leading_zero32__3125__value;
                        vlSelf->__Vfunc_leading_zero32__3125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1391__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1391__part 
                            = vlSelf->__Vfunc_leading_zero32__1391__value;
                        vlSelf->__Vfunc_leading_zero32__1391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1391__count)));
                            vlSelf->__Vfunc_leading_zero32__1391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1391__count)));
                            vlSelf->__Vfunc_leading_zero32__1391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1391__count)));
                            vlSelf->__Vfunc_leading_zero32__1391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1391__count)));
                            vlSelf->__Vfunc_leading_zero32__1391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1392__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1392__part 
                            = vlSelf->__Vfunc_leading_zero32__1392__value;
                        vlSelf->__Vfunc_leading_zero32__1392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1392__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3137__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3137__part 
                            = vlSelf->__Vfunc_leading_zero32__3137__value;
                        vlSelf->__Vfunc_leading_zero32__3137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1397__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1397__part 
                            = vlSelf->__Vfunc_leading_zero32__1397__value;
                        vlSelf->__Vfunc_leading_zero32__1397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1397__count)));
                            vlSelf->__Vfunc_leading_zero32__1397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1397__count)));
                            vlSelf->__Vfunc_leading_zero32__1397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1397__count)));
                            vlSelf->__Vfunc_leading_zero32__1397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1397__count)));
                            vlSelf->__Vfunc_leading_zero32__1397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1397__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1398__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1398__part 
                            = vlSelf->__Vfunc_leading_zero32__1398__value;
                        vlSelf->__Vfunc_leading_zero32__1398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3149__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3149__part 
                            = vlSelf->__Vfunc_leading_zero32__3149__value;
                        vlSelf->__Vfunc_leading_zero32__3149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1403__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1403__part 
                            = vlSelf->__Vfunc_leading_zero32__1403__value;
                        vlSelf->__Vfunc_leading_zero32__1403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1403__count)));
                            vlSelf->__Vfunc_leading_zero32__1403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1403__count)));
                            vlSelf->__Vfunc_leading_zero32__1403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1403__count)));
                            vlSelf->__Vfunc_leading_zero32__1403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1403__count)));
                            vlSelf->__Vfunc_leading_zero32__1403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1404__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1404__part 
                            = vlSelf->__Vfunc_leading_zero32__1404__value;
                        vlSelf->__Vfunc_leading_zero32__1404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1404__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3161__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3161__part 
                            = vlSelf->__Vfunc_leading_zero32__3161__value;
                        vlSelf->__Vfunc_leading_zero32__3161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1409__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1409__part 
                            = vlSelf->__Vfunc_leading_zero32__1409__value;
                        vlSelf->__Vfunc_leading_zero32__1409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1409__count)));
                            vlSelf->__Vfunc_leading_zero32__1409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1409__count)));
                            vlSelf->__Vfunc_leading_zero32__1409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1409__count)));
                            vlSelf->__Vfunc_leading_zero32__1409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1409__count)));
                            vlSelf->__Vfunc_leading_zero32__1409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1409__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1410__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1410__part 
                            = vlSelf->__Vfunc_leading_zero32__1410__value;
                        vlSelf->__Vfunc_leading_zero32__1410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3173__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3173__part 
                            = vlSelf->__Vfunc_leading_zero32__3173__value;
                        vlSelf->__Vfunc_leading_zero32__3173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3173__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1415__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1415__part 
                            = vlSelf->__Vfunc_leading_zero32__1415__value;
                        vlSelf->__Vfunc_leading_zero32__1415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1415__count)));
                            vlSelf->__Vfunc_leading_zero32__1415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1415__count)));
                            vlSelf->__Vfunc_leading_zero32__1415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1415__count)));
                            vlSelf->__Vfunc_leading_zero32__1415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1415__count)));
                            vlSelf->__Vfunc_leading_zero32__1415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1416__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1416__part 
                            = vlSelf->__Vfunc_leading_zero32__1416__value;
                        vlSelf->__Vfunc_leading_zero32__1416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1416__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3185__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3185__part 
                            = vlSelf->__Vfunc_leading_zero32__3185__value;
                        vlSelf->__Vfunc_leading_zero32__3185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1421__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1421__part 
                            = vlSelf->__Vfunc_leading_zero32__1421__value;
                        vlSelf->__Vfunc_leading_zero32__1421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1421__count)));
                            vlSelf->__Vfunc_leading_zero32__1421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1421__count)));
                            vlSelf->__Vfunc_leading_zero32__1421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1421__count)));
                            vlSelf->__Vfunc_leading_zero32__1421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1421__count)));
                            vlSelf->__Vfunc_leading_zero32__1421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1421__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1422__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1422__part 
                            = vlSelf->__Vfunc_leading_zero32__1422__value;
                        vlSelf->__Vfunc_leading_zero32__1422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3197__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3197__part 
                            = vlSelf->__Vfunc_leading_zero32__3197__value;
                        vlSelf->__Vfunc_leading_zero32__3197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1427__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1427__part 
                            = vlSelf->__Vfunc_leading_zero32__1427__value;
                        vlSelf->__Vfunc_leading_zero32__1427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1427__count)));
                            vlSelf->__Vfunc_leading_zero32__1427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1427__count)));
                            vlSelf->__Vfunc_leading_zero32__1427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1427__count)));
                            vlSelf->__Vfunc_leading_zero32__1427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1427__count)));
                            vlSelf->__Vfunc_leading_zero32__1427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1428__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1428__part 
                            = vlSelf->__Vfunc_leading_zero32__1428__value;
                        vlSelf->__Vfunc_leading_zero32__1428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3209__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3209__part 
                            = vlSelf->__Vfunc_leading_zero32__3209__value;
                        vlSelf->__Vfunc_leading_zero32__3209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3209__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1433__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1433__part 
                            = vlSelf->__Vfunc_leading_zero32__1433__value;
                        vlSelf->__Vfunc_leading_zero32__1433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1433__count)));
                            vlSelf->__Vfunc_leading_zero32__1433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1433__count)));
                            vlSelf->__Vfunc_leading_zero32__1433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1433__count)));
                            vlSelf->__Vfunc_leading_zero32__1433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1433__count)));
                            vlSelf->__Vfunc_leading_zero32__1433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1433__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1434__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1434__part 
                            = vlSelf->__Vfunc_leading_zero32__1434__value;
                        vlSelf->__Vfunc_leading_zero32__1434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3221__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3221__part 
                            = vlSelf->__Vfunc_leading_zero32__3221__value;
                        vlSelf->__Vfunc_leading_zero32__3221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1439__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1439__part 
                            = vlSelf->__Vfunc_leading_zero32__1439__value;
                        vlSelf->__Vfunc_leading_zero32__1439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1439__count)));
                            vlSelf->__Vfunc_leading_zero32__1439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1439__count)));
                            vlSelf->__Vfunc_leading_zero32__1439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1439__count)));
                            vlSelf->__Vfunc_leading_zero32__1439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1439__count)));
                            vlSelf->__Vfunc_leading_zero32__1439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1440__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1440__part 
                            = vlSelf->__Vfunc_leading_zero32__1440__value;
                        vlSelf->__Vfunc_leading_zero32__1440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3233__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3233__part 
                            = vlSelf->__Vfunc_leading_zero32__3233__value;
                        vlSelf->__Vfunc_leading_zero32__3233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1445__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1445__part 
                            = vlSelf->__Vfunc_leading_zero32__1445__value;
                        vlSelf->__Vfunc_leading_zero32__1445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1445__count)));
                            vlSelf->__Vfunc_leading_zero32__1445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1445__count)));
                            vlSelf->__Vfunc_leading_zero32__1445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1445__count)));
                            vlSelf->__Vfunc_leading_zero32__1445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1445__count)));
                            vlSelf->__Vfunc_leading_zero32__1445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1445__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1446__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1446__part 
                            = vlSelf->__Vfunc_leading_zero32__1446__value;
                        vlSelf->__Vfunc_leading_zero32__1446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3245__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3245__part 
                            = vlSelf->__Vfunc_leading_zero32__3245__value;
                        vlSelf->__Vfunc_leading_zero32__3245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3245__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1451__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1451__part 
                            = vlSelf->__Vfunc_leading_zero32__1451__value;
                        vlSelf->__Vfunc_leading_zero32__1451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1451__count)));
                            vlSelf->__Vfunc_leading_zero32__1451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1451__count)));
                            vlSelf->__Vfunc_leading_zero32__1451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1451__count)));
                            vlSelf->__Vfunc_leading_zero32__1451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1451__count)));
                            vlSelf->__Vfunc_leading_zero32__1451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1452__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1452__part 
                            = vlSelf->__Vfunc_leading_zero32__1452__value;
                        vlSelf->__Vfunc_leading_zero32__1452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3257__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3257__part 
                            = vlSelf->__Vfunc_leading_zero32__3257__value;
                        vlSelf->__Vfunc_leading_zero32__3257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1457__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1457__part 
                            = vlSelf->__Vfunc_leading_zero32__1457__value;
                        vlSelf->__Vfunc_leading_zero32__1457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1457__count)));
                            vlSelf->__Vfunc_leading_zero32__1457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1457__count)));
                            vlSelf->__Vfunc_leading_zero32__1457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1457__count)));
                            vlSelf->__Vfunc_leading_zero32__1457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1457__count)));
                            vlSelf->__Vfunc_leading_zero32__1457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1457__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1458__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1458__part 
                            = vlSelf->__Vfunc_leading_zero32__1458__value;
                        vlSelf->__Vfunc_leading_zero32__1458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3269__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3269__part 
                            = vlSelf->__Vfunc_leading_zero32__3269__value;
                        vlSelf->__Vfunc_leading_zero32__3269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1463__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1463__part 
                            = vlSelf->__Vfunc_leading_zero32__1463__value;
                        vlSelf->__Vfunc_leading_zero32__1463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1463__count)));
                            vlSelf->__Vfunc_leading_zero32__1463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1463__count)));
                            vlSelf->__Vfunc_leading_zero32__1463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1463__count)));
                            vlSelf->__Vfunc_leading_zero32__1463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1463__count)));
                            vlSelf->__Vfunc_leading_zero32__1463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1464__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1464__part 
                            = vlSelf->__Vfunc_leading_zero32__1464__value;
                        vlSelf->__Vfunc_leading_zero32__1464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3281__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3281__part 
                            = vlSelf->__Vfunc_leading_zero32__3281__value;
                        vlSelf->__Vfunc_leading_zero32__3281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1469__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1469__part 
                            = vlSelf->__Vfunc_leading_zero32__1469__value;
                        vlSelf->__Vfunc_leading_zero32__1469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1469__count)));
                            vlSelf->__Vfunc_leading_zero32__1469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1469__count)));
                            vlSelf->__Vfunc_leading_zero32__1469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1469__count)));
                            vlSelf->__Vfunc_leading_zero32__1469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1469__count)));
                            vlSelf->__Vfunc_leading_zero32__1469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1469__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1470__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1470__part 
                            = vlSelf->__Vfunc_leading_zero32__1470__value;
                        vlSelf->__Vfunc_leading_zero32__1470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3293__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3293__part 
                            = vlSelf->__Vfunc_leading_zero32__3293__value;
                        vlSelf->__Vfunc_leading_zero32__3293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1475__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1475__part 
                            = vlSelf->__Vfunc_leading_zero32__1475__value;
                        vlSelf->__Vfunc_leading_zero32__1475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1475__count)));
                            vlSelf->__Vfunc_leading_zero32__1475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1475__count)));
                            vlSelf->__Vfunc_leading_zero32__1475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1475__count)));
                            vlSelf->__Vfunc_leading_zero32__1475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1475__count)));
                            vlSelf->__Vfunc_leading_zero32__1475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1476__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1476__part 
                            = vlSelf->__Vfunc_leading_zero32__1476__value;
                        vlSelf->__Vfunc_leading_zero32__1476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3305__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3305__part 
                            = vlSelf->__Vfunc_leading_zero32__3305__value;
                        vlSelf->__Vfunc_leading_zero32__3305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1481__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1481__part 
                            = vlSelf->__Vfunc_leading_zero32__1481__value;
                        vlSelf->__Vfunc_leading_zero32__1481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1481__count)));
                            vlSelf->__Vfunc_leading_zero32__1481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1481__count)));
                            vlSelf->__Vfunc_leading_zero32__1481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1481__count)));
                            vlSelf->__Vfunc_leading_zero32__1481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1481__count)));
                            vlSelf->__Vfunc_leading_zero32__1481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1481__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1482__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1482__part 
                            = vlSelf->__Vfunc_leading_zero32__1482__value;
                        vlSelf->__Vfunc_leading_zero32__1482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3317__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3317__part 
                            = vlSelf->__Vfunc_leading_zero32__3317__value;
                        vlSelf->__Vfunc_leading_zero32__3317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1487__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1487__part 
                            = vlSelf->__Vfunc_leading_zero32__1487__value;
                        vlSelf->__Vfunc_leading_zero32__1487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1487__count)));
                            vlSelf->__Vfunc_leading_zero32__1487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1487__count)));
                            vlSelf->__Vfunc_leading_zero32__1487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1487__count)));
                            vlSelf->__Vfunc_leading_zero32__1487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1487__count)));
                            vlSelf->__Vfunc_leading_zero32__1487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1488__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1488__part 
                            = vlSelf->__Vfunc_leading_zero32__1488__value;
                        vlSelf->__Vfunc_leading_zero32__1488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3329__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3329__part 
                            = vlSelf->__Vfunc_leading_zero32__3329__value;
                        vlSelf->__Vfunc_leading_zero32__3329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1493__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1493__part 
                            = vlSelf->__Vfunc_leading_zero32__1493__value;
                        vlSelf->__Vfunc_leading_zero32__1493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1493__count)));
                            vlSelf->__Vfunc_leading_zero32__1493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1493__count)));
                            vlSelf->__Vfunc_leading_zero32__1493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1493__count)));
                            vlSelf->__Vfunc_leading_zero32__1493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1493__count)));
                            vlSelf->__Vfunc_leading_zero32__1493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1493__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1494__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1494__part 
                            = vlSelf->__Vfunc_leading_zero32__1494__value;
                        vlSelf->__Vfunc_leading_zero32__1494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3341__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3341__part 
                            = vlSelf->__Vfunc_leading_zero32__3341__value;
                        vlSelf->__Vfunc_leading_zero32__3341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1499__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1499__part 
                            = vlSelf->__Vfunc_leading_zero32__1499__value;
                        vlSelf->__Vfunc_leading_zero32__1499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1499__count)));
                            vlSelf->__Vfunc_leading_zero32__1499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1499__count)));
                            vlSelf->__Vfunc_leading_zero32__1499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1499__count)));
                            vlSelf->__Vfunc_leading_zero32__1499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1499__count)));
                            vlSelf->__Vfunc_leading_zero32__1499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1500__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1500__part 
                            = vlSelf->__Vfunc_leading_zero32__1500__value;
                        vlSelf->__Vfunc_leading_zero32__1500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3353__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3353__part 
                            = vlSelf->__Vfunc_leading_zero32__3353__value;
                        vlSelf->__Vfunc_leading_zero32__3353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3353__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1505__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1505__part 
                            = vlSelf->__Vfunc_leading_zero32__1505__value;
                        vlSelf->__Vfunc_leading_zero32__1505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1505__count)));
                            vlSelf->__Vfunc_leading_zero32__1505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1505__count)));
                            vlSelf->__Vfunc_leading_zero32__1505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1505__count)));
                            vlSelf->__Vfunc_leading_zero32__1505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1505__count)));
                            vlSelf->__Vfunc_leading_zero32__1505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1505__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1506__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1506__part 
                            = vlSelf->__Vfunc_leading_zero32__1506__value;
                        vlSelf->__Vfunc_leading_zero32__1506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3365__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3365__part 
                            = vlSelf->__Vfunc_leading_zero32__3365__value;
                        vlSelf->__Vfunc_leading_zero32__3365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1511__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1511__part 
                            = vlSelf->__Vfunc_leading_zero32__1511__value;
                        vlSelf->__Vfunc_leading_zero32__1511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1511__count)));
                            vlSelf->__Vfunc_leading_zero32__1511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1511__count)));
                            vlSelf->__Vfunc_leading_zero32__1511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1511__count)));
                            vlSelf->__Vfunc_leading_zero32__1511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1511__count)));
                            vlSelf->__Vfunc_leading_zero32__1511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1512__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1512__part 
                            = vlSelf->__Vfunc_leading_zero32__1512__value;
                        vlSelf->__Vfunc_leading_zero32__1512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3377__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3377__part 
                            = vlSelf->__Vfunc_leading_zero32__3377__value;
                        vlSelf->__Vfunc_leading_zero32__3377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1517__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1517__part 
                            = vlSelf->__Vfunc_leading_zero32__1517__value;
                        vlSelf->__Vfunc_leading_zero32__1517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1517__count)));
                            vlSelf->__Vfunc_leading_zero32__1517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1517__count)));
                            vlSelf->__Vfunc_leading_zero32__1517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1517__count)));
                            vlSelf->__Vfunc_leading_zero32__1517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1517__count)));
                            vlSelf->__Vfunc_leading_zero32__1517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1517__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1518__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1518__part 
                            = vlSelf->__Vfunc_leading_zero32__1518__value;
                        vlSelf->__Vfunc_leading_zero32__1518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3389__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3389__part 
                            = vlSelf->__Vfunc_leading_zero32__3389__value;
                        vlSelf->__Vfunc_leading_zero32__3389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3389__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1523__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1523__part 
                            = vlSelf->__Vfunc_leading_zero32__1523__value;
                        vlSelf->__Vfunc_leading_zero32__1523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1523__count)));
                            vlSelf->__Vfunc_leading_zero32__1523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1523__count)));
                            vlSelf->__Vfunc_leading_zero32__1523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1523__count)));
                            vlSelf->__Vfunc_leading_zero32__1523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1523__count)));
                            vlSelf->__Vfunc_leading_zero32__1523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1524__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1524__part 
                            = vlSelf->__Vfunc_leading_zero32__1524__value;
                        vlSelf->__Vfunc_leading_zero32__1524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3401__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3401__part 
                            = vlSelf->__Vfunc_leading_zero32__3401__value;
                        vlSelf->__Vfunc_leading_zero32__3401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1529__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1529__part 
                            = vlSelf->__Vfunc_leading_zero32__1529__value;
                        vlSelf->__Vfunc_leading_zero32__1529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1529__count)));
                            vlSelf->__Vfunc_leading_zero32__1529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1529__count)));
                            vlSelf->__Vfunc_leading_zero32__1529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1529__count)));
                            vlSelf->__Vfunc_leading_zero32__1529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1529__count)));
                            vlSelf->__Vfunc_leading_zero32__1529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1529__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1530__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1530__part 
                            = vlSelf->__Vfunc_leading_zero32__1530__value;
                        vlSelf->__Vfunc_leading_zero32__1530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3413__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3413__part 
                            = vlSelf->__Vfunc_leading_zero32__3413__value;
                        vlSelf->__Vfunc_leading_zero32__3413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1535__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1535__part 
                            = vlSelf->__Vfunc_leading_zero32__1535__value;
                        vlSelf->__Vfunc_leading_zero32__1535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1535__count)));
                            vlSelf->__Vfunc_leading_zero32__1535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1535__count)));
                            vlSelf->__Vfunc_leading_zero32__1535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1535__count)));
                            vlSelf->__Vfunc_leading_zero32__1535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1535__count)));
                            vlSelf->__Vfunc_leading_zero32__1535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1536__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1536__part 
                            = vlSelf->__Vfunc_leading_zero32__1536__value;
                        vlSelf->__Vfunc_leading_zero32__1536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3425__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3425__part 
                            = vlSelf->__Vfunc_leading_zero32__3425__value;
                        vlSelf->__Vfunc_leading_zero32__3425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3425__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1541__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1541__part 
                            = vlSelf->__Vfunc_leading_zero32__1541__value;
                        vlSelf->__Vfunc_leading_zero32__1541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1541__count)));
                            vlSelf->__Vfunc_leading_zero32__1541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1541__count)));
                            vlSelf->__Vfunc_leading_zero32__1541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1541__count)));
                            vlSelf->__Vfunc_leading_zero32__1541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1541__count)));
                            vlSelf->__Vfunc_leading_zero32__1541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1541__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1542__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1542__part 
                            = vlSelf->__Vfunc_leading_zero32__1542__value;
                        vlSelf->__Vfunc_leading_zero32__1542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3437__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3437__part 
                            = vlSelf->__Vfunc_leading_zero32__3437__value;
                        vlSelf->__Vfunc_leading_zero32__3437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1547__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1547__part 
                            = vlSelf->__Vfunc_leading_zero32__1547__value;
                        vlSelf->__Vfunc_leading_zero32__1547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1547__count)));
                            vlSelf->__Vfunc_leading_zero32__1547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1547__count)));
                            vlSelf->__Vfunc_leading_zero32__1547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1547__count)));
                            vlSelf->__Vfunc_leading_zero32__1547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1547__count)));
                            vlSelf->__Vfunc_leading_zero32__1547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1548__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1548__part 
                            = vlSelf->__Vfunc_leading_zero32__1548__value;
                        vlSelf->__Vfunc_leading_zero32__1548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3449__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3449__part 
                            = vlSelf->__Vfunc_leading_zero32__3449__value;
                        vlSelf->__Vfunc_leading_zero32__3449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1553__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1553__part 
                            = vlSelf->__Vfunc_leading_zero32__1553__value;
                        vlSelf->__Vfunc_leading_zero32__1553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1553__count)));
                            vlSelf->__Vfunc_leading_zero32__1553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1553__count)));
                            vlSelf->__Vfunc_leading_zero32__1553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1553__count)));
                            vlSelf->__Vfunc_leading_zero32__1553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1553__count)));
                            vlSelf->__Vfunc_leading_zero32__1553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1553__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1554__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1554__part 
                            = vlSelf->__Vfunc_leading_zero32__1554__value;
                        vlSelf->__Vfunc_leading_zero32__1554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3461__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3461__part 
                            = vlSelf->__Vfunc_leading_zero32__3461__value;
                        vlSelf->__Vfunc_leading_zero32__3461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3461__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1559__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1559__part 
                            = vlSelf->__Vfunc_leading_zero32__1559__value;
                        vlSelf->__Vfunc_leading_zero32__1559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1559__count)));
                            vlSelf->__Vfunc_leading_zero32__1559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1559__count)));
                            vlSelf->__Vfunc_leading_zero32__1559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1559__count)));
                            vlSelf->__Vfunc_leading_zero32__1559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1559__count)));
                            vlSelf->__Vfunc_leading_zero32__1559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1560__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1560__part 
                            = vlSelf->__Vfunc_leading_zero32__1560__value;
                        vlSelf->__Vfunc_leading_zero32__1560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3473__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3473__part 
                            = vlSelf->__Vfunc_leading_zero32__3473__value;
                        vlSelf->__Vfunc_leading_zero32__3473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1565__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1565__part 
                            = vlSelf->__Vfunc_leading_zero32__1565__value;
                        vlSelf->__Vfunc_leading_zero32__1565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1565__count)));
                            vlSelf->__Vfunc_leading_zero32__1565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1565__count)));
                            vlSelf->__Vfunc_leading_zero32__1565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1565__count)));
                            vlSelf->__Vfunc_leading_zero32__1565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1565__count)));
                            vlSelf->__Vfunc_leading_zero32__1565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1565__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1566__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1566__part 
                            = vlSelf->__Vfunc_leading_zero32__1566__value;
                        vlSelf->__Vfunc_leading_zero32__1566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1566__count)));
                            vlSelf->__Vfunc_leading_zero32__1566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1566__count)));
                            vlSelf->__Vfunc_leading_zero32__1566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1566__count)));
                            vlSelf->__Vfunc_leading_zero32__1566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1566__count)));
                            vlSelf->__Vfunc_leading_zero32__1566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3485__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3485__part 
                            = vlSelf->__Vfunc_leading_zero32__3485__value;
                        vlSelf->__Vfunc_leading_zero32__3485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1571__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1571__part 
                            = vlSelf->__Vfunc_leading_zero32__1571__value;
                        vlSelf->__Vfunc_leading_zero32__1571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1571__count)));
                            vlSelf->__Vfunc_leading_zero32__1571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1571__count)));
                            vlSelf->__Vfunc_leading_zero32__1571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1571__count)));
                            vlSelf->__Vfunc_leading_zero32__1571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1571__count)));
                            vlSelf->__Vfunc_leading_zero32__1571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1572__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1572__part 
                            = vlSelf->__Vfunc_leading_zero32__1572__value;
                        vlSelf->__Vfunc_leading_zero32__1572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1572__count)));
                            vlSelf->__Vfunc_leading_zero32__1572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1572__count)));
                            vlSelf->__Vfunc_leading_zero32__1572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1572__count)));
                            vlSelf->__Vfunc_leading_zero32__1572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1572__count)));
                            vlSelf->__Vfunc_leading_zero32__1572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3497__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3497__part 
                            = vlSelf->__Vfunc_leading_zero32__3497__value;
                        vlSelf->__Vfunc_leading_zero32__3497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3497__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1577__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1577__part 
                            = vlSelf->__Vfunc_leading_zero32__1577__value;
                        vlSelf->__Vfunc_leading_zero32__1577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1577__count)));
                            vlSelf->__Vfunc_leading_zero32__1577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1577__count)));
                            vlSelf->__Vfunc_leading_zero32__1577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1577__count)));
                            vlSelf->__Vfunc_leading_zero32__1577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1577__count)));
                            vlSelf->__Vfunc_leading_zero32__1577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1577__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1578__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1578__part 
                            = vlSelf->__Vfunc_leading_zero32__1578__value;
                        vlSelf->__Vfunc_leading_zero32__1578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1578__count)));
                            vlSelf->__Vfunc_leading_zero32__1578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1578__count)));
                            vlSelf->__Vfunc_leading_zero32__1578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1578__count)));
                            vlSelf->__Vfunc_leading_zero32__1578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1578__count)));
                            vlSelf->__Vfunc_leading_zero32__1578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3509__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3509__part 
                            = vlSelf->__Vfunc_leading_zero32__3509__value;
                        vlSelf->__Vfunc_leading_zero32__3509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1583__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1583__part 
                            = vlSelf->__Vfunc_leading_zero32__1583__value;
                        vlSelf->__Vfunc_leading_zero32__1583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1583__count)));
                            vlSelf->__Vfunc_leading_zero32__1583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1583__count)));
                            vlSelf->__Vfunc_leading_zero32__1583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1583__count)));
                            vlSelf->__Vfunc_leading_zero32__1583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1583__count)));
                            vlSelf->__Vfunc_leading_zero32__1583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1584__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1584__part 
                            = vlSelf->__Vfunc_leading_zero32__1584__value;
                        vlSelf->__Vfunc_leading_zero32__1584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1584__count)));
                            vlSelf->__Vfunc_leading_zero32__1584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1584__count)));
                            vlSelf->__Vfunc_leading_zero32__1584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1584__count)));
                            vlSelf->__Vfunc_leading_zero32__1584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1584__count)));
                            vlSelf->__Vfunc_leading_zero32__1584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3521__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3521__part 
                            = vlSelf->__Vfunc_leading_zero32__3521__value;
                        vlSelf->__Vfunc_leading_zero32__3521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1589__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1589__part 
                            = vlSelf->__Vfunc_leading_zero32__1589__value;
                        vlSelf->__Vfunc_leading_zero32__1589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1589__count)));
                            vlSelf->__Vfunc_leading_zero32__1589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1589__count)));
                            vlSelf->__Vfunc_leading_zero32__1589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1589__count)));
                            vlSelf->__Vfunc_leading_zero32__1589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1589__count)));
                            vlSelf->__Vfunc_leading_zero32__1589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1589__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1590__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1590__part 
                            = vlSelf->__Vfunc_leading_zero32__1590__value;
                        vlSelf->__Vfunc_leading_zero32__1590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1590__count)));
                            vlSelf->__Vfunc_leading_zero32__1590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1590__count)));
                            vlSelf->__Vfunc_leading_zero32__1590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1590__count)));
                            vlSelf->__Vfunc_leading_zero32__1590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1590__count)));
                            vlSelf->__Vfunc_leading_zero32__1590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3533__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3533__part 
                            = vlSelf->__Vfunc_leading_zero32__3533__value;
                        vlSelf->__Vfunc_leading_zero32__3533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3533__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1595__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1595__part 
                            = vlSelf->__Vfunc_leading_zero32__1595__value;
                        vlSelf->__Vfunc_leading_zero32__1595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1595__count)));
                            vlSelf->__Vfunc_leading_zero32__1595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1595__count)));
                            vlSelf->__Vfunc_leading_zero32__1595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1595__count)));
                            vlSelf->__Vfunc_leading_zero32__1595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1595__count)));
                            vlSelf->__Vfunc_leading_zero32__1595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1596__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1596__part 
                            = vlSelf->__Vfunc_leading_zero32__1596__value;
                        vlSelf->__Vfunc_leading_zero32__1596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1596__count)));
                            vlSelf->__Vfunc_leading_zero32__1596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1596__count)));
                            vlSelf->__Vfunc_leading_zero32__1596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1596__count)));
                            vlSelf->__Vfunc_leading_zero32__1596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1596__count)));
                            vlSelf->__Vfunc_leading_zero32__1596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3545__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3545__part 
                            = vlSelf->__Vfunc_leading_zero32__3545__value;
                        vlSelf->__Vfunc_leading_zero32__3545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1601__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1601__part 
                            = vlSelf->__Vfunc_leading_zero32__1601__value;
                        vlSelf->__Vfunc_leading_zero32__1601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1601__count)));
                            vlSelf->__Vfunc_leading_zero32__1601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1601__count)));
                            vlSelf->__Vfunc_leading_zero32__1601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1601__count)));
                            vlSelf->__Vfunc_leading_zero32__1601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1601__count)));
                            vlSelf->__Vfunc_leading_zero32__1601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1602__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1602__part 
                            = vlSelf->__Vfunc_leading_zero32__1602__value;
                        vlSelf->__Vfunc_leading_zero32__1602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1602__count)));
                            vlSelf->__Vfunc_leading_zero32__1602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1602__count)));
                            vlSelf->__Vfunc_leading_zero32__1602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1602__count)));
                            vlSelf->__Vfunc_leading_zero32__1602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1602__count)));
                            vlSelf->__Vfunc_leading_zero32__1602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3557__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3557__part 
                            = vlSelf->__Vfunc_leading_zero32__3557__value;
                        vlSelf->__Vfunc_leading_zero32__3557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1607__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1607__part 
                            = vlSelf->__Vfunc_leading_zero32__1607__value;
                        vlSelf->__Vfunc_leading_zero32__1607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1607__count)));
                            vlSelf->__Vfunc_leading_zero32__1607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1607__count)));
                            vlSelf->__Vfunc_leading_zero32__1607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1607__count)));
                            vlSelf->__Vfunc_leading_zero32__1607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1607__count)));
                            vlSelf->__Vfunc_leading_zero32__1607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1608__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1608__part 
                            = vlSelf->__Vfunc_leading_zero32__1608__value;
                        vlSelf->__Vfunc_leading_zero32__1608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1608__count)));
                            vlSelf->__Vfunc_leading_zero32__1608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1608__count)));
                            vlSelf->__Vfunc_leading_zero32__1608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1608__count)));
                            vlSelf->__Vfunc_leading_zero32__1608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1608__count)));
                            vlSelf->__Vfunc_leading_zero32__1608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3569__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3569__part 
                            = vlSelf->__Vfunc_leading_zero32__3569__value;
                        vlSelf->__Vfunc_leading_zero32__3569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3569__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1613__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1613__part 
                            = vlSelf->__Vfunc_leading_zero32__1613__value;
                        vlSelf->__Vfunc_leading_zero32__1613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1613__count)));
                            vlSelf->__Vfunc_leading_zero32__1613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1613__count)));
                            vlSelf->__Vfunc_leading_zero32__1613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1613__count)));
                            vlSelf->__Vfunc_leading_zero32__1613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1613__count)));
                            vlSelf->__Vfunc_leading_zero32__1613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1613__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1614__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1614__part 
                            = vlSelf->__Vfunc_leading_zero32__1614__value;
                        vlSelf->__Vfunc_leading_zero32__1614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1614__count)));
                            vlSelf->__Vfunc_leading_zero32__1614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1614__count)));
                            vlSelf->__Vfunc_leading_zero32__1614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1614__count)));
                            vlSelf->__Vfunc_leading_zero32__1614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1614__count)));
                            vlSelf->__Vfunc_leading_zero32__1614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3581__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3581__part 
                            = vlSelf->__Vfunc_leading_zero32__3581__value;
                        vlSelf->__Vfunc_leading_zero32__3581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3581__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1619__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1619__part 
                            = vlSelf->__Vfunc_leading_zero32__1619__value;
                        vlSelf->__Vfunc_leading_zero32__1619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1619__count)));
                            vlSelf->__Vfunc_leading_zero32__1619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1619__count)));
                            vlSelf->__Vfunc_leading_zero32__1619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1619__count)));
                            vlSelf->__Vfunc_leading_zero32__1619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1619__count)));
                            vlSelf->__Vfunc_leading_zero32__1619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1620__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1620__part 
                            = vlSelf->__Vfunc_leading_zero32__1620__value;
                        vlSelf->__Vfunc_leading_zero32__1620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1620__count)));
                            vlSelf->__Vfunc_leading_zero32__1620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1620__count)));
                            vlSelf->__Vfunc_leading_zero32__1620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1620__count)));
                            vlSelf->__Vfunc_leading_zero32__1620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1620__count)));
                            vlSelf->__Vfunc_leading_zero32__1620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3593__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3593__part 
                            = vlSelf->__Vfunc_leading_zero32__3593__value;
                        vlSelf->__Vfunc_leading_zero32__3593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3593__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1625__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1625__part 
                            = vlSelf->__Vfunc_leading_zero32__1625__value;
                        vlSelf->__Vfunc_leading_zero32__1625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1625__count)));
                            vlSelf->__Vfunc_leading_zero32__1625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1625__count)));
                            vlSelf->__Vfunc_leading_zero32__1625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1625__count)));
                            vlSelf->__Vfunc_leading_zero32__1625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1625__count)));
                            vlSelf->__Vfunc_leading_zero32__1625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1625__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1626__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1626__part 
                            = vlSelf->__Vfunc_leading_zero32__1626__value;
                        vlSelf->__Vfunc_leading_zero32__1626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1626__count)));
                            vlSelf->__Vfunc_leading_zero32__1626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1626__count)));
                            vlSelf->__Vfunc_leading_zero32__1626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1626__count)));
                            vlSelf->__Vfunc_leading_zero32__1626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1626__count)));
                            vlSelf->__Vfunc_leading_zero32__1626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3605__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3605__part 
                            = vlSelf->__Vfunc_leading_zero32__3605__value;
                        vlSelf->__Vfunc_leading_zero32__3605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3605__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1631__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1631__part 
                            = vlSelf->__Vfunc_leading_zero32__1631__value;
                        vlSelf->__Vfunc_leading_zero32__1631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1631__count)));
                            vlSelf->__Vfunc_leading_zero32__1631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1631__count)));
                            vlSelf->__Vfunc_leading_zero32__1631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1631__count)));
                            vlSelf->__Vfunc_leading_zero32__1631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1631__count)));
                            vlSelf->__Vfunc_leading_zero32__1631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1632__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1632__part 
                            = vlSelf->__Vfunc_leading_zero32__1632__value;
                        vlSelf->__Vfunc_leading_zero32__1632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1632__count)));
                            vlSelf->__Vfunc_leading_zero32__1632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1632__count)));
                            vlSelf->__Vfunc_leading_zero32__1632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1632__count)));
                            vlSelf->__Vfunc_leading_zero32__1632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1632__count)));
                            vlSelf->__Vfunc_leading_zero32__1632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1632__Vfuncout)) 
                             - (IData)(8U))));
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
}
